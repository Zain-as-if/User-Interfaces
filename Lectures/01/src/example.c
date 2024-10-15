#include <stdio.h>
#include <string.h>               /* <1> */

int main()
{
  char name[10];                  /* <2> */

  printf("Enter your name: ");    /* <3> */
  scanf("%s", name);              /* <4> */

  printf("\nHello %s!\n", name);

  int num_chars = strlen(name);   /* <5> */
  printf("Your name contains %d characters\n", num_chars);

  return 0;
}
