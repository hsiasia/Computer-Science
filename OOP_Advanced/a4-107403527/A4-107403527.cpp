#include <iostream>

using namespace std;

class Square{
public:
    //write something
    Square(int r){
        area=r*r;
    }
    friend class Area;
    friend class Circle;
private:
    float area;
};

class Circle{
public:
    //write something
    Circle(int r){
        area=r*r*pi;
    }
    friend class Area;
    static int circleArea(int r){
        return r*r*pi;
    }
    void compareArea(Square &S){
        if(area>S.area){
            cout<<"Circle one is the biggest"<<endl;
        }
        else
            cout<<"Circle one is not the biggest"<<endl;
    }
private:
    static const int pi = 3;
    float area;
};

class Area{
public:
    //write something
    Area(){}
    static void compare(Circle C,Square S){
        if(S.area>C.area){
            cout<<"Square one is the biggest"<<endl;
        }
        else
            cout<<"Square one is not the biggest"<<endl;
    }
};

int main(){
    int r;
    cin >> r;
    cout << "Circle Area:" << Circle::circleArea(r) << endl;

    //new一個半徑為10的Circle Class
    Circle r1(10);
    //new一個半徑為3的Circle Class
    Circle r2(3);
    //new一個邊長為3的Square Class 9
    Square s1(3);
    //new一個邊長為10的Square Class 100
    Square s2(10);
    //r1和s1比較面積
    r1.compareArea(s1);
    //r2和s2比較面積
    Area::compare(r2,s2);
    return 0;
}
