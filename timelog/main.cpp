#include <stdio.h>
#include "timelog.h"

int main()
{
    std::cout<<"abc\n";
    timeStart();
    for(int i =100;i>=0;i--)
    {
        //printf("i = %d\n",i);
    }
    timeEnd();
    return 0;
}
