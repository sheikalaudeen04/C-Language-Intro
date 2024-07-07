#include <stdio.h>
int main(){
    int ar[100],n,i,j,min,t;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter the value for %dth index: ", i);
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(ar[j]<ar[min]){
                min=j;
            }
        }
        t=ar[min];
        ar[min]=ar[i];
        ar[i]=t;
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}

