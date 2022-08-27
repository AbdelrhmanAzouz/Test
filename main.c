#include <stdio.h>
#include <stdlib.h>
#include"test.h"
int main()
{
    int x,y,sum_values=0;
    int div values;
    x=50;
    y=25;
    sum_values=sum(x,y);
    div=div(x,y);

    printf("sum of %d and %d = %d \n",x,y,sum_values);
    printf("div of %d and %d = %d \n",x,y,sum_values);

    return 0;
}
