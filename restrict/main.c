#include <stdlib.h>
#include <string.h>

void sum(size_t n, double *a, double *b, double *c);
void rsum(size_t n, double *a, double *b, double *c);

int main()
{
   size_t ndoubles, nbytes, nrepeat;
   double *a, *b, *c;

   ndoubles = 1e7;
   nrepeat = 1000;
   nbytes = ndoubles * sizeof(double);
   a = malloc(nbytes); memset(a, 0, nbytes);
   b = malloc(nbytes); memset(b, 0, nbytes);
   c = malloc(nbytes); memset(c, 0, nbytes);

#ifdef RESTRICT
   for (size_t i = 0; i < nrepeat; i++)
      rsum(ndoubles, a, b, c);
#else
   for (size_t i = 0; i < nrepeat; i++)
      sum(ndoubles, a, b, c);
#endif

   free(a); free(b); free(c);
   return 0;
}
