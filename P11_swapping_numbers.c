#include<stdio.h>
int main()
{
    int x = 5, y = 7;


    //Temporary variables
    int temp;
    printf("Initial Values: %d , %d\n",x,y);
    temp = x; //temp = 5
    x = y;    // x = 7
    y = temp; // y = 5
    printf("Swapped Values: %d , %d\n\n",x,y);

    //Arithmetic
    x = 5;
    y = 7;
    printf("Initial Values: %d , %d\n",x,y);
    x = x + y;    //x = 12, y = 7
    y = x - y;  // x = 12, y = 12-7 = 5
    x = x - y;  // x = 12 - 5 = 7;
    printf("Swapped Values: %d , %d\n\n",x,y);

    //XOR
    x = 5;
    y = 7;
    printf("Initial Values: %d , %d\n",x,y);
    x = x ^ y;    // x = 0101 ^ 0111 = 0010 = 2, y = 7
    y = x ^ y;   // y = 0111 ^ 0010 = 0101 = 5, x = 2
    x = x ^ y;  // x = 0010 ^ 0101 = 0111 = 7, y = 5
    printf("Swapped Values: %d , %d\n\n",x,y);


    return 0;
}