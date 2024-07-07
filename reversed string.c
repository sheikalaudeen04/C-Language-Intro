#include<stdio.h>
int main(){
	char a[100],t;
	int i,n,j;
	printf("Enter a string: ");
	gets(a);
	for(i=0;a[i]!=0;i+=1);
	printf("The length of the string is:%d",i);
	n=i;
	i=0;
	j=n-1;
	while(i<j){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i=i+1;
		j=j-1;
	}
	printf("\nThe reversed string is:%s",a);
	
	return 0;
}
