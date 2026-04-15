#include <stdio.h>

int main()
{
 int n=0;
 int eng = 0, num =0;
 int max_num =0, max_eng =0; //여러 변수들 초기화 및 선언
 char a = '\0';
 scanf("%d", &n); // 문자열 개수 받기
 getchar(); //enter 없애기
 for(int i =1; i<=n;i++) { //문자열 개수 만큼 반복
     scanf("%c", &a);
     if('a'<= a && a <= 'z'){//영어 소문자만 받기
       eng++;//영어 값 +1
       num =0;//영어 소문자로 왔으니까 num 초기화
       if(max_eng <= eng) {
         max_eng =eng; } //영어 연속한 값 저장하기
        
     } 
     else if('0' <= a && a <= '9') {//숫자만 받기
      num++;//숫자 값+1
      eng = 0;//숫자로 왔으니까 eng초기화
      if(max_num <= num) {
         max_num =num;}//숫자 연속한 값 저장하기
         
     } 
    else {
     num = 0;
     eng = 0;
 }//대문자 왔을때 num, eng 둘다 초기화
 }
   
 printf("%d\n%d",max_eng, max_num); //영어, 숫자 둘다 연속한 값 출력
 return 0;
 

}
