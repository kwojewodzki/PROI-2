#include <iostream>
#include "class.hpp"
#include "function.hpp"

int main (){
 matrix* mat=new matrix;
 char a;
 cout << "Initialize 1st matrix" << endl;
 mat->fillMatrix(mat);
 clearScreen();
 while( a != '4'){
        cout << "1.Add number to the matrix\n2.Display\n4.exit"<<endl;
    cin >> a;
    switch(a){
    case '1':
        mat=mat->addElement(mat);
        //clearScreen();
        break;
    case '2':
        clearScreen();
        mat->display(mat);
        break;
    default:
        break;
        }
    }
 delete mat;
}
