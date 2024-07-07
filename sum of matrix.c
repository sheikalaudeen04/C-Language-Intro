#include<stdio.h>
int main(){
	int a1[100][100],a2[100][100],s[100][100],i,n,j;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("Enter the value for first array index %d%d: ",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("Enter the value for second array index %d%d: ",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			s[i][j]=a1[i][j]+a2[i][j];
		}
	}
	printf("\nThe sum of the matrix is:\n");
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	/*
	product of an array
	int k;
	for(k=0;k<r;k+=1){
	for(i=0;i<r;i+=1){
	cr[i][j]=0;
	for(j=0;j<r;j+=1){
	printf("%d%d\t+\t",ar[k][j],br[i][j]);
	cr[k][i]+=ar[k][j]*br[j][i];
	}
	printf("%d\n",cr[k][i]);
	}
	}
	*/
	
	return 0;
}
