/*
* Assignment 11
* Name:鈕愷夏
* Student Number: 107403527
* Course 2019-CE1001
*/
#include <iostream>
#include <fstream>
using namespace std;

main() {

    int a[9][9];
    string str = "Y";
    /*1.
    string fileName = "sudo3_N.txt";
    fstream inputFile;
    inputFile.open(fileName.c_str(), ios::in);
    cout << fileName << endl;
    */
    string fileName;
    cin >> fileName;
    ifstream inputFile;
    inputFile.open(fileName.c_str(), ios::in);
    //讀檔
    if (!inputFile) {
        cerr << "Error!file not found" << endl;
    }
    else{
        for(int y = 0; y<9; y++){
            for (int x = 0; x < 9; x++) {
                inputFile >> a[y][x];
            }
        }
    }
    //列驗證
    for(int y = 0; y<9; y++){
        if(str != "Y"){
            break;
        }
        int sumX=0;
        int mulX=1;
        for (int x = 0; x < 9; x++) {
            sumX += a[y][x];
            mulX *= a[y][x];
        }
        if(sumX != 45){
            str = "N";
        }
        if(mulX != 362880){
            str = "N";
        }
        sumX=0;
        mulX=1;
    }
    //行驗證
    for(int x = 0; x<9; x++){
        if(str != "Y"){
            break;
        }
        int sumY=0;
        int mulY=1;
        for (int y = 0; y < 9; y++) {
            sumY += a[y][x];
            mulY *= a[y][x];
        }
        if(sumY != 45){
            str = "N";
        }
        if(mulY != 362880){
            str = "N";
        }
        sumY=0;
        mulY=1;
    }
    //左邊九宮格驗證
    int sum1 = 0;
    int mul1 = 1;
    for(int y = 0; y<9; y++){
        if(str != "Y"){
            break;
        }
        for (int x = 0; x < 3; x++) {
            sum1 += a[y][x];
            mul1 *= a[y][x];
        }
        if(y==2||y==5||y==8){
            if(sum1 != 45){
                str = "N";
            }
            if(mul1 != 362880){
                str = "N";
            }
            sum1=0;
            mul1=1;
        }
    }
    //中間九宮格驗證
    int sum2 = 0;
    int mul2 = 1;
    for(int y = 0; y<9; y++){
        if(str != "Y"){
            break;
        }
        if(y==0||y==3||y==6){
            int sum2 = 0;
            int mul2 = 0;
        }
        for (int x = 3; x < 6; x++) {
            sum2 += a[y][x];
            mul2 *= a[y][x];
        }
        if(y==2||y==5||y==8){
            if(sum2 != 45){
                str = "N";
            }
            if(mul2 != 362880){
                str = "N";
            }
            sum2=0;
            mul2=1;
        }
    }

    //右邊九宮格驗證
    int sum3 = 0;
    int mul3 = 1;
    for(int y = 0; y<9; y++){
        if(str != "Y"){
            break;
        }
        if(y==0||y==3||y==6){
            int sum3 = 0;
            int mul3 = 0;
        }
        for (int x = 6; x < 9; x++) {
            sum3 += a[y][x];
            mul3 *= a[y][x];
        }
        if(y==2||y==5||y==8){
            if(sum3 != 45){
                str = "N";
            }
            if(mul3 != 362880){
                str = "N";
            }
            sum3=0;
            mul3=1;
        }
    }
    cout << str << endl;
    return 0;
}
