#include<stdio.h>
int main(){
	int ar[100][100],i,j,n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("Enter the element: ");
			scanf("%d",&ar[i][j]);
		}
	}
	printf("The transpose of matrix is:\n");
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("%d ",ar[j][i]);;
		}
		printf("\n");
	}
	return 0;
}
