#include <stdio.h>
int cmp_int(void *a,void *b)
{
    return *(int *)a-*(int *)b;
}

int cmp_char(void *a,void *b)
{
            
    return *(char *)a-*(char *)b;
}

void * get_max(void *a,int len,int size,int (* cmp)(void *,void *))
{
    int *max=a,i=0;
    while(i < len-1)
    {
        if(cmp(max,a+size)>0)
        {
            a = a + size;
            i++;
        }
        else
        {
            max = a+size;
            a += size;
            i++;
        }
    }
    return max;
}

int main(int argc, const char *argv[])
{
    int a[]={1,2,5,6,10,7,3,8,4};
    char b[]={'a','f','e','d','b','c'};
    int *ret1,*ret2;
    ret1 = get_max(a,9,4,cmp_int);
    ret2 = get_max(b,6,1,cmp_char);
    printf("%d,%p\n",*ret1,ret1);
    printf("%c,%p\n",*ret2,ret2);
    return 0;
}
