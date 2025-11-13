#include <stdio.h>

int main(void)
{
      char *a[] = {"papa", "stupid", "gotohell", "break", "chacha", "chachi"};

      char **b[] = {a + 2, a + 3, a + 4, a + 1, a + 5};
      char ***c = b;
      *c++;
      printf("%s\n", **++c);
      printf("%s", *++*c + 2);

      return 0;
}