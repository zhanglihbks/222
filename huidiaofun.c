#include <stdio.h>
void print_star(void)
{
    putchar('*');
}

void pr_three_star(void (* fun)(void))
{
    int i,j;
    for(i = 0; i < 6; i++,putchar('\n')) 
        for(j = 0; j < 6; j++)
            fun();
}
int main(int argc, const char *argv[])
{
    pr_three_star(print_star);
    return 0;
}
