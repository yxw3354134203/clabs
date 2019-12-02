#include <stdio.h>
int main()
{
    char s[1000];
    char t[1000];
    int m = 0, n = 0;
    while ((s[m] = getchar()) != ' ')
    {
        m++;
    }
    while ((t[n] = getchar()) != EOF && t[n] != '\n' && s[m] == ' ')
    {
        n++;
    }
    int i, a, p;
    for (i = m - 1; i > 0; i--)
    {
        for (a = i, p = n - 1; s[a] = t[p]; a--, p--)
            ;
        if (p < 0)
        {
            printf("%d\n", a + 1);
            return i;
        }
    }
    printf("no found");
}
