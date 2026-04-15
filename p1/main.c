#include <stdio.h>

int main()
{
 int ans =0, n =0, count = 0;//변수 선언 및 초기화
 scanf("%d", &ans); //정답 입력 받기
 do {
 scanf("%d", &n);//도전할 수 받기
 if (ans < n){
    printf("%d>?\n", n); 
 }//입력받는 값이 정답보다 클때
 else if(ans > n) {
     printf("%d<?\n", n);
 }//입력받는 값이 정답보다 작을때
 else {
     printf("%d==?\n", n);
 }//둘이 같을때
 count ++;//한번 돌때마다 시행 횟수체크
} while(ans != n); //언제까지 반복할지

printf("%d", count);//시행횟수 출력
return 0;
}
