#include <stdio.h>

#define IN 1
#define OUT 0

/* Печать содержимого ввода помещая по одному слову в строке */

main()
{
	int character, state;

	state = OUT;

	while ((character = getchar()) != EOF)
	{
		if (character == ' ' || character == '\n' || character == '\t')
		{
			state = OUT;
			printf("\n");
		}
		if (state == OUT)
		{
			state = IN;
		}
		if (character != ' ' && character != '\t' && state == IN)
		{
			putchar(character);
		}
	}
}

