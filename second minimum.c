#include<stdio.h>
int main(){
    int arr[100],n,i,min,min2;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    // Input elements of the array
    for(i=0;i<n;i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d",&arr[i]);
    }
    // Initialize min and min2 with maximum possible integer value
    min=min2=99999;
    // Find minimum element
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min2=min;
            min=arr[i];
        }
        else if(arr[i]<min2&&arr[i]!=min){
            min2=arr[i];
        }
    }
    // Check if a second minimum element is found
    if(min2==99999){
        printf("No second minimum element found.\n");
    }else{
        printf("Second minimum element: %d\n", min2);
    }
    return 0;
}

