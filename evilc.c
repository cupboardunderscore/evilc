#include <stdio.h>
//kdo vi :D
int main()
{
    int r = 0, x = 0, y = 0;
    char c = 10;
    while (1)
    {
        if (r == EOF)
        {
            break;
        }
        r = scanf("%c", &c);
        while (c == ' ')
        {
            scanf("%c", &c);
            x = x + 1;
        }
        if (c == '/')
        {
            scanf("%c", &c);
            if (c == '/')
            {
                while (c != 10)
                {
                    scanf("%c", &c);
                }
            }
            else if (c == '*')
            {
                scanf("%c", &c);
                while (c != '*')
                {
                    scanf("%c", &c);
                }
                while (c != '/')
                {
                    scanf("%c", &c);
                }
                scanf("%c", &c);
            }
            else
            {
                printf("/");
            }
        }
        if (x == 1)
        {
            printf(" ");
        }
        x = 0;
        if (y == 0)
        {
            if (c == '>')
            {
                printf(">\n");
            }
            else if (c == ';')
            {
                printf("; ");
            }
            else if (c != 10 && c != 32)
            {
                printf("%c", c);
            }
            if (c == 39 || c == 34)
            {
                y = 1;
            }
        }
        else if (y == 1)
        {
            printf("%c", c);
            if (c == 39 || c == 34)
            {
                y = 0;
            }
        }
    }
    return 0;
}
