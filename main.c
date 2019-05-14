#include <stdio.h>

/* 
条件分岐(if)
>=(以上)
<=(以下)
>
<
(大きいor小さい)

==(同じ)
!=(等しくない)

 */

int main(void) {

  int score = 80;
  
  if (score < 80){
    printf("OK!\n");
  } else if(score == 80){
    printf("同じ\n");
  }else {
    printf("NG!\n");
  }
  return 0;
}