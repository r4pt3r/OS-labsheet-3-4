#include <stdio.h>
#include <string.h>
#include <sys/types.h>

void main(void) {
	pid_t pid;
	pid = fork();
	wait(pid);
	
	if(pid == 0){
		printf("The child process is under execution\n");
		int side;
		printf("Enter the size of square: ");
		scanf("%d", &side);
		printf("Area of the square: %d\n", (side*side));
		printf("Perimeter of the square %d\n",(4*side));
	}
	
	else {
	printf("The parent process is under execution\n");
	float radius;
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	printf("Area of the circle: %.2f\n",(3.14*radius*radius));
	printf("The circumference of the circle is: %.2f\n", (2*3.14*radius));
	}	
}
	
