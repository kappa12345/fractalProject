#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libfractal/fractal.h"
#include <semaphore.h>

pthread_mutex_t mutex;
sem_t empty;
sem_t full;

/*
 * Cette fonction gérera la partie lecture effectuée par les threads
 */
void *reader(void *file)
{
    return NULL;
}


/*
 * Cette fonction gérera la partie écriture effectuée par les threads
 */
void *writer(void)
{
    return NULL;
}



int main()
{

}
