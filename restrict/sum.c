#include <stddef.h>
void sum(size_t n, double *a, double *b, double *c)
{
   for (size_t i = 0; i < n; i++)
      c[i] = a[i] + b[i];
}
