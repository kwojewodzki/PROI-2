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
bool fillMatrix(matrix*);
void display (matrix*);
void setNext(matrix*,matrix*);
matrix* addElement(matrix*);
int setSizeOfMatrix (matrix*);

};
