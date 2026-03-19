#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf(" %c",&ch);

    if(ch >= 0 && ch <= 31){
        printf("Control Character\n");
    }
    else if(ch >= 32 && ch <= 47){
        printf("Special Characters\n");
    }
    else if(ch >= 48 && ch <= 57){
        printf("Digits O to 9\n");
    }
    else if(ch >= 65 && ch <= 90){
        printf("Uppercase A to Z\n");
    }
    else if(ch >= 97 && ch <= 122){
        printf("Lowercase a to z\n");
    }
    else{
        printf("Unkown!!\n");
    }
    return 0;
}