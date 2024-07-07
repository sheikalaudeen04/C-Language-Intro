#include <stdio.h>
int main() {
    int i,n,s=0,t=9;
    printf("Input the number of terms: ");
    scanf("%d",&n);
    printf("The series is: ");
    for(i=1;i<=n;i++) {
        printf("%d ",t);
        s+=t;
        t=t*10+9;
    }
    printf("\nThe sum of the series = %d\n", s);
    return 0;
}

