//
// Created by Michael Shires on 12/10/23.
//

#ifndef MATHHELPER_MATRIX_H
#define MATHHELPER_MATRIX_H


#include "Row.h"

class Matrix {
public:

    Matrix();

    Matrix(std)

    ~Matrix();

    void addRow(int rowAdding, int rowAdded, int amt);

    static void addRow(Row* rowAdding, Row* rowAdded, int amt);

    void reduceEchelon();

    void set(int *value);

private:

    std::unique_ptr<Row[]> data;
    int size;

};


#endif //MATHHELPER_MATRIX_H
