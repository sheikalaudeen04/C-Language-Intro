/*#include<stdio.h>
int main()
{
	int r,c,i,j,a[100][100];
	printf(" enter no of rows req: ");
	scanf("%d",&r);
	printf("enter no of col req:  ");
	scanf("%d",&c);
	for (i=0;i<r;i+=1)
	{
		for(j=0;j<c;j+=1)
		{
		printf("enter the val for pos %d%d :  ",i,j);
		scanf("%d",&a[i][j]);
	}
	printf("\n");
	}
	for (i=0;i<r;i+=1)
	{
		for(j=0;j<c;j+=1)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int b[100][100];
	printf(" enter no of rows req: ");
	scanf("%d",&r);
	printf("enter no of col req:  ");
	scanf("%d",&c);
	for (i=0;i<r;i+=1)
	{
		for(j=0;j<c;j+=1)
		{
		printf("enter the val for pos %d%d :  ",i,j);
		scanf("%d",&b[i][j]);
	}
	printf("\n");
	}
	
	for (i=0;i<r;i+=1)
	{
		for(j=0;j<c;j+=1)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int k,cr[100][100];
	for(k=0;k<r;k+=1)
	{
	for (i=0;i<r;i+=1)
	{
	cr[i][j]=0;
	
		for(j=0;j<c;j+=1)
		{
		 printf("%d*%d\t+\t",a[i][j],b[j][i]);
		 cr[k][i]+= a[k][j]*b[j][i];
		}
		printf("%d\n",cr[k][i]);
	}
    }
    for(i=0;i<r;i+=1)
    {
    	for(j=0;j<c;j+=1)
    	{
    		printf("%d\t",cr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
#include<stdio.h>
int main(){
int a[5][5],b[5][5],c[5][5],m1,m2,n1,n2,x,y,z;
printf("Enter no. of rows in matrix 1: ");
scanf("%d",&m1);
printf("Enter no. of columns in matrix 1: ");
scanf("%d",&m2);
printf("Enter the elements of Matrix-1: \n");
 
for(x=0;x<m1;x++){
    for(y=0;y<m2;y++){
        scanf("%d",&a[x][y]);
    }
}
 printf("Enter no. of rows in matrix 2: ");
scanf("%d",&n1);
printf("Enter no. of columns in matrix 2: ");
scanf("%d",&n2);
printf("Enter the elements of Matrix-2: \n");
 
for(x=0;x<n1;x++){
    for(y=0;y<n2;y++){
        scanf("%d",&b[x][y]);
    }
}
if(m2==n1){
for(x=0;x<m1;x++){
    for(y=0;y<n2;y++){
        c[x][y]=0;
        for(z=0;z<m2;z++){
            c[x][y]+=a[x][z]*b[z][y];
        }
    }
}
}
 else{
 	printf("The mul not possible.");
 }
printf("The product of the two matrices is: \n");
for(x=0;x<m1;x++){
    for(y=0;y<n2;y++){
        printf("%d\t",c[x][y]);
    }
    printf("\n");
}
return 0;
}
