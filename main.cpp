#include <iostream>
#include "class.hpp"
#include "function.hpp"

int main (){
 matrix* mat=new matrix;
 char a;
matrix* matt=new matrix;
cout << "Initialize 1st matrix" << endl;
matt->fillMatrix(matt);
matt->initialize();
 cout << "Initialize 2nd matrix" << endl;
 mat->fillMatrix(mat);
 mat->initialize();
 clearScreen();
 while( a != '5'){
        cout << "Matrix 1:\n";
        mat->display(mat);
        cout <<"Matrix 2:"<<endl;
        matt->display(matt);
        cout << endl;
        cout << "1.Add number to the first matrix\n2.Display\n3.Add number to the second matrix\n4.Display2\n5.exit"<<endl;
    cin >> a;
    switch(a){
    case '1':
        mat=mat->addElement(mat);
        clearScreen();
        break;
    case '2':
        clearScreen();
        mat->display(mat);
        break;
    case '3':
        matt=matt->addElement(matt);
        clearScreen();
        break;
    case '4':
        clearScreen();
        matt->display(matt);
        break;
    case '6':
        mat->addMatrixes(mat, matt);
        clearScreen();
        break;
    case '7':
        mat->substrMatrixes(mat, matt);
        clearScreen();
        break;
    default:
        break;
        }
    }
    delete mat;
    delete matt;
}
