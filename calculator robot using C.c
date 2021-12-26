#include <stdio.h>

int main()
{
    int y,a,b,z;
    printf("WELCOME TO CALCULATOR\n");
    scanf("%d",&y);
    printf("enter a no. for a:\n");
    scanf("%d",&a);
    printf("enter a no. for b:\n");
    scanf("%d",&b);
    printf("1='+',2='-',3='/'\n");
    scanf("%d",&z);
    switch(y)
    {
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a/b);
        break;
        default:
        printf("I AM STILL LEARNING.");
    }

    return 0;
}

