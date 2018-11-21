#include <assert.h>
#include <stdio.h>

int
main ()
{
  double a, b;
  int r = scanf ("%lg%lg", &a, &b);
  assert (r == 2);
  printf ("%lg\n", a + b);
  return 0;
}