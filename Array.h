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

template <class T>
class Array {
    template <class U>
    friend ostream & operator<<(ostream &lhs, const Array<U> &rhs);
    template <class U>
    friend istream & operator>>(istream &lhs, Array<U> &rhs);
public:
    Array();
    Array(int _size);
    Array(int _size, T value);
    Array(const Array& orig);
    ~Array();

    void print() const;
    void expand();

    int getSize() const;
    T getData(int index) const;
    T operator[](int index) const;

    void setData(int index, T value);
    bool equal(const Array& rhs) const;
    bool operator==(const Array& rhs) const;
    bool operator!=(const Array& rhs) const;
    void operator=(const Array& rhs);
    const Array operator++(); //prefix ++Array
    const Array operator++(int dummy); //postfix Array++
    const Array operator+(const Array & rhs) const;
    void printMyInfo() const;

private:
    T *data;
    int size;
    void setSize(int value);
};

#endif /* ARRAY_H */

