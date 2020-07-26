#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>


//26 alphabets
#define SIZE 26


//global variables
extern int max_score;
extern int score;
extern int count;
extern int stars;

//to help in passing array by value instead of reference
struct ArrayWrapper{
  int freq[SIZE];
};


//functions declaration
int checkInBag(struct ArrayWrapper , char[], int);
int availDictB(struct ArrayWrapper);
int availDictC(struct ArrayWrapper);
int availDictD(struct ArrayWrapper);
int availDictE(struct ArrayWrapper);
int availDictF(struct ArrayWrapper);
int availDictG(struct ArrayWrapper);
int availDictH(struct ArrayWrapper);
int availDictI(struct ArrayWrapper);
int availDictJ(struct ArrayWrapper);
int availDictK(struct ArrayWrapper);
int availDictL(struct ArrayWrapper);
int availDictM(struct ArrayWrapper);
int availDictN(struct ArrayWrapper);
int availDictO(struct ArrayWrapper);
