/**
   Significado mensajes:
  TOC TOC → quiere entrar a comer
  |▄|    → se ha sentado a comer
  ¡o      → coge palillo izquierdo
  ¡o¡     → coge palillo derecho
  /o\ ÑAM → está comiendo
  ¡o_     → suelta palillo derecho
  _o      → suelta palillo izquierdo
  |_|     → sale de comer
*/

// Només fem servir el nucli app_cpu per simplicitat
// i tenint en compte que alguns esp32 són unicore
// unicore    -> app_cpu = 0
// 2 core  -> app_cpu = 1 (prog_cpu = 0)

#if CONFIG_FREERTOS_UNICORE
static const BaseType_t app_cpu = 0;
#else
static const BaseType_t app_cpu = 1;
#endif
//#define INCLUDE_vTaskSuspend    1    //ja està posat per defecte sino descomentar es el temps de espera                //infinit als semàfors

/*************************** Variables Globals i definicions **************************************/

#define NUM_OF_PHILOSOPHERS 5                         //Nombre de filòsofs
#define MAX_NUMBER_ALLOWED (NUM_OF_PHILOSOPHERS - 1)  // Màxim nombre de filòsofs a l'habitació  (un menys que el total per evitar deadlock)
#define ESPERA 200  //interval d'espera de vTaskDelay
#define THINKING 2 // Creo que es igual que el espera
#define HUNGRY 1
#define EATING 0
#define LEFT (phnum + 4) % NUM_OF_PHILOSOPHERS
#define RIGHT (phnum + 1) % NUM_OF_PHILOSOPHERS

int state[NUM_OF_PHILOSOPHERS];
int phil[NUM_OF_PHILOSOPHERS] = { 0, 1, 2, 3, 4 };

void test(int phnum)
{
  if (state[phnum] == HUNGRY && state[LEFT] != EATING && state[RIGHT] != EATING) {
    // state that eating
    state[phnum] = EATING;

    delay(2);

    printf("Philosopher %d takes fork %d and %d\n",phnum + 1, LEFT + 1, phnum + 1);

    printf("Philosopher %d is Eating\n", phnum + 1);

    // sem_post(&S[phnum]) has no effect
    // during takefork
    // used to wake up hungry philosophers
    // during putfork
    sem_post(&S[phnum]);
  }
}

void put_fork(int phnum)
{

  sem_wait(&mutex);

  // state that thinking
  state[phnum] = THINKING;

  printf("Philosopher %d putting fork %d and %d down\n",phnum + 1, LEFT + 1, phnum + 1);
  printf("Philosopher %d is thinking\n", phnum + 1);

  test(LEFT);
  test(RIGHT);

  sem_post(&mutex);
}

// take up chopsticks
void take_fork(int phnum)
{

  sem_wait(&mutex);

  // state that hungry
  state[phnum] = HUNGRY;

  printf("Philosopher %d is Hungry\n", phnum + 1);

  // eat if neighbours are not eating
  test(phnum);

  sem_post(&mutex);

  // if unable to eat wait to be signalled
  sem_wait(&S[phnum]);

  delay(1);
}

void* philosopher(int num)
{

  while (1) {

    int i = num;

    delay(1);

    take_fork(i);

    delay(0);

    put_fork(i);
  }
}


void setup()
{
  int i;
  pthread_t thread_id[NUM_OF_PHILOSOPHERS];

  // initialize the semaphores
  sem_init(&mutex, 0, 1);

  for (i = 0; i < NUM_OF_PHILOSOPHERS; i++) {
    sem_init(&S[i], 0, 0);
  }

  for (i = 0; i < NUM_OF_PHILOSOPHERS; i++) {
    // create philosopher processes
    pthread_create(&thread_id[i], NULL, philosopher, &phil[i]);
    printf("Philosopher %d is thinking\n", i + 1);
  }

  for (i = 0; i < NUM_OF_PHILOSOPHERS; i++) {
    pthread_join(thread_id[i], NULL);
  }

}
