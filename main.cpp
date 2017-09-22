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
#include "Array.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Array Array1;
    Array Array2(200);
    Array Array3(300, -10);
    
//    
    Array1.print();
    Array2.print();
    Array3.print();
//    Array1.getSize();
//    Array1.insert(3, -10);
//    Array1.delete(5);

    return 0;
}

