#include <stdio.h>

int main()
{
 int n=0;
 int eng = 0, num =0;
 int max_num =0, max_eng =0;
 char a = '\0';
 scanf("%d", &n);
 getchar();
 for(int i =0; i<=n;i++) {
     scanf("%c", &a);
     if('a'<= a && a <= 'z'){
       eng++;
       num =0;
       if(max_eng <= eng) {
         max_eng =eng; }
        
     } 
     else if('0' <= a && a <= '9') {
      num++;
      eng = 0;
      if(max_num <= num) {
         max_num =num;}
         
     } 
    else {
     num = 0;
     eng = 0;
 }
 }
   
 printf("%d\n%d",max_eng, max_num);
 return 0;
 

}
