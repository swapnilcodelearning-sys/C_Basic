#include<stdio.h>
int main()
{
    int var1 = 150;

    printf("%5d\n",var1); //Width 5: <space><space>150
    printf("%05d\n",var1); //Width 5 :00150
    printf("%-5d.\n",var1); //Left Justified : 150<space><space>.

    float flt1 = 16.5435622f;

    printf("|%8.2f|\n",flt1);
    printf("|%08.2f|\n",flt1);
    return 0;
}