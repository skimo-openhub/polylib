/*       Rays 2 Polyhedron
 */

#include <stdio.h>
#include <polylib/polylib.h>

int main() {
	
  Matrix *R;
  Polyhedron *P; 
  
  R = Matrix_Read();
  if(R->NbColumns < 2) {
    printf("Wrong input: %d columns\n", R->NbColumns );
    Matrix_Free(R);
    exit(1);
  }
  P = Rays2Polyhedron(R,200);
  Matrix_Free(R);
  Polyhedron_Print(stdout,P_VALUE_FMT,P);  
  Domain_Free(P);
  return 0;
}

