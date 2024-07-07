#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter the three sides of the triangle: ");
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	if(a==b&&b==c){
		printf("The triangle is Equilateral");
	}
	else if(a==b||a==c||b==c){
		printf("The triangle is isosceles");
	}
	else{
		printf("The triangle is scalene");
	}
	return 0;
}
