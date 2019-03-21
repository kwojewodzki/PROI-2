#include <iostream>
#include "class.hpp"


matrix* addElement (matrix* mat){
    matrix* newMatrix=new matrix;
    newMatrix->fillMatrix();
    newMatrix->setNext(mat, newMatrix);
    return newMatrix;
}
int main (){
 matrix* mat=new matrix;
 mat->initialize();
 mat->fillMatrix();
 mat=addElement(mat);
 mat->display();
}
