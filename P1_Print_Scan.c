#include<stdio.h>
int main()
{
    int var1;
    printf("Enter a number : ");
    scanf("%d",&var1);

    char ch;
    printf("Enter character : ");
    scanf(" %c", &ch);

    printf("\n\nNumber : %d, \t Char : %c\n",var1,ch);
    return 0;
}