#include <stdio.h>
float cmp_float(void *a,void *b)
{
    return *(float *)a-*(float *)b;
}

//int cmp_char(void *a,void *b)
//{
    //return *(char *)a-*(char *)b;
//}

void fun(void * a,int len,int size,float( * cmp)(void *,void *))
{
    int i,j;
    char *c;
    float t;
    c=(char *)a;
    for(i = 0;i < len-1 ;i++)
        for(j = i+1; j<len;j++)
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
   float e[]={3.1,3.5,1.2,0.3,2.1,5.1,0.1,1.0};
   fun(a,8,4,cmp_float);
   fun(b,8,1,cmp_float);
   fun(e,8,4,cmp_float);
   for(k=0;k<8;k++)
        printf("%d\n",a[k]);
   for(k=0;k<8;k++)
        printf("%c\n",b[k]);
   for(k=0;k<8;k++)
        printf("%f\n",e[k]);
    return 0;
}
