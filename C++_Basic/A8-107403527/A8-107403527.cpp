/*
* Assignment 8
* Name:鈕愷夏
* Student Number: 107403527
* Course 2019-CE1001
*/
#include <iostream>
#include <ctime>
using namespace std;
void f(int *,int );
void f_2(int ,int *);

int main()
{
    int loop_num = 24000;
    int a, b;
    cin >> a >> b;
    double start_time = clock();

    for(int i=0;i<loop_num;i++){
        f_2(a,&b);
        for(int j=0;j<loop_num;j++){
            f(&a,b);
        }
    }
    double end_time = clock();

    cout << a << endl;
    cout << b << endl;
    //cout << end_time - start_time << endl;

    return 0;
}

void f(int *anum,int bnum){
    *anum = *anum % 7;
    bnum = bnum % 11;
    *anum = (*anum)*(*anum) - 3*(bnum);
}
void f_2(int anum,int *bnum){
    anum = anum % 13;
    *bnum = *bnum % 5;
    *bnum = (*bnum)*(*bnum) - 13*(anum);
}



