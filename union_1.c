#include <stdio.h>
union day{int a; char b; char c[256];};

int main(int argc, const char *argv[])
{
     union day day1;
     day1.a = 121;
     day1.b = 'c';
     strcpy(day1.c,"abc");
     printf("%d,%x\n",day1.a,&day1.a);
     printf("%x\n",day1.a);
     printf("%c\n",day1.c[1]);
    return 0;
}
