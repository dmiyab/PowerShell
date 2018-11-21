#include <assert.h>
#include <stdio.h>

int
main ()
{
  double a, t;
  int r = scanf ("%lg%lg", &a, &t);
  assert (r == 2);
  printf ("%lg\n", a + t);
  return 0;
}
