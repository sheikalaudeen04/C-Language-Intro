#include<stdio.h>
int main(){
	int i,j,k,a[50][50],b[50][50],c[50][50],n;
	printf("Enter no of rows and columns: ");
	scanf("%d",&n);
	printf("Matrix 1\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix 2\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			c[i][j]=0;
			for(j=0;j<n;j++){
				c[i][j]+=a[k][j]*b[j][i];
			}
		}
	}
	printf("Displaying:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
