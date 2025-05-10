#include <stdlib.h>
#include <stdio.h>

void absolute(int x, int y) {
    if (x >= 0)
        y = x;
    else 
        y = -x;

    printf("El valor absoluto es: %d \n", y);
}

int main(void) {
    int a=0, res=0;
    a = -10;

    absolute(a,res);

    return EXIT_SUCCESS;
}

/*
proc absolute(in x : int, out y : int)
  if x >= 0 then
    y := x
  else
    y := -x
  fi
end proc

fun main() ret r : int
  var a : int
  a := -10
  absolute(a, res)
  {- supongamos que print() muestra el valor de una variable -}
  print(res)
  {- esta última asignación es análoga a `return EXIT_SUCCESS;` -}
  r := 0
end fun
*/

