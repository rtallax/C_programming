#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<signal.h>
#include<stdbool.h>

volatile bool const done =false;
//bool done =false;

void *tfun(void *arg)
{
	sleep(1);
	done=true;
	return NULL;
}

int main()
{
	pthread_t t1;
	pthread_create(&t1,NULL,tfun,NULL);
//	pthread_join(t1,NULL);
	printf("Waiting.......\n");
	while(!done)
	{
	}
	printf("Task completed.....\n");	
}
