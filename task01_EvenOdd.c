#include <stdio.h>
int main() {
	int num1;
	printf("Enter a integer: ");
	scanf("%d", &num1);
	if(num1 %2==0) {
		printf("%d is Even\n", num1);
	}
	else {
	printf("%d is Odd\n", num1);
	}
	return 0;
}