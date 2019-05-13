#include <stdio.h>

/* 
変数 : データにつけるラベル
データ型
int(整数) %d
float(実数) %f
char(1文字) %c

 */

int main(void) {

  int x ;
  x = 10 % 3 ; /* 1 */
  x += 3 ; /* 4 */
  x ++ ; /* 5 */


  printf("%d です\n" , x );
  return 0;

}