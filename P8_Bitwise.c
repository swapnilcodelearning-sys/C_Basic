#include<stdio.h>
int main()
{
    int x = 4; //0100
    int y = 7; //0111
    printf("%d & %d : %d\n", x,y,x&y); //0100 & 0111 = 0100 = 4
    printf("%d | %d : %d\n",x,y,x|y); //0100 | 0111 = 0111 = 7
    printf("%d ^ %d : %d\n",x,y,x^y); //0100 ^ 0111 = 0011 = 3
    
    /*
        Set : number | (1<<bit)
        Clear : number & ~(1<<bit)
        Toggle : number ^ (1<<bit)

        Left shift : number << bit  (number x 2^bit)
        Right shift : number >> bit (number / 2^bit)
        
        Check nth bit : (number >> n) & 1

        LSB : number & 1

        MSB : (number>>31) & 1

    */

    // 0100 | 1<<1 = 0100 | 0010 = 0110
    printf("Set bit 1 on %d : %d\n", x , x|(1<<1));

    // 0100 & ~(1<<2) = 0100 & ~(1<<2) = 0100 & ~(0100) = 0100 & 1011 = 0000
    printf("Clear bit 2 on %d : %d\n", x, x & ~(1<<2));

    // 0100 ^ (1<<3) = 0100 ^ 1000 = 1100
    printf("Toggle bit 3 on %d : %d\n",x,x ^ (1<<3));

    // Left shift 
    // 0100 << 1 = 1000 = 8
    // 4 * 2^1 = 8
    printf("Left shift %d by 1 : %d\n",x,x<<1);

    //Right Shift
    // 0100 >> 1 = 0010 = 2
    //4/2^1 = 2
    printf("Right shift %d by 1 : %d\n",x,x>>1);


    //Check nth bit
    printf("Check 2nd bit for %d : %d\n",x,(x>>2) & 1);


    //LSB
    printf("LSB of %d : %d\n",x,x&1);

    //MSB
    printf("MSB of %d : %d\n",x, (x>>31) & 1);


    return 0;
}