#include "../asq.c"
#include <stdio.h>

int main() {
  asq_t *one;
  if (asq_init(one)) {
    printf("Length: %lu\n", one->length);
  }
  return 0;
}
