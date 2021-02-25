#include <stdio.h>
int main()
{
    int i, key, num, cnt;
    scanf_s("%d %d", &num, &cnt);
    for (i = 1; i <= cnt; i++)
    {
        scanf_s("%d", &key);
        if (key < 0)
        {
            printf("Game Over\n");
            break;
        }
        else if (key > num)
        {
            printf("Too big\n");
        }
        else if (key < num)
        {
            printf("Too small\n");
        }
        else if (key == num)
        {
            if (i == 1)
            {

                printf("Bingo!\n");
                break;
            }
            else if (i == 2 || i == 3)
            {

                printf("Lucky You!\n");
                break;
            }
            else if (i > 3)
            {

                printf("Good Guess!\n");
                break;
            }
        }
    }
    if (i > cnt)
    {
        printf("Game Over\n");
    }
    return 0;
}