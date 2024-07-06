#include <stdio.h>
#include "timelog.h"

int main()
{
    for(int i =100;i>=0;i--)
    {
        timeStart();
        printf("i = %d\n",i);
        timeEnd();
    }

    return 0;
}
