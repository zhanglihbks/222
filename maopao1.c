#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[10]={5,7,2,4,5,6,15,9,10,1};
    int i,j,t;
    for(i=0;i<9;i++)
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    for(i=0;i < 10;i++)
    printf("%d  ",a[i]);
    return 0;
}
