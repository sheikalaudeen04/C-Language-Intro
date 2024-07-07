#include <stdio.h>
int main() {
    char str1[1000], str2[1000];
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
    printf("7.String Compare (case insensitive)\n");
    printf("8.String Concatenation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:{
            int length1=0,length2=0,i;
            for(i=0;str1[i]!=0;i+=1);
            length1=i;
            for(i=0;str2[i]!=0;i+=1);
            length2=i;
            printf("Length of string 1: %d\n",length1);
            printf("Length of string 2: %d\n",length2);
            break;
        }
        case 2:{
        	int i;
            for(i=0;str2[i]!='\0';i+=1){
				str1[i]=str2[i];
            }
            str1[i]='\0';
            printf("String 1 after copy: %s\n",str1);
            break;
        }
        case 3:{
            int equal=1,i=0;
            while(str1[i]!='\0'||str2[i]!='\0') {
                if(str1[i]!=str2[i]){
                    equal=0;
                    break;
                }
                i++;
            }
            if(equal)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        }
        case 4:{
            int len=0,i;
            while(str1[len]!='\0')
                len++;
            for(i=0;i<len/2;i++){
                char temp=str1[i];
                str1[i]=str1[len-i-1];
                str1[len-i-1]=temp;
            }
            len=0;
            while(str2[len]!='\0')
                len++;
            for(i=0;i<len/2;i++){
                char temp=str2[i];
                str2[i]=str2[len -i-1];
                str2[len-i-1]=temp;
            }
            printf("Reversed string 1: %s\n",str1);
            printf("Reversed string 2: %s\n",str2);
            break;
        }
        case 5:{
        	int i;
        	for(i=0;str1[i]!='\0';i+=1){
            if(str1[i]>='A'&&str1[i]<='Z')
        		str1[i]+=32;
            }
            for(i=0;str2[i]!='\0';i+=1){
            if(str2[i]>='A'&&str2[i]<='Z')
        		str2[i]+=32;
            }
            printf("Lowercase string 1: %s\n",str1);
            printf("Lowercase string 2: %s\n",str2);
            break;
        }
        case 6:{
        	int i;
            for(i=0;str1[i]!='\0';i+=1){
        	if(str1[i]>='a'&&str1[i]<='z')
        		str1[i]-=32;
            }
            for(i=0;str2[i]!='\0';i+=1){
        	if(str2[i]>='a'&&str2[i]<='z')
        		str2[i]-=32;
            }
            printf("Uppercase string 1: %s\n",str1);
            printf("Uppercase string 2: %s\n",str2);
            break;
        }
        case 7:{
        	int i;
        	for(i=0;str1[i]!='\0';i+=1){
            if(str1[i]>='A'&&str1[i]<='Z')
        		str1[i]+=32;
            }
            for(i=0;str2[i]!='\0';i+=1){
            if(str2[i]>='A'&&str2[i]<='Z')
        		str2[i]+=32;
            }
            int equal=1;
			i=0;
            while(str1[i]!='\0'||str2[i]!='\0'){
                if(str1[i]!=str2[i]){
                    equal=0;
                    break;
                }
                i++;
            }
            if(equal)
                printf("Strings are equal (case insensitive)\n");
            else
                printf("Strings are not equal (case insensitive)\n");
            break;
        }
        case 8:{
            int len1=0,len2=0;
            while(str1[len1]!='\0')
                len1++;
            while(str2[len2]!='\0')
                len2++;
            int i=len1,j=0;
            while(j<len2){
                str1[i]=str2[j];
                i++;
                j++;
            }
            str1[i]='\0';
            printf("Concatenated string: %s\n",str1);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

