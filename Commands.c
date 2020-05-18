#include <stdio.h>
#include <string.h>
#include "complex.h"

COMMANDS commandStringToEnum(char *commandString){
    if (strcmp(commandString, "read_comp") == 0)
        return READ_COMP;
    if (strcmp(commandString, "print_comp") == 0)
        return  PRINT_COMP;
    if (strcmp(commandString, "add_comp") == 0)
        return  ADD_COMP;
    if (strcmp(commandString, "sub_comp") == 0)
        return  SUB_COMP;
    if (strcmp(commandString, "mult_comp_real") == 0)
        return  MULT_COMP_REAL;
    if (strcmp(commandString, "mult_comp_img") == 0)
        return  MULT_COMP_IMG;
    if (strcmp(commandString, "mult_comp_comp") == 0)
        return  MULT_COMP_COMP;
    if (strcmp(commandString, "abs_comp") == 0)
        return  ABS_COMP;
    if (strcmp(commandString, "stop") == 0)
        return  STOP;

    return  UNKNOWN_COMMAND;
}

COMPLEX_INDEX complexVarToEnum(char *var){
    if (*var == 'A')
        return A;
    if (*var == 'B')
        return B;
    if (*var == 'C')
        return C;
    if (*var == 'D')
        return D;
    if (*var == 'F')
        return F;
    return UNKNOWN_VAR

}