#include <stdio.h>
 int bitcount (unsigned x);
 int main(void)
 {
     char c[6];
     int i = 0;
     int n = 0;
     while (i < 7)
     {
         c[i] = getchar();
         if (c[i] == '\n')
         {
             break;
         }
         n = n * 10 + (c[i] - '0');
         i++;
     }
     printf("The number of 1's   is %d\n", bitcount(n));
     return 0;
 }
 int bitcount(unsigned x)
 {
     int b;
     for (b = 0; x != 0;x >>= 1)
     {
         if (x & 01)
         {
             b++;
         }
     }return b;
 }