#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int count   = 1;
static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

void* pthreads_primary_cluster(void *arg) 
{
	int ret;
	ret= pthread_mutex_lock(&mtx);
	while (count  < 100) {
		/*Print Even numbers */
		if(count % 2 == 0) {
			printf("Even:%d\n", count);
		}
		count++;
	}
	pthread_mutex_unlock(&mtx);
}

void* pthreads_secondary_cluster(void *arg) 
{
	pthread_mutex_lock(&mtx);
	while (count < 100) {
		/* Print odd numbers */
		if(count % 2 == 1) {
			printf("ODD:%d\n",count);
		}
		count ++;
	}
	pthread_mutex_unlock(&mtx);
}

int main()
{
	
}
