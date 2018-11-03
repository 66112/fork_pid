#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	int ret=fork();

	if(ret < 0)
	{
		perror("fork");
		return 1;
	}
	else if(ret==0)
	{
		printf("I am a child:%d\n",getpid());
	}
	else
	{
		printf("I am a father:%d\n",getpid());
	}
	sleep(2);
	return 0;
}
