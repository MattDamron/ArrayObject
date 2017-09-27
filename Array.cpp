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

#include <valarray>

#include "Array.h"

Array::Array() : size(10) {
    //    size = 10;
    data = new double [size];
    for (int i = 0; i < size; i++) {
        data[i] = i;
    }
}

Array::Array(int _size) : size(_size) {
    //    size = _size;
    data = new double [size];
    for (int i = 0; i < size; i++) {
        data[i] = i;
    }
}

Array::Array(int _size, double value) : size(_size) {
    //    size = _size;
    data = new double [size];
    for (int i = 0; i < size; i++) {
        data[i] = value;
    }
}

//Array::Array(const Array& orig) {
//}

Array::~Array() {
    delete [] data;
}

int Array::getSize() {
    return size;
}

void Array::setSize(int value) {
    if (value > 0) {
        size = value;
    }
}

void Array::setData(int index, double value) {
    if ((index >= 0) && (index < size)) {
        data[index] = value;
    } else {
        cout << "NO!" << endl;
    }
}

double Array::getData(int index) {
    if ((index >= 0) && (index < size)) {
        return data[index];
    } else {
        return data[size - 1];
    }
}

void Array::print() {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void Array::expand() {
    double *localArray = new double[size + 1];

    for (int i = 0; i < size; i++) {
        localArray[i] = data[i];
    }
    localArray[size] = size;

    delete [] data;
    setSize(size + 1);
    data = localArray;
    //    myArray = new int[size];
    //    
    //    //Is this a deep-copy or a shallow-copy? 
    //    //Can you replace one with the other?
    //    //What are the advantages and disadvantages? 
    //    for(int i=0; i < size; i++) {
    //        myArray[i] = localArray[i];
    //    }
    //    delete [] localArray;
} 

bool Array::equal(Array& rhs) {
    bool result(true);
    
    if(getSize() != rhs.getSize()) {
        result = false;
    } else {
        for(int i =0; i < getSize(); i++) {
            if(getData(i) != rhs.getData(i)){
                result = false;
            }
        }
    }
    return result;
}