#include <stdio.h>

/*Копирование символов ввода в выходной поток*/

main()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar (c);
}
