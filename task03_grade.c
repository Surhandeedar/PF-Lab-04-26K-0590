#include <stdio.h>
int main() {
	float totalmarks;
	printf("Enter your total marks: ");
	scanf("%f", &totalmarks);
	if(totalmarks>=85) {
		printf("Grade: A");
	} 
	else if(totalmarks>=75) {
		printf("Grade: B");
	} 
	else if(totalmarks>=65) {
		printf("Grade: C");
	}
	else if(totalmarks>=50) {
		printf("Grade: D");
	}
	else {
		printf("Fail");
	}
	return 0;
}