#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char v1;
printf("insira seu número\n");
scanf("%c",&v1);

// v1    = 0000DCBA
// v1>>1 = 00000DCB
// v1>>2 = 000000DC

//for (int i = 7; i >= 0; i--)
    //printf("%d", (v1&(1<<i))>0);
//printf("\n");

char D=(v1&1),C=((v1>>1)&1),B=((v1>>2)&1),A=((v1>>3)&1),a = (C)||(A)||(B&&D)||((!B)&&(!D)),b = ((!C)&&(!D))||(!B)||(C&&D),c = (D || B)||(!C),d = (A)||((!B)&&(!C))||(C&&(!B))||(C&&(!D))||((B&&(!C))&&D),e = ((!B)&&(!D))||((C)&&(!D)),f = (A)||((!C)&&(!D))||(B&&(!C))||(B&&(!D)),g=A||(C&&(!D))||(B&&(!C))||(B&&(!C));
//char C = (v1>>1)&1;
//char B = (v1>>2)&1;
//char A = (v1>>3)&1;

//char a =0 | 1;
//char seg = a | (b << 1) | (c << 2) ...
//printf("%d",A);
//printf("%d",B);
//printf("%d",C);
//printf("%d\n\n",D);


//char a = (C)||(A)||(B&&D)||((!B)&&(!D));
//char b = ((!C)&&(!D))||(!B)||(C&&D);
//char c = (D || B)||(!C);
//char d = (A)||((!B)&&(!C))||(C&&(!B))||(C&&(!D))||((B&&(!C))&&D);
//char e = ((!B)&&(!D))||((C)&&(!D));
//char f = (A)||((!C)&&(!D))||(B&&(!C))||(B&&(!D));
//char g = A||(C&&(!D))||(B&&(!C))||(B&&(!C));
//printf("%d",g);


printf("\n %d %d %d %d %d %d %d",a,b,c,d,e,f,g);

return 0;
}
