#include <stdio.h>
#include <stdlib.h>
#include"test.h"
int main()
{
    int x,y,sum_values=0;
    x=20;
    y=25;
    sum_values=sum(x,y);
    printf("sum of %d and %d = %d \n",x,y,sum_values);
    return 0;
}
