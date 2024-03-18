#include <stdio.h>

int main(void) {
  int stp,n;
  printf("Enter stopping point");
  scanf("%d",&stp);
  if (stp<0)
    printf("INVALID INPUT");
  else
  {
    n=(stp/2)+1;
    printf("Number of even number in the range = %d",n);
  }
  return 0;
}