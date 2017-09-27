/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: homayoun
 *
 * Created on September 22, 2017, 1:22 PM
 */

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

class Array {
public:
    Array();
    Array(int _size);
    Array(int _size, double value);

    //    Array(const Array& orig);
    ~Array();

    void print();
    void expand();

    int getSize();
    double getData(int index);
    void setData(int index, double value);
    bool equal(Array &rhs);


private:
    double *data;
    int size;
    void setSize(int value);
};

#endif /* ARRAY_H */
