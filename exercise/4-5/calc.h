#ifndef _CALC_H_
#define _CALC_H_

#define NUMBER '0'
#define NAME 'n'

void push(double);
double pop(void);
int getop(char []);
int getch(void);
void ungetch(int);
void clear();
void mathfnc(char []);
#endif
