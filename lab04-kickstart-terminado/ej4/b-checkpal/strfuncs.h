#ifndef _STRFUNCS_H
#define _STRFUNCS_H

#include <stdio.h>
#include <stdbool.h>

size_t string_length(const char *str);

/*que calcula la longitud de la cadena apuntada por str, la función*/

char *string_filter(const char *str, char c);

/*que devuelve una nueva cadena en memoria dinámica que se obtiene tomando los 
caracteres de str que son distintos del caracter c, y la función:*/

bool string_is_symmetric(const char *str);

/*que indica si la cadena apuntada por str es simétrica en cuanto que el primer 
caracter coincide con el último, el segundo con el penúltimo, etc; como por 
ejemplo las cadenas "aba", "abcba", "a", "".*/

#endif // _STRFUNCS_H

