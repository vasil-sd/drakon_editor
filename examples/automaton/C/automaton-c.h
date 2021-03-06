/* Autogenerated with DRAKON Editor 1.23 */
#ifndef AUTOMATON_C_H88441
#define AUTOMATON_C_H88441

#include <stdlib.h>
#include "lib.h"

typedef struct token token;
typedef struct lexer_data lexer_data;

#define TT_NUMBER     1
#define TT_OPERATOR   2
#define TT_IDENTIFIER 3




int make_lexer(void);
int lexer_digit(int* machine, lexer_data* data, char c);
int lexer_letter(int* machine, lexer_data* data, char c);
int lexer_operator(int* machine, lexer_data* data, char c);
int lexer_whitespace(int* machine, lexer_data* data, char c);




obj_list* lex(
    const string8* text
);

int main(
    int argc,
    char** argv
);

token* token_create(
    int type,
    string8* text
);

void token_destroy(
    token* self
);

void token_print(
    const token* self
);

const string8* token_text(
    const token* self
);

int token_type(
    const token* self
);


#endif

