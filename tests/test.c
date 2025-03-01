#include "../asq.c"
#include <stdio.h>

int main() {
  printf("Default Size: %d\n", ASQ_DEFAULT_SIZE);

  // NOTE: Stack structs still use heap items for dynamic arrays
  printf("============Stack Struct\n");
  asq_t one;
  asq_init(&one);
  printf("ASQ: %p\n", &one);
  printf("Length: %lu\n", one.size);
  printf("Capacity: %lu\n", one.capacity);

  printf("============Heap Struct\n");
  asq_t *two = malloc(sizeof(asq_t));
  two = asq_init(two);
  if (two) {
    printf("ASQ: %p\n", two);
    printf("Length: %lu\n", two->size);
    printf("Capacity: %lu\n", two->capacity);
  }

  printf("============Double Stack \n");
  asq_double(&one);
  printf("Length: %lu\n", one.size);
  printf("Capacity: %lu\n", one.capacity);

  printf("============Double Heap \n");
  two = asq_double(two);
  printf("Length: %lu\n", two->size);
  printf("Capacity: %lu\n", two->capacity);

  printf("============Half Stack \n");
  asq_half(&one);
  printf("Length: %lu\n", one.size);
  printf("Capacity: %lu\n", one.capacity);

  printf("============Half Heap \n");
  two = asq_half(two);
  printf("Length: %lu\n", two->size);
  printf("Capacity: %lu\n", two->capacity);

  printf("============N(10) Size Stack \n");
  asq_t three;
  asq_init_with_size(&three, 10);
  printf("Length: %lu\n", three.size);
  printf("Capacity: %lu\n", three.capacity);

  printf("============N(10) Size Heap \n");
  asq_t *four = malloc(sizeof(asq_t));
  four = asq_init_with_size(four, 10);
  printf("Length: %lu\n", four->size);
  printf("Capacity: %lu\n", four->capacity);

  printf("============Free Stack \n");
  asq_deinit(&one);

  // NOTE: When using heap structs, you must free the struct itself once the asq
  // is deinit
  printf("============Free Heap \n");
  asq_deinit(two);
  free(two);

  printf("============Free N(10) Stack \n");
  asq_deinit(&three);

  printf("============Free N(10) Heap \n");
  asq_deinit(four);
  free(four);

  return 0;
}
