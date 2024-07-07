#include<stdio.h>
main(){
	float a,b;
	printf("Enter the value for a: ");
	scanf("%f",&a);
	printf("Enter the value for b: ");
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The values of a and b after swapped are: %f and %f",a,b);
	
}
