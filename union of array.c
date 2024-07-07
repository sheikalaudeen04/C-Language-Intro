//write program to print union of two arrays
#include<stdio.h>
void ReaD(int a[],int n)
{
	int i;
	for(i=0;i<n;i+=1)
		scanf("%d",&a[i]);
}
void disp(int a[],int n){
	int i;
	for(i=0;i<n;i+=1)
		printf("%d ",a[i]);
	printf("\n");
}
int main(){
	int n1,n2,a[100],b[100];
	printf("Enter the size of array 1: ");
	scanf("%d",&n1);
	printf("Enter the size of array 2: ");
	scanf("%d",&n2);
	ReaD(a,n1);
	ReaD(b,n2);
	disp(a,n1);
	disp(b,n2);
	
}
