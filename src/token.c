//
// Created by Avery Durrant on 4/16/19.
//

#include <stdio.h>
#include "token.h"


void print_token(token tkn) {
    printf("Token(%s, %s)\n", tkn.TYPE, tkn.VALUE);
}
