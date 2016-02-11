#include <stdio.h>

main() 
{
	int character, previousCharacter;
	
	character = 0;
	previousCharacter = 0;
	
	while ((character = getchar()) != EOF)
	{
		if ((character == ' ') && (character == previousCharacter))
			;
		else
			putchar(character);
		previousCharacter = character;
	}
	
}
