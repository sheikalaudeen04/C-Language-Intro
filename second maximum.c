#include <stdio.h>
int main(){
    int arr[100],n,i,max,max2;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    // Input elements of the array
    for(i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    // Initialize max and max2 with minimum possible integer value
    max=max2=-99999;
    // Find maximum element
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        } else if(arr[i]>max2&&arr[i]!=max){
            max2=arr[i];
        }
    }
    // Check if a second maximum element is found
    if(max2==-99999){
        printf("No second maximum element found.\n");
    }else{
        printf("Second maximum element: %d\n", max2);
    }
    return 0;
}

