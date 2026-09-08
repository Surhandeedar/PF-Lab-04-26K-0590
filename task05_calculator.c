#include<stdio.h>
int main() {
	int num1;
	char operator;
	int num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter your operator: ");
	scanf(" %c", &operator);
	printf("Enter second number: ");
	scanf("%d", &num2);

	switch(operator) {
		case '+':
			printf("sum = %d", num1+num2);
			break;
			case '-':
			    printf("subtraction = %d", num1-num2);
		        break;
		    	case '*':
			        printf("multiplication = %d", num1*num2);
		        	break;
		        	case '/':
		        		if(num2==0) {
		        			printf("Error: Division by zero is not allowed!");
						} else {
						printf("division = %d", num1/num2);
						}
						break;
						default:
						printf("Error: invalid operator!");						}
                    	return 0;
}
