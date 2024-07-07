#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str1[1000],str2[1000];
    int choice;
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    printf("\n1.String Length\n");
    printf("2.String Copy\n");
    printf("3.String Compare\n");
    printf("4.String Reverse\n");
    printf("5.String Lower\n");
    printf("6.String Upper\n");
    printf("7.String Compare(case insensitive)\n");
    printf("8.String Concatenation\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Length of string 1: %ld\n",strlen(str1));
            printf("Length of string 2: %ld\n",strlen(str2));
            break;
        case 2:
            strcpy(str1,str2);
            printf("String 1 after copy: %s\n",str1);
            break;
        case 3:
            if(strcmp(str1,str2)==0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 4:
            strrev(str1);
            strrev(str2);
            printf("Reversed string 1: %s\n",str1);
            printf("Reversed string 2: %s\n",str2);
            break;
        case 5:
            strlwr(str1);
            strlwr(str2);
            printf("Lowercase string 1: %s\n",str1);
            printf("Lowercase string 2: %s\n",str2);
            break;
        case 6:
            strupr(str1);
            strupr(str2);
            printf("Uppercase string 1: %s\n",str1);
            printf("Uppercase string 2: %s\n",str2);
            break;
        case 7:
            if(strcasecmp(str1,str2)==0)
                printf("Strings are equal(case insensitive)\n");
            else
                printf("Strings are not equal(case insensitive)\n");
            break;
        case 8:
            strcat(str1,str2);
            printf("Concatenated string: %s\n",str1);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

