#include <stdio.h>
#include <conio.h>
int main ()
{
    char upr, lwr;
    int ascii;
    printf (" Enter the Upper Case Character: ");
    scanf (" %c", &upr);
    ascii = upr + 32;
    printf (" %c character in Lower case is: %c", upr, ascii);
      return 0;
}
