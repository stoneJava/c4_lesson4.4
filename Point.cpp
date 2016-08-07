//
// Created by dslht on 2016/8/6.
//

#include <iostream>

using namespace std;

class Point {

    int X, Y;
public:
    void SetX(int x){
        X=x;
    }
    Point(int a = 0, int b = 0) {
        X = a;
        Y = b;
        cout << "Initializing" << endl;
    }

    Point(const Point &p);

    int GetX() {
        return X;
    }

    int GetY() {
        return Y;
    }

    void Show() {
        cout << "X=" << X << ",Y=" << Y << endl;
    }

    ~Point() {
        cout << "delete..." << X << "," << Y << endl;
    }
};

Point::Point(const Point &p) {
    X = p.X;
    Y = p.Y;
    cout << "Copy Initializing " << endl;
}

void display(Point p) {
    p.Show();
}

void disp(Point &p) {
    p.Show();
}

Point fun() {
    Point A(101, 202);
    return A;
}

int main() {
    cout << endl;
    Point A(42, 35);
    Point B(A);

    Point C(58, 94);

    cout << endl;
    cout << "called display(B)" << endl;
    //如果函数形参是类对象，调用函数时，进行形参和实参的结合时，需要调用复制构造函数，
    //因为传对象时时传值方式，需要产生一个副本，这就是临时对象，调用复制构造函数产生
    //副本，在函数退出时调用析构函数析构临时对象。
    display(B);
    cout << "Next..." << endl;

    cout << endl;
    cout << "called disp(B)" << endl;
    disp(B);
    //B.SetX(45);

    cout << endl;
    cout << "call C=fun()" << endl;
    C = fun();//退出函数时，会调用析构函数清除对象A
    cout << "called disp(C)" << endl;
    disp(C);

    cout << endl;
    cout << "out ..." << endl;
    return 0;
}