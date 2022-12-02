#ifndef VARIADIC
#define VARIADIC

typedef struct ops
{
  char op;
  (*f)(void *);
} op_t;

typedef struct opc
{
  char op;
  (*f)(void *);
}

void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
