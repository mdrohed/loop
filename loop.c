#include <stdio.h>

int main(void) {
  char ch;
  int num;
  int guessednum =67;
  printf("guess my number between 1 to 100: ");

  while( num != guessednum)
  {
    scanf("%d",&num);
    if(num >guessednum)
    {
      printf("too large");
    }
    else if(num <guessednum)
    {
      printf("small");
    }
    else if(num==guessednum)
    {
      printf ("equal");
    }
  }
  
  return 0;
}