#include<stdio.h>
int main(){
	float t;
	printf("Enter the temperature in celsius: ");
	scanf("%f",&t);
	if(t<0){
		printf("It's freezing weather");
	}
	else if(t>=0&&t<10){
		printf("It's very cold weather");
	}
	else if(t>=10&&t<20){
		printf("It's cold weather");
	}
	else if(t>=20&&t<30){
		printf("It's normal weather");
	}
	else if(t>=30&&t<40){
		printf("It's Hot weather");
	}
	else{
		printf("It's very hot weather");
	}
	return 0;
}
