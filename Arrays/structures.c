#include<stdio.h>

int main()
{
    struct pts
    {
        float x;
        float y;

    };

    struct pts p1;
    struct pts p2;
    p1.x=5;
    p1.y=6;
    p2.x=6;
    p2.y=9;
    //Defining a pointer
    struct pts *ptr1=NULL;
    struct pts *ptr2=NULL;
    
    printf("The original value of x:%f\n ",p1.x);
    printf("The original value of y:%f\n ",p1.y);
    printf("The original value of x:%f\n ",p2.x);
    printf("The original value of y:%f\n ",p2.y);
    ptr1=&p1;
    ptr2=&p2;
    ptr1->x=14;
    ptr1->y=13;
    ptr2->x=98;
    ptr2->y=90;
    printf("The original value of x:%f\n ", ptr1->x);
    printf("The original value of y:%f\n ", ptr1->y);
    printf("The original value of x:%f\n ", ptr2->x);
    printf("The original value of y:%f\n ", ptr2->y);
    return 0;
}