#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "data.h"

void
print_data(data_t d) {
    printf("NOMBRE: %s\n"
           "EDAD  : %d años\n"
           "ALTURA: %d cm\n\n",
           d.name, d.age, d.height);
}

int main(void) {

    data_t messi = {"Leo Messi", 36, 169};
    print_data(messi);

    printf("\n\nTamano en bytes"
            "name-size  : %lu bytes\n"
            "age-size   : %lu bytes\n"
            "height-size: %lu bytes\n"
            "data_t-size: %lu bytes\n", sizeof(messi.name), sizeof(messi.age),
                sizeof(messi.height), sizeof(messi));

    printf("\n\nDirecciones de memoria: \n\n"
            "name-size  : %p \n"
            "age-size   : %p \n"
            "height-size: %p \n"
            "data_t-size: %p \n", (void *)&messi.name, (void *)&messi.age,
                          (void *)&messi.height, (void *)&messi);

    printf("\n\nIndice de memoria: \n\n"
            "name-size  : %lu \n"
            "age-size   : %lu \n"
            "height-size: %lu \n"
            "data_t-size: %lu \n", (uintptr_t)&messi.name, 
                (uintptr_t)&messi.age, (uintptr_t)&messi.height,
                (uintptr_t)&messi);

    data_t *messi2 = malloc(sizeof(data_t));
    strcpy(messi2->name, "Leo Messi");
    messi2->age = 36;
    messi2->height = 169;

    printf("\n\nName: %s Age: %d Height: %d \n\n", messi2->name, messi2->age 
            ,messi2->height);

    free(messi2);

    return EXIT_SUCCESS;
}
