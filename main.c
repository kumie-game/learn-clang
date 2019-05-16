#include <stdio.h>

/*
文字列 : charの配列(※ 終端 「\0」)

int i;

× string s;

char s[] = {'a' , 'b' , 'c' , '\0'};
char s[] = "abc";
char s[4] = "abc";

*/

int main(void)
{
  char s[] = "abc";

  printf("%c\n", s[1]);

  return 0;
}
