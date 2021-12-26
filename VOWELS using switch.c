#include <stdio.h>

int main()
{
    char z;
    printf("Enter the character:\n");
    scanf("%c",&z);
    switch(z)
    {
        case'a':
        case'A':
        case'e':
        case'E':
        case'i':
        case'I':
        case'o':
        case'O':
        printf("vowel");
        break;
        default:
        printf("consonant");
        
    }
    
    return 0;
}

