#include <assert.h>
#include <stdio.h>

int
main ()
{
  double a, c;
  int r = scanf ("%lg%lg", &a, &c);
  assert (r == 2);
  printf ("%lg\n", a + c);
  return 0;
}
