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
    Array(const Array& orig);
    ~Array();

    void print() const;
    void expand();

    int getSize() const;
    double getData(int index) const;
    double operator[](int index) const;

    void setData(int index, double value);
    bool equal(const Array& rhs) const;
    bool operator==(const Array& rhs) const;
    bool operator!=(const Array& rhs) const;
    void operator=(const Array& rhs);
    const Array operator+(const Array & rhs) const;
    void printMyInfo();

private:
    double *data;
    int size;
    void setSize(int value);
};

#endif /* ARRAY_H */

