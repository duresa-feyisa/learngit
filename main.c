#include <stdio.h>
#include <stdlib.h>

int main()
{
   int int_num;
   double flt_num;

   int_num = 123;
   flt_num = 123.456789;
   printf("With precision specifier: %2.8d%-2.8d h\n", int_num, int_num);
   printf("With precision specifier: %10.2f %-10.2f h\n", flt_num, flt_num);
   printf("%d\n", 15);
   printf("%d", 55);
  return 0;
}
