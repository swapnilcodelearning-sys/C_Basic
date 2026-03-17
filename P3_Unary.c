#include<stdio.h>
int main()
{
    int pvar1 = 10;
    //Increment Operator

    printf("Pre-Increment : %d\n",++pvar1); //11
    printf("Post-Increment : %d\n",pvar1++); //11
    //10
    
    int nvar1 = 10;
    //Decrement Operator
    printf("Pre-Decrement : %d\n",--nvar1); //9
    printf("Post-Decrement : %d\n",nvar1--); //9
    //8

    return 0;
}