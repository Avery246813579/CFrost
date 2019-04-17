//
// Created by Avery Durrant on 4/16/19.
//

#ifndef UNTITLED1_TOKEN_H
#define UNTITLED1_TOKEN_H

static const char PLUS[] = "AST_PLUS";
static const char MINUS[] = "AST_MINUS";
static const char NUMBER[] = "AST_NUMBER";

typedef struct {
    char* TYPE;
    char* VALUE;
} token;

void print_token(token tkn);

#endif //UNTITLED1_TOKEN_H
