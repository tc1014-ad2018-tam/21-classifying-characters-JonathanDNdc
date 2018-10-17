/*
 * This program classifies the characters of a string entered by the user.
 * The classification is: vowels, consonants, digits, special characters and spaces.
 *
 * Author: Jonathan Nuñez de Caceres.
 * Email: A01411277@itesm.mx
 * Date: 17/10/18
 */

#include <stdio.h> //Standard inout/output header.
#include <ctype.h> //Library where all the type functions are found: isalpha, isdigit, tolower
#include <string.h> //Library where strlen is found.

//Function to check if character is a vowel.
int isvowel(char c) {
    //Character is converted to lowercase to compare with 'a', 'e', 'i', 'o' and 'u'.
    c = (char) tolower(c);
    if (c == 'a' ||
        c == 'e' ||
        c == 'i' ||
        c == 'o' ||
        c == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    //Declaration of variable
    char string[100];

    printf("Enter your text:");
    fgets(string, sizeof(string), stdin);

    //Each character in the string is classified in a category.
    for (int i = 0; i < strlen(string); i++) {

        printf("%c ", string[i]);

        if (isalpha(string[i])) {
            if (isvowel(string[i])) {
                printf("Is a vowel\n");
            } else {
                printf("Is a consonant.\n");
            }
        } else if (isdigit(string[i])) {
            printf("Is a digit\n");
        } else if (string[i] == ' ' || string[i] == '\t') {
            printf("Is a space\n");
        } else if (string[i] == '\n'); //If the character is a new line it doesnt happen anything.
        else {
            printf("Is a special character\n");
        }
    }
    return 0;
}
