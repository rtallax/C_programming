#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t condition_var = PTHREAD_COND_INITIALIZER;
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
	return 0;
}
void *pthreads_primary_cluster()
{
	while(count <100) {
		pthread_mutex_lock( &count_mutex );
		if ( count % 2 == 0 ) {
			printf("%d ",count);
			pthread_cond_wait( &condition_var, &count_mutex );
		}
		count++;
		pthread_cond_signal( &condition_var );
		pthread_mutex_unlock( &count_mutex );
	}
}
void *pthreads_secondary_cluster()
{
	while(count<100) {
		pthread_mutex_lock( &count_mutex );
		if ( count % 2 == 1 ) {
			printf("%d ",count);
			pthread_cond_wait( &condition_var, &count_mutex );
		}
		count++;
		pthread_cond_signal( &condition_var );
		pthread_mutex_unlock( &count_mutex );
	}
}
