//Implement a C program to check whether a character is a vowel or consonant.
include <stdio.h>

int main()

{
    char c;
    printf("Enter a character");
    scanf("%c", &c);
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' ||c=='u'){
    printf("Vowel");
}
    else if{(!((c>='a' && c<='z') || (c>='A' && c<='Z')))

    printf("Invalid input");
}
    else{

    printf("consonant");
}
    return 0;

}
