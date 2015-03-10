#include <stdio.h>

void E(int *pi) {
  *pi = *pi + 2;
}

void F(int vj, int *pk) {
  int i;
  i = *pk;
  //if (vj <= *pk)
    E(&i);
  printf ("%d %d %d\n",i, *pk, vj);
}

int main()
{
  long rga;
  int j, k;
  scanf("%ld", &rga);
  j = (rga/10)%10;
  k = rga%10;
  F(j, &k);
  printf("%d %d %d\n", j, k, k+2);

  return 0;
}


