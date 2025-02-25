#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getFourthWord(const char *str) {
    const char *delimiters = " "; 
    char tempStr[256];
    strcpy(tempStr, str); 

    char *word = strtok(tempStr, delimiters);
    int count = 0;

    while (word != NULL) {
        count++;
        if (count == 4) {
            printf("Четвертое слово: %s\n", word);
            return;
        }
        word = strtok(NULL, delimiters);
    }

    printf("Четвертого слова нет.\n");
}

int main() {
    char str[256];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    getFourthWord(str);

    return 0;
}