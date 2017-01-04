#include <stdio.h>
#include <string.h>

#define RESERVED 32
#define RESERVED_LENGTH 10
#define SPECIALSYM 13
#define STRIMAX 256

char special[SPECIALSYM] = {'+', '-', '*', '/', '(', ')', '=', ',' , '.', '<', '>',  ';' , ':'};
char reservedWords[RESERVED][RESERVED_LENGTH] = {"NULL", "", "", "+", "-", "*", 
                                                "/", "odd", "=", "!=", "<", "<=", 
                                                ">", ">=", "(", ")", ",", ";", ".", 
                                                ":=", "{", "}", "if", "then", "while", 
                                                "do", "call", "const", "int", "procedure", 
                                                "write", "read"};
char program[250] = "int x, y;{ 	y := 3; 	x := y + 56;}.";
//29  2 x  17  2 y  18  21 2 y 20 3 3 18  2 x  20  2  y  4  3  56  18  22  19



struct token {
    char string[STRIMAX];
    int size;
    int id;
};

int token_num = 0;
int token_size = 0;

char **leximiser(char *file, int size);

int main ()
{
    int i;
    int j;
    for(i = 0; i < RESERVED; i++)
    {
        for(j = 0; j < RESERVED; j++)
        {
            printf("%c", reservedWords[i][j]);
        }
    }
}

char **groups(char *file, int size)
{
    
}

int isLetter(char dude)
{
    int upper = 65;
    int lower = 97;
    
    for(upper = 65; upper <=90; upper++)
        if(dude == upper)
            return 1;
    
    for(lower = 97; lower <= 112; lower++)
        if(dude == lower)
            return 1;
    
    return 0;
}

int isReserved(struct token *tokens)
{
    int counter = 0;
    while(counter < RESERVED)
    {
        if(strcmp(tokens->string, reservedWords[counter]) == 0)
            tokens->id = counter + 1;
            
        counter++;
    }
    return 0;
}

struct token * tokeniser(struct token *tokens)
{
    int x = 0;
    int y = 0;
    int counter = 0;
    while(counter < token_num)
    {
        if(isReserved(tokens))
        {
            tokens[counter].id = isReserved(tokens);
        }
        
        counter++;
    }
}

int isVarNum(struct token *tokens)
{
    int counter = 0;
    for(counter = 0; counter < STRIMAX; counter++)
        if(tokens->string[counter] == '0'||tokens->string[counter] == '1'
        ||tokens->string[counter] == '2'||tokens->string[counter] == '3'
        ||tokens->string[counter] == '4'||tokens->string[counter] == '5'
        ||tokens->string[counter] == '6'||tokens->string[counter] == '7'
        ||tokens->string[counter] == '8'||tokens->string[counter] == '9')
}
