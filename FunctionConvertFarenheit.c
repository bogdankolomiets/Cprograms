#include <stdio.h>

#define LOWER_TEMPERATURE 0
#define UPPER_TEMPERATURE 300
#define STEP 20

float getCelsium(float farenheit);

main()
{
    float farenheit, celsium;
    
    farenheit = LOWER_TEMPERATURE;
    while (farenheit != UPPER_TEMPERATURE)
    {
        celsium = getCelsium(farenheit);
        printf("%3.0f\t%6.1f\n", farenheit, celsium);
        farenheit = farenheit + STEP;   
    }
}

float getCelsium(float farenheit)
{
    float celsium;
    celsium = (5.0/9.0) * (farenheit-32.0);
    return celsium;
}
