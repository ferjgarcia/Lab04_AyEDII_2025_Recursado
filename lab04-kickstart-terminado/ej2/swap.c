#include <stdio.h>

void swap(int *a, int *b) {
    int aux; // Declare an integer variable, not a pointer

    aux = *a; // Store the value at the address pointed to by 'a' in 'aux'
    *a = *b; // Assign the value at the address pointed to by 'b' to the address pointed to by 'a'
    *b = aux; // Assign the value stored in 'aux' (the original value of 'a') to the address pointed to by 'b'
}

int main() {
    int x, y;
    x = 6;
    y = 4;

    printf("Antes del swap: %d %d \n" , x, y);
    swap(&x,&y);
    printf("Despues del swap: %d %d \n" , x, y);

    return 0;
}

/*proc swap(in/out a : int, in/out b : int)
    var aux : int
    aux := a
    a := b
    b := aux 
end proc
fun main() ret r : int
  var x, y : int
  x := 6
  y := 4
  print(x, y)
  swap(x, y)
  print(x, y)
  r := 0
end fun
*/