/* test_03.c
 * CPE101 Week09 - Git command, GitHub and Stack Overflow
 * Patimakorn Srinam-en (6905604)
 * Test program 3 : print the multiplication table of 2
 * Demonstrates untracked -> git add -> staged
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 12; i++) {
        printf("2 x %2d = %3d\n", i, 2 * i);
    }
    return 0;
}
