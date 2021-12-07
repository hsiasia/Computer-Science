/*
* Assignment 10
* Name:¶s·_®L
* Student Number: 107403527
* Course 2019-CE1001
*/

#include <iostream>
#include <vector>
#include "matrix.h"

using namespace std;

int main()
{
    int matrix_size;
    cin >> matrix_size;
    matrix m1(matrix_size);
    matrix m2(matrix_size);
    matrix m3(matrix_size);
    cin >> m1;
    cin >> m2;
    cout<< m1 << endl;
    cout<< m2 << endl;

    m3 = m1+m2;
    cout<< m3 << endl;
    m3 = m1-m2;
    cout<< m3 << endl;
    m3 = m1*m2;
    cout<< m3 << endl;
    return 0;
}
