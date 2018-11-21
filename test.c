#include <assert.h>
#include <stdio.h>

int
main ()
{
  double a, c;
  int r = scanf ("%lg%lg", &a, &с);
  assert (r == 2);
  printf ("%lg\n", a + с);
  return 0;
}
