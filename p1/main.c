#include <stdio.h>

int main()
{
 int ans =0, n =0, count = 0;
 scanf("%d", &ans);
 do {
 scanf("%d", &n);
 if (ans < n){
    printf("%d>?\n", n); 
 }
 else if(ans > n) {
     printf("%d<?\n", n);
 }
 else {
     printf("%d==?\n", n);
 }
 count ++;
} while(ans != n);

printf("%d", count);
return 0;
}
