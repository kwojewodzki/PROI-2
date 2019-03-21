#include <iostream>
using namespace std;
class matrix{
protected:
    int x;
    int y;
    int value;
    matrix *next;
public:
void initialize ();
void fillMatrix();
void display ();
void setNext(matrix*,matrix*);

};
void matrix::initialize(){
    matrix* next=nullptr;
}

void matrix::fillMatrix(){
    cout << "X:" << endl;
    cin >> x;
    cout << "Y:" << endl;
    cin >> y;
    cout << "value" << endl;
    cin >> value;
}
void matrix::display(){
    cout << "X=" << x << endl;
    cout << "Y=" << y << endl;
    cout << "Value = " << value << endl;
}

void matrix::setNext(matrix* mat,matrix* newMatrix){
    newMatrix->next = mat;
}
