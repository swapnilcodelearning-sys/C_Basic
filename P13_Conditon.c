#include<stdio.h>
int main()
{
    int var1;
    printf("Enter a number : ");
    scanf("%d",&var1);
    if(var1 > 10)
    {
        printf("\nGreater than 10\n");
    }

    printf("\nEnter another number : ");
    scanf("%d", &var1);

    if(var1 > 10){
        printf("\nGreater than 10\n");
    }
    else if(var1 < 10){
        printf("\nLess than 10\n");
    }
    else{
        printf("\nEqual to 10.\n");
    }

    return 0;
}