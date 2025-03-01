#include "../asq.c"
#include <stdio.h>

int main() {
  asq_t one;
  asq_init(&one);
  printf("Default Size: %d\n", ASQ_DEFAULT_SIZE);
  printf("ASQ: %p\n", &one);
  printf("Length: %lu\n", one.size);
  printf("Capacity: %lu\n", one.capacity);

  asq_t *two = malloc(sizeof(asq_t));
  two = asq_init(two);
  if (two) {
    printf("ASQ: %p\n", two);
    printf("Length: %lu\n", two->size);
    printf("Capacity: %lu\n", two->capacity);
  }
  return 0;
}
