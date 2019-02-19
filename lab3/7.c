#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>

void main() {
	
	pid_t A,B,C,D,E,F,G,H,I;
	
	B = fork();
	printf("Parent: ");
	printf("%ld\n", getppid());
	printf("Child: ");
	printf("%ld\n", getpid());
	
	if(B > 0)
	{
		C = fork();
		printf("Parent: ");
		printf("%ld\n", getppid());
		printf("Child: ");
		printf("%ld\n", getpid());
		
		D = fork();
		printf("Parent: ");
		printf("%ld\n", getppid());
		printf("Child: ");
		printf("%ld\n", getpid());
		
		if(C == 0)
		{
			E = fork();
			printf("Parent: ");
			printf("%ld\n", getppid());
			printf("Child: ");
			printf("%ld\n", getpid());
		
		}
		else
		{
			F = fork();
			printf("Parent: ");
			printf("%ld\n", getppid());
			printf("Child: ");
			printf("%ld\n", getpid());
			
		}
		
		if(D == 0)
		{
			G = fork();
			printf("Parent: ");
			printf("%ld\n", getppid());
			printf("Child: ");
			printf("%ld\n", getpid());
			
			if(G == 0)
			{
				H = fork();
				printf("Parent: ");
				printf("%ld\n", getppid());
				printf("Child: ");
				printf("%ld\n", getpid());
				
			}
			else
			{
				I = fork();
				printf("Parent: ");
				printf("%ld\n", getppid());
				printf("Child: ");
				printf("%ld\n", getpid());
			}
		}
	}	
		return 0;
	}
			
