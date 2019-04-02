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
matrix* addMatrixes(matrix* , matrix*);
matrix* substrMatrixes(matrix*, matrix*);
int setSizeOfMatrix (matrix*);
int operator +(matrix*);
int operator -(matrix*);
};
