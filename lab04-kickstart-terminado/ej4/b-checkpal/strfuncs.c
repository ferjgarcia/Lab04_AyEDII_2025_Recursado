#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "strfuncs.h"

size_t string_length(const char *str) {
    size_t i = 0;
    const char *p = str; 

    while (p[i] != '\0') {
        i++;
    }
    
    return i;
}

char *string_filter(const char *str, char c) {
    size_t i = 0;
    const char *p = str;
    size_t len = string_length(str);
    char *new_str = malloc((len+1) * sizeof(char));

    if (new_str == NULL) {
        return NULL;  // error al asignar memoria
    }

    size_t j = 0;
    while (i < len) {
        if (p[i] != c) {
            new_str[j] = p[i];
            j++;
        }
        i++;
    }   

    new_str[j] = '\0';

    return new_str;
}


bool string_is_symmetric(const char *str) {
    size_t len = string_length(str);

    for (size_t i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }

    return true;
}
