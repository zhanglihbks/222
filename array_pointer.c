#include <stdio.h>

int main(int argc, const char *argv[])
{
    int *p[4];
    char b[10] = {'1','2','3'};
    p[0] = (int*)b;
    printf("%c,%c,%c\n",*((char *)p[0]),*((char *)p[0]+1),*((char *)p[0]+2));
    return 0;
}
