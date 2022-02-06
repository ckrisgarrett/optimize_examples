#include <stddef.h>
void rsum(size_t n, double * restrict a, double * restrict b, double * restrict c)
{
   for (size_t i = 0; i < n; i++)
      c[i] = a[i] + b[i];
}
