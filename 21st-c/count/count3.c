#include <stdio.h>

/* count lines in import */
int main()
{
    int c, n1;

    n1 = 0;
    while ((c = getchar()) != EOF)
	if (c == '\n' || c == '\t' || c == ' ')
	    ++n1;
    printf("%d\n",n1);
}
