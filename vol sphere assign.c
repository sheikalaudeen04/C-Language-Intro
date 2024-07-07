#include<stdio.h>
#include<math.h>
main(){
	float r,v;
	printf("Enter the value for r of sphere: ");
	scanf("%f",&r);
	v=(4.0/3.0)*(22.0/7.0)*pow(r,3);
	printf("The volume of sphere is:%f",v);
}
