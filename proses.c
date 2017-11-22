#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
int main()
{
	pid_t islem;
	int i;
	
	islem = fork();
	printf("%d\n", islem );

	if (islem==0)
	{
		for(i=0;i<3;i++)
		{
			printf("Ben Cocugum\n");
		}
	return 0;
	}

	for(i=0;i<3;i++)
	{
		printf("Ben Ebeveynim\n");
	}

	return 0;
}
