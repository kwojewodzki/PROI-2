#include <iostream>
#include <stdlib.h>
#include "class.hpp"

matrix* matrix::operator*(matrix* mat){

}

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

matrix* matrix::operator+=(matrix* mat){
    matrix* help = mat;
    while (help!=NULL){
        if( x == help->x && y == help->y){
            value = value + help->value;
        }
        help=help->next;
    }
    return help;
}

matrix* matrix::operator-=(matrix* mat){
    matrix* help = mat;
    while (help!=NULL){
        if( x == help->x && y == help->y){
            value = value - help->value;
        }
        help=help->next;
    }
    return help;
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

void matrix::addMatrixes (matrix* mat1, matrix* mat2){
    while(mat1!=NULL){
        mat1->value= *mat1+mat2;
        mat1=mat1->next;
    }
}
void matrix::substrMatrixes (matrix* mat1, matrix* mat2){
    while(mat1!=NULL){
        mat1->value= *mat1-mat2;
        mat1=mat1->next;
    }
}
void matrix::plusequals(matrix* mat1, matrix* mat2){
    while(mat1!=NULL){
        *mat1+=mat2;
        mat1=mat1->next;
    }
}
void matrix::minuseqauls (matrix* mat1, matrix* mat2){
    while(mat1!=NULL){
        *mat1-=mat2;
        mat1=mat1->next;
    }
}
void matrix::initialize(){
    next = NULL;
}

matrix* matrix::multi(matrix* mat1, matrix* mat2){
    if(mat1->setSizeOfMatrix(mat1) != mat2->setSizeOfMatrix(mat2)){
        cout << "You can't multiply matrices that differ in size" << endl;
    }
    return mat1;
}
