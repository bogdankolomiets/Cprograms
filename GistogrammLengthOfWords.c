#include <stdio.h>

#define IN 1
#define OUT 0

/*Горизонтальная диаграмма длин вводимых слов*/

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
		else if (state == OUT)
		{
			state = IN;
		}
		else if (character != ' ' && character != '\t' && character != '\n' && state == IN)
		{
			putchar('|');
		}
	}
}
