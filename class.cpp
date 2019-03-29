#include <iostream>
#include <stdlib.h>
#include "class.hpp"

bool matrix::fillMatrix(matrix* mat){
    char agree;
    cout << "X:" << endl;
    cin >> x;
    int iks = x;
    cout << "Y:" << endl;
    cin >> y;
    int why = y;
    while(mat!=NULL){
        if(mat->x==iks&&mat->y==why){
            cout << "Do you wanna overwrite? Y|N" << endl;
            cin >> agree;
            if(agree=='n'||agree == 'N'){
                return 0;
            }
          //  break;
        }mat=mat->next;
    }
    cout << "value" << endl;
    cin >> value;
    return 1;
}
int matrix::setSizeOfMatrix(matrix* mat){
    int sizeOfMatrix = 0;
    while(mat!=NULL){
        if(sizeOfMatrix<=mat->x){
            sizeOfMatrix = mat->x;
        }if(sizeOfMatrix<=mat->y){
            sizeOfMatrix = mat-> y;
            }
        mat=mat->next;
    }
    return sizeOfMatrix;
}

void matrix::display(matrix* mat){
    matrix* help = new matrix;
    int sizeOfMatrix = setSizeOfMatrix(mat);
    cout <<sizeOfMatrix<<endl;
    for(int i=1 ;i<=sizeOfMatrix; ++i){
        help=mat;
        for(int j=1;j<=sizeOfMatrix; ++j){
           // while (mat!=NULL){
               if(i == help->x && j == help->y){
                cout << help->value << " ";
               }else{
                    cout << "0 ";
                    }
               //help=help->next;

            }
        cout << endl;
    }
}

matrix* matrix::addElement(matrix* mat){
    bool r;
    matrix* newMatrix = new matrix;
    r=newMatrix->fillMatrix(mat);
    if(r==0){
        delete newMatrix;
        return mat;
    }else if(r==1){
    newMatrix-> next = mat;
    }
    return newMatrix;
}
matrix::~matrix(){
    if(next!=NULL){
    delete next;
    next=NULL;
    }
}
