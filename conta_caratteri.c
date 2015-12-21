/* conta_caratteri.c */

/* conta i caratteri dallo stdin */

/* $ ./a.out < src.txt 
 */

#include <stdio.h>

int main()
{
  int c;
  long int nc = 0;

  while ( (c=getchar()) != EOF ) {
    ++nc;
  }

  printf("Caratteri letti: %ld\n", nc);

  return 0;
}
