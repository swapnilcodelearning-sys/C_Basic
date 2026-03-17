#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{

    //Character Data Type
    char ch = 'A';
    printf("Character Data Type : %c\n", ch);
    printf("Size : %zu\n",sizeof(ch));
    printf("Range : %d to %d\n\n\n",0,CHAR_MAX);

    //Short Data Type
    signed short shrt1 = -4322;
    unsigned short shrt2 = 65530;
    
    printf("Signed Short Data Type : %hd\n", shrt1);
    printf("Size : %zu\n",sizeof(shrt1));
    printf("Range : %d to %d\n\n\n",SHRT_MIN,SHRT_MAX);

    printf("Usigned Short Data Type : %hu\n", shrt2);
    printf("Size : %zu\n",sizeof(shrt2));
    printf("Range : %d to %d\n\n\n",0,USHRT_MAX);

    //Integer
    signed int int1 = -21390987;
    unsigned int int2 = 40098200;
    printf("Signed Integer Data Type : %d\n",int1);
    printf("Size : %zu\n",sizeof(int1));
    printf("Range : %d to %d\n\n\n", INT_MIN,INT_MAX);

    printf("Unsigned Integer Data Type : %u\n",int2);
    printf("Size : %zu\n",sizeof(int2));
    printf("Range : %d to %u\n\n\n", 0,UINT_MAX);


    //Long data type
    signed long lng1 = -24534157;
    unsigned long lng2 = 2341546732;

    printf("Signed Long Integer Type : %ld\n",lng1);
    printf("Size : %zu\n",sizeof(lng1));
    printf("Range : %ld to %lu\n\n\n", LONG_MIN, LONG_MAX);

    printf("Unsigned Long Integer Type : %lu\n",lng2);
    printf("Size : %zu\n",sizeof(lng2));
    printf("Range : %d to %lu\n\n\n", 0, ULONG_MAX);


    //Float data type
    float flt1 = -129.8901;
    printf("Float data type : %f\n",flt1);
    printf("Size : %zu\n",sizeof(flt1));
    printf("Range : %f to %e\n\n\n",FLT_MIN,FLT_MAX);

    //Double data type
    double dbl1 = 129.87378341294;
    printf("Double data type : %lf\n",dbl1);
    printf("Size : %zu\n",sizeof(dbl1));
    printf("Range : %f to %e\n\n\n",DBL_MIN,DBL_MAX);

    return 0;
}