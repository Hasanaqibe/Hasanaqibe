#include <stdio.h>

int main()
{
char a,l,f,b;
for (int i = 1; i <= 10; ++i) {
    scanf("%c/n%c",a);
}
l = a%10;
while (a>10){
a= a/10;
}
f =a;
 b= f+ l;
    printf("%d\n",b);


    return 0;
}
