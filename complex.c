#include <stdio.h>
#include <math.h>
#include "complex.h"

void print_comp(complex *c){
    printf("%.3f%+.3fi\n",c->real,c->img);
}

void read_comp(complex *c,double real, double img){
    c->real = real;
    c->img = img;
    printf("Complex number was read: ");
    print_comp(c);
}

void add_comp(complex *c1, complex *c2){
    complex result;
    result.real = c1->real + c2->real;
    result.img = c1->img + c2->img;
    print_comp(&result);
}

void sub_comp(complex *c1, complex *c2){
    complex result;
    result.real = c1->real - c2->real;
    result.img = c1->img - c2->img;
    print_comp(&result);
}

void mult_comp_real(complex *c, double f){
    complex result;
    result.real = c->real * f;
    result.img = c->img * f;
    print_comp(&result);
}

void mult_comp_img(complex *c, double f){
    complex result;
    result.real = -1 * c->img * f;
    result.img = c->real * f;
    print_comp(&result);
}

void mult_comp_comp(complex *c1, complex *c2){
    complex result;
    result.real = (c1->real * c2->real) - (c1->img * c2->img);
    result.img = (c1->real * c2->img) + (c1->img * c2->real);
    print_comp(&result);
}

void abs_comp(complex *c){
    printf("%f\n", sqrt(c->real*c->real + c->img*c->img));
}
