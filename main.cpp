/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on September 22, 2017, 1:20 PM
 */

#include <cstdlib>
#include <valarray>
#include "Array.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Array Array1;
    Array Array2(10,-20);
    Array copyOfArray2(Array2);
    //    Array Array3(300, -10);

    Array1.print();
    Array2.print();
    copyOfArray2.print();

    if(Array1.equal(Array2)){
        cout << "Array1 and Array2 are equal" << endl;
    } else {
        cout << "Array1 and Array2 are not equal" << endl;
    }
    
    if(Array2.equal(copyOfArray2)) {
        cout << "Array2 and copyOfArray2 are equal" << endl;
    } else {
                cout << "Array2 and copyOfArray2 are NOT equal" << endl;
    }
    
    //    Array3.print();    

//    cout << "After the alternation\n";
//    Array1.setData(3, -10);
//    Array1.print();
//    Array2.print();
//
//    cout << "After the assignment" << endl;
//    Array2 = Array1;
//    Array1.print();
//    Array2.print();

    //    Array1.getSize();
    //    Array1.insert(3, -10);
    //    Array1.delete(5);

    return 0;
}

