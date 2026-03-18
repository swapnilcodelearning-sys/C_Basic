#include<stdio.h>
int main()
{

    int var1 = 10, var2 = 3, var3 = 25;

    int temp;

    //&& true && true = true
    temp = (var1 > 5) && (var1 < 15);
    printf("%d\n\n",temp);

    //|| true || false, false || true, true || true = true
    temp = (var1 > 25) || (var1 > var2);
    printf("%d\n\n",temp);

    // !true = false, !false. = true
    temp = !(var2 > var3);
    printf("%d\n\n",temp);

    return 0;
}