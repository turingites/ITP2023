#include <stdio.h>
int main (void)
{
int x = 30;
int *y = NULL, *z = NULL;
y = &x;
z = y;
printf("%d,%d", y,z);
*y++ = *z++;
x++;
printf("x = %d, y = %d, z = %d \n", x,y,z);
return 0;
}
