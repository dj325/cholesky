#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "cholesky.h"

int main(int argc, char* argv[]){
  int n = 3;
  double A[] = {25, 15, -5,
                15, 18,  0,
                -5,  0, 11};
  double* L = cholesky(A, n);
  print_matrix(L, n);
  free(L);

  return 0;
}
