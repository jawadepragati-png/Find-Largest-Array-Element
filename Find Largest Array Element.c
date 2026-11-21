#include <stdio.h>
int main()
{
    int a[5]={10,50,20,40,30},i,max=a[0];
    for(i=1;i<5;i++)
        if(a[i]>max)
            max=a[i];
    printf("Largest = %d",max);
    return 0;
}
