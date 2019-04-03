#include <iostream>
using namespace std;
class matrix{
protected:
    int x;
    int y;
    int value;
    matrix *next;
public:
~matrix();
void initialize ();
void fillMatrix(matrix*);
void display (matrix*);
void setNext(matrix*,matrix*);
matrix* addElement(matrix*);
void addMatrixes(matrix* , matrix*);
void substrMatrixes(matrix*, matrix*);
void plusequals(matrix*, matrix*);
void minuseqauls(matrix*, matrix*);
matrix* multi(matrix*, matrix*);
int setSizeOfMatrix (matrix*);
int operator +(matrix*);
int operator -(matrix*);
matrix* operator +=(matrix*);
matrix* operator -=(matrix*);
matrix* operator *(matrix*);
};
