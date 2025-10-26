#include <stdio.h>

int main() {
    char strings[100];  
    char ch;            
    int i = 0;

    printf("Enter the characters: ");

    
    while (scanf("%c", &ch) == 1 && ch != '\n') {
        if (ch < '0' || ch > '9') {  
            strings[i] = ch;         
            i++;
        }
    }

    strings[i] = '\0'; 

    printf("The string is: %s\n", strings);

    return 0;
}



