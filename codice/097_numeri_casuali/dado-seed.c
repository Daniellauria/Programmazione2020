#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  srand(time(NULL));
  for (i = 0; i < 10; i++)
    printf("%d\n", 1 + rand() % 6);
  return 0;
}