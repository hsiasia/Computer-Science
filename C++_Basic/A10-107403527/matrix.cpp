#include <iostream>
#include "matrix.h"

using namespace std;

    matrix::matrix(int matrix_size)
    {
        mat_size=matrix_size;
    }

    int matrix::getSize()
    {
        return mat_size;
    }

    istream &operator>>(istream &input, matrix &mat)
    {
        vector<int> vec;
        for(int row=0;row<mat.getSize();row++){
                vec.clear();
            for(int column=0;column<mat.getSize();column++){
                int num;
                cin>>num;
                vec.push_back(num);
            }
            mat.m.push_back(vec);
        }
        return input;
    }

    ostream &operator<<(ostream &output, matrix &mat)
    {
        for(int row=0;row<mat.getSize();row++){
            if(row!=0)
                output<<" ";
            else
                output<<"[";
            for(int column=0;column<mat.getSize();column++){
                if(column==0)
                    output<<"[";

                output<<mat.m[row][column];

                if((column+1)!=mat.getSize())
                    output<<" ";
                else{
                    if((row+1)==mat.getSize())
                        output<<"]";
                    else
                        output<<"]\n";
                }
            }
            if((row+1)==mat.getSize())
                output<<"]";
        }
        return output;
    }

    matrix matrix::operator+ (matrix &mat)
    {
        matrix mplus(getSize());
        vector<int> vec;
        for(int row=0;row<mat.getSize();row++){
            vec.clear();
			for(int column=0;column<mat.getSize();column++){
                int num;
                num = mat.m[row][column]+m[row][column];
                vec.push_back(num);
            }
			mplus.m.push_back(vec);
        }
	    return mplus;
    }

    matrix matrix::operator- (matrix &mat)
    {
        matrix mplus(getSize());
        vector<int> vec;
		for (int row = 0; row < mat.getSize(); row++) {
			vec.clear();
			for (int column = 0; column < mat.getSize(); column++) {
				int num;
				num = m[row][column] - mat.m[row][column];
				vec.push_back(num);
			}
			mplus.m.push_back(vec);
		}
        return mplus;
    }

    matrix matrix::operator* (matrix &mat)
    {
        matrix mplus(getSize());
        vector<int> vec;
        for(int row=0;row<mat.getSize();row++){
            vec.clear();
            for(int column=0;column<mat.getSize();column++){
				int num=0;
				for (int r = 0; r < mat.getSize(); r++) {
					num += mat.m[row][r] * m[r][column];
				}
				vec.push_back(num);
            }
            mplus.m.push_back(vec);
        }
        return mplus;
    }
