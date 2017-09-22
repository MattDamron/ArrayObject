/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.cpp
 * Author: homayoun
 * 
 * Created on September 22, 2017, 1:22 PM
 */

#include "Array.h"

Array::Array() {
    size = 10;
    data = new double [size];
    for(int i=0; i < size; i++) {
        data[i] = i;
    }
}

Array::Array(int _size) {
    size = _size;
    data = new double [size];
    for(int i=0; i < size; i++) {
        data[i] = i;
    }
}

Array::Array(int _size, double value) {
    size = _size;
    data = new double [size];
    for(int i=0; i < size; i++) {
        data[i] = value;
    }
}

//Array::Array(const Array& orig) {
//}

Array::~Array() {
    delete [] data;
}

void Array::print(){
    for(int i=0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}