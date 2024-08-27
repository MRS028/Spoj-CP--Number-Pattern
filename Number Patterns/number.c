#include <stdio.h>
int main()
{
    int tc,l,c,h,w;
    scanf("%d", &tc);

    while (tc--)
    {
        scanf("%d %d %d %d", &l, &c, &h, &w);

        ++h;
        ++w;
        l = h * l + 1;
        c = w * c + 1;
        for (int i = 0; i < l; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                putchar((i % h == 0 || j % w == 0) ? '*' : '.');
            }
            putchar('\n');
        }
        if (tc > 0)
        {
            putchar('\n');
        }
    }
return 0;
}
