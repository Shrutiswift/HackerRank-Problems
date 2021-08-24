#include <stdio.h>
int main() {
    char x;
    printf("Enter Character: ");
    scanf("%c", &x);
    switch(x) {
        case 'a':
        printf("Vowel")
        break;

        case 'e':
        printf("Vowel");
        break;

        case 'i':
        printf("Vowel");
        break;

        case 'o':
        printf("Vowel");
        break;

        case 'u':
        printf("Vowel");
        break;

        default: 
        printf("Not a Vowel");
    }
}