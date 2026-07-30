/* test_03.c
 * CPE101 Week09 - Git command, GitHub and Stackoverflow
 * Patimakorn Srinam-en (6905604)
 * โปรแกรมทดสอบที่ 3 : วนลูปแสดงสูตรคูณแม่ 2
 * ไฟล์นี้ใช้สาธิตสถานะ untracked -> git add -> staged
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
