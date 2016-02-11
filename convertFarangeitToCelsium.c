#include <stdio.h>

#define LOWER_TEMPERATURE 0
#define UPPER_TEMPERATURE 300
#define STEP 20
#define TITLE "Конвертер Температур\n"
#define FARENHEIT_COLUMN_TITLE "Фаренгейт"
#define CELSIUM_COLUMN_TITLE "Цельсий"
#define REG_FORMAT_TITLE_COLUMNS "%s\t%s\n"
#define REG_FORMAT_TEMPERATURE_COLUMNS "%9.0f\t%7.1f\n"

main()
{
   float farenheit, celsium;

   printf(TITLE);
   printf(REG_FORMAT_TITLE_COLUMNS, FARENHEIT_COLUMN_TITLE, CELSIUM_COLUMN_TITLE);

   farenheit = LOWER_TEMPERATURE;
   while (farenheit != UPPER_TEMPERATURE) {
      celsium = (5.0/9.0) * (farenheit-32.0);
      printf(REG_FORMAT_TEMPERATURE_COLUMNS, farenheit, celsium);
      farenheit = farenheit + STEP;
   }
}
