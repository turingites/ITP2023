#include <stdio.h>
int main(void)
{
printf("\nThe elements using pointer: ");
for(int i = 0; i < number_of_elements; i++) {
    printf("%d ", *(ptr_a + i));
}
}