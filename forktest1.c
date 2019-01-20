#include <unistd.h>
#include <stdio.h>

int main()
{
	pid_t fpid;
	int cnt=0;
	printf("round  son/father fatherid pid\n");
	for (int i=0;i<2;i++)
	{
		fpid=fork();
		if (fpid>0)
		{
			printf("%d	father 	%d		%d\n",i,getppid(),getpid());
		}
		else
		{
			printf("%d	son 	%d		%d\n",i,getppid(),getpid());
		}
	}

	return 0;

}
