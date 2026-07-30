/* test_02.c
 * CPE101 Week09 - Git command, GitHub and Stackoverflow
 * Patimakorn Srinam-en (6905604)
 * โปรแกรมทดสอบที่ 2 : รับค่าตัวเลข 2 จำนวนแล้วหาผลบวก
 * ไฟล์นี้ใช้สาธิตสถานะ modified -> add -> commit และ git restore
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
