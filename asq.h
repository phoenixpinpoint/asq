#ifndef ASQ_H

#include <stdbool.h>
#include <stdlib.h>

#define ASQ_H

#define DEFAULT_SIZE 64

typedef struct asq_t {
  void *items[DEFAULT_SIZE];
  size_t length;
} asq_t;

bool asq_init(asq_t *asq);

bool asq_add(asq_t *asq, void *item);

#endif // ASQ_H
