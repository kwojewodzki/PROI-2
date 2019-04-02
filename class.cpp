#include <iostream>
#include <stdlib.h>
#include "class.hpp"

int matrix::operator+(matrix* mat){
    matrix* help = mat;
    while(help!=NULL){
        if(x == help->x && y == help->y){
            value = value + help->value;
        }
        help= help->next;
    }
     return value;
}
int matrix::operator-(matrix* mat){
    matrix* help = mat;
    while(help!=NULL){
        if(x == help->x && y == help->y){
            value = value - help->value;
        }
        help= help->next;
    }
     return value;
}

void matrix::fillMatrix(matrix* mat){
    cout << "X:" << endl;
    cin >> y;
    cout << "Y:" << endl;
    cin >> x;
    cout << "value" << endl;
    cin >> value;
}
int matrix::setSizeOfMatrix(matrix* mat){
    matrix* help = mat;
    int sizeOfMatrix = 0;
    while(help!=NULL){
        if(sizeOfMatrix<=help->x){
            sizeOfMatrix = help->x;
        }if(sizeOfMatrix<=help->y){
            sizeOfMatrix = help-> y;
            }
        help=help->next;
    }
    return sizeOfMatrix;
}

void matrix::display(matrix* mat){
    matrix* help = mat;
    int i,j;
    int sizeOfMatrix = setSizeOfMatrix(mat);
    int matrix [sizeOfMatrix] [sizeOfMatrix];
    for ( i = 0; i < sizeOfMatrix; ++i){
        for ( j = 0; j < sizeOfMatrix; ++j){
            matrix[i][j] = 0;
        }
    }
    while (help!=NULL){
       matrix [help->x-1] [help->y-1] = help->value;
       help = help -> next;
    }
    for( i=0; i<sizeOfMatrix; ++i){
        for( j=0; j<sizeOfMatrix; ++j){
            cout << matrix[i][j] << ' ';
        }cout << endl;
    }
}
matrix* matrix::addElement(matrix* mat){
    matrix* newMatrix = new matrix;
    newMatrix->fillMatrix(mat);
    newMatrix-> next = mat;
    return newMatrix;
}
matrix::~matrix(){
    if( next != NULL )
    {
        delete next;
        next = NULL;
    }
}

matrix* matrix::addMatrixes (matrix* mat1, matrix* mat2){
    while(mat1!=NULL){
        mat1->value= *mat1+mat2;
        mat1=mat1->next;
    }
    return mat1;
}
matrix* matrix::substrMatrixes (matrix* mat1, matrix* mat2){
    while(mat1!=NULL){
        mat1->value= *mat1-mat2;
        mat1=mat1->next;
    }
    return mat1;
}

void matrix::initialize(){
    next = NULL;
}
