
#include <stdio.h>

int main()
{
 int ans =0, n =0, count = 0;
 scanf("%d", &ans);
 do {
 scanf("%d", &n);
 if (ans < n){
    printf("%d > %d\n", n, ans); 
 }
 else if(ans > n) {
     printf("%d < %d\n", n, ans);
 }
 else {
     printf("%d == %d\n", n, ans);
 }
 count ++;
} while(ans != n);

printf("시도횟수는 %d회", count);
return 0;
}
