#include<stdio.h>
int main()
{
    int var1 = 10;
    printf("------Assignment Operators----\n");
    printf("var1 : %d\n",var1);
    printf("var1 += 3; var1 = %d\n",var1+=3);
    printf("var1 -= 2; var1 = %d\n",var1-=2);

    int a = 10, b = 20, c = 30;
    int d;
    printf("\n\n------Assignment Precedence----\n");
    printf("A : %d, B : %d, C : %d\n",a,b,c);
    d = --a,b++,c+5;
    printf("D= --A,B++,C+5 = %d\n\n",d);
    printf("A : %d, B : %d, C : %d\n",a,b,c);
    d = (--a,b++,c+5);
    printf("D= (--A,B++,C+5) = %d\n\n",d);
    printf("A : %d, B : %d, C : %d\n",a,b,c);
    return 0;
}