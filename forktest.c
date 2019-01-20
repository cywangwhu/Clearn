#include <unistd.h>
#include <stdio.h>

int main()
{
	pid_t fpid;
	int cnt=0;
	fpid=fork();
	if (fpid < 0)
		printf("fork error!\n");
	else if (fpid==0)
		{
			printf("son process,pid:%d\n",getpid());
			cnt++;
		}
	else
		{
			printf("father process,pid:%d\n",getpid());
			cnt++;
		}
	return 0;

}
