#include <assert.h>
#include <stdio.h>

int
main ()
{
  double a, f;
  int r = scanf ("%lg%lg", &a, &f);
  assert (r == 2);
  printf ("%lg\n", a + f);
  return 0;
}
