/* conta_righe.c */

/* conta le righe dallo stdin */

/* $ ./a.out < src.txt 
 */

#include <stdio.h>

int main()
{
  int c;
  int nl = 0;

  while ( (c=getchar()) != EOF ) {
    if (c=='\n') ++nl;
  }

  printf("Righe lette: %d\n", nl);

  return 0;
}
