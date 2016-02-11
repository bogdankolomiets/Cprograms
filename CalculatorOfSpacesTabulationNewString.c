#include <stdio.h>
#define TABULATION '\t'
#define LINE '\n'
#define SPACE ' '

main()
{
	int tabulationCount, lineCount, spaceCount;
	int character;

	tabulationCount = 0;
	lineCount = 0;
	spaceCount = 0;

	while ((character = getchar()) != EOF)
	{
		if (character == TABULATION)
			++tabulationCount;
		else if (character == LINE)
			++lineCount;
		else if (character == SPACE)
			++spaceCount;
	}

	printf("%d %d %d", tabulationCount, lineCount, spaceCount);

}
