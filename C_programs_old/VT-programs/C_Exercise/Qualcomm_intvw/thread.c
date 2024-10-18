#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_mutex_t lock;

//pthread_cond_t condition_var = PTHREAD_COND_INITIALIZER;
void *pthreads_primary_cluster();
void *pthreads_secondary_cluster();
int count = 1;

int main()
{
	pthread_t thread1, thread2;
	pthread_create(&thread2, NULL, pthreads_secondary_cluster, NULL);
	pthread_create(&thread1, NULL,pthreads_primary_cluster, NULL);
	pthread_join(thread2, NULL);
	pthread_join(thread1, NULL);
	pthread_mutex_destroy(&lock);
	return 0;
}
void *pthreads_primary_cluster()
{
	while(count <100) {
		if ( count % 2 == 0 ) {
			printf("In primary thread %d ",count);
			pthread_mutex_lock( &lock );
		}
		count++;
		pthread_mutex_unlock( &lock );
	}
}
void *pthreads_secondary_cluster()
{
	while(count<100) {
		if ( count % 2 == 1 ) {
			printf("In secondary thread %d ",count);
		}
		count++;
		pthread_mutex_unlock( &lock );
	}
}
