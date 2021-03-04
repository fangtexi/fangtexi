#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount(char s[])
{
    int i = 0;
    int letter = 0;
    int digit = 0;
    int blank = 0;
    int other = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            letter++;
        else if (s[i] >= '0' && s[i] <= '9')
            digit++;
        else if (s[i] == ' ' || s[i] == '\n')
            blank++;
        else other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}