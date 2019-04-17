#include <stdio.h>
#include "token.h"

token value(char buffer[], int* index) {
    char myval[10] = "";

    int i = 0;
    while(buffer[*index] != '+' && buffer[*index] != '-' && buffer[*index] != NULL && buffer[*index] != '\n' && buffer[*index] != ' ') {
        myval[i] = buffer[*index];
        *index += 1;
        i += 1;
    }

    *index -= 1;
    myval[i + 1] = '\n';
    token token = {TYPE: NUMBER, VALUE: myval};

    print_token(token);
    return token;
}

int main() {
    char buffer[100] = "12 + 32\n";
    int index = 0;

    while (1) {
        if (buffer[index] == NULL || buffer[index] == '\n') {
            break;
        }

        if (buffer[index] == ' ') {
            index += 1;
            continue;
        }

        if (buffer[index] == '-') {
            printf("MINUS\n");
        } else if (buffer[index] == '+') {
            printf("PLUS\n");
        } else {
            value(buffer, &index);
        }

        index += 1;
    }

    return 0;
}

