/* test_02.c
 * CPE101 Week09 - Git command, GitHub and Stack Overflow
 * Patimakorn Srinam-en (6905604)
 * Test program 2 : read two integers and print their sum
 * Demonstrates the modified -> add -> commit flow and git restore
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
