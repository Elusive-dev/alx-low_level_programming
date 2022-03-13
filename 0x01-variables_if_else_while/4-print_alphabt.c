#include <stdio.h>

int main(void)
{

        for (char ch ='a'; ch <= 'z'; ch++)
        {
                if (ch == 'e' || ch == 'q')
                    ch++;
                putchar(ch);

        }
        putchar('\n');

    return 0;
}

