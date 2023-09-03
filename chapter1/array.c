#include <stdio.h>
/**
 * 统计输入的字符串中 0-9分别出现的次数、空格字符串的个数（tab、空格字符串、\n）和其他
 */

#define BIT_ARRAY_SIZE 10

int main()
{

    int count_num, count_space, count_other;
    char c;
    int i = 0;

    int bit_arr[BIT_ARRAY_SIZE];
    for (; i < BIT_ARRAY_SIZE; i++)
    {
        bit_arr[i] = 0;
    }

    count_num = (count_space = (count_other = 0));

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            bit_arr[c - '0']++;
        }
        else if (c == '\n' || c == '\t' || c == ' ')
        {
            count_space++;
        }
        else
        {
            count_other++;
        }
    }

    for (i = 0; i < BIT_ARRAY_SIZE; i++)
    {
        printf("bit: %d, %d\n", i, bit_arr[i]);
    }

    printf("space:%d\t, other:%d\n", count_space, count_other);
}