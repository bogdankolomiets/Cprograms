#include <stdio.h>

/*Копирование символов ввода в выходной поток заменяя
стоящие подряд пробелы на один пробелы на один пробел*/

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
