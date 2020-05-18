#define LINE_LENGTH 100

typedef struct complex{
    double real;
    double img;
} complex;

typedef enum { FALSE, TRUE } boolean;

typedef enum { READ_COMP,
               PRINT_COMP,
               ADD_COMP ,
               SUB_COMP,
               MULT_COMP_REAL,
               MULT_COMP_IMG,
               MULT_COMP_COMP,
               ABS_COMP,
               STOP,
               UNKNOWN_COMMAND} COMMANDS;

typedef enum  {A,B,C,D,E,F, UNKNOWN_VAR} COMPLEX_INDEX;


#ifndef MAMAN21_COMPLEX_H
#define MAMAN21_COMPLEX_H

#endif //MAMAN21_COMPLEX_H
