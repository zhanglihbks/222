#include <stdio.h>
int cmp_int(void *a,void *b)
{
    return *(int *)a-*(int *)b;
}

int cmp_char(void *a,void *b)
{
    return *(char *)a-*(char *)b;
}

void fun(void * a,int len,int size,int( * cmp)(void *,void *))
{
    int i,j,t;
    char *c;
    c=(char *)a;
    for(i = 0;i < len-1 ;i++)
        for(j = i; j<len-i;j++)
        {
            if(cmp(c+i*size,c+j*size)>0)
            {
                t=*(c+i*size);
                *(c+i*size)=*(c+j*size);
                *(c+j*size)=t;
            }
        }
}
int main(int argc, const char *argv[])
{
   int k;
   int a[]={11,2,4,54,8,8,9,12};
   char b[]={'a','h','d','i','h','b','v','m'};
   fun(a,8,4,cmp_int);
   fun(b,8,1,cmp_char);
   for(k=0;k<8;k++)
        printf("%d\n",a[k]);
   for(k=0;k<8;k++)
        printf("%c\n",b[k]);
    return 0;
}
