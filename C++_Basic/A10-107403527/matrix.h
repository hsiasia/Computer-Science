#include <iostream>
#include <vector>

using namespace std;

#ifndef MATRIX_H
#define MATRIX_H

class matrix{
public:
    matrix(int);
    friend istream &operator>>(istream &, matrix &);
    friend ostream &operator<<(ostream &, matrix &);
	int getSize();
    matrix operator+ (matrix &);
    matrix operator- (matrix &);
    matrix operator* (matrix &);

private:
    int mat_size;
    vector< vector<int> > m;
};
#endif // MATRIX_H
