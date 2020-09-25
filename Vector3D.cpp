#include <iostream>
#include <cmath>
#include "Vector3D.hpp"
using namespace std;

#define Pi 3.14159265358

void Vector3D::add(){
    cout << "ВВЕДИТЕ КООРДИНАТЫ ВЕКТОРА" << endl;
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        cout << "Z: ";
        cin >> z;
}

void Vector3D::print_vec() const {
        cout << "ВЕКТОР: {" << x << "," << y << "," << z << "}" << endl;
    }

void Vector3D::func_l() const{
        cout << "ДЛИНА ВЕКТОРА: " << sqrt((x*x)+(y*y)+(z*z)) << endl;
    }

void Vector3D::sum(Vector3D v){
        cout << "ВЕКТОР: {" << x+v.x << "," << y+v.y << "," << z+v.z << "}" << endl;
    }

void Vector3D::dif(Vector3D v){
        cout << "ВЕКТОР: {" << x-v.x << "," << y-v.y << "," << z-v.z << "}" << endl;
    }

void Vector3D::mult_a(double a){
        cout << "ВЕКТОР: {" << x*a << "," << y*a << "," << z*a << "}" << endl;
    }

void Vector3D::vec_pro(Vector3D v) const{
        cout << "ВЕКТОРНОЕ ПРОИЗВЕДЕНИЕ: " << ((y * v.z - z * v.y) - (x * v.z - z * v.x) + (x * v.y - y * v.x)) << endl;
    }

void Vector3D::scalar_pro(Vector3D v) const{
        cout << "СКАЛЯРНОЕ ПРОИЗВЕДЕНИЕ: " << (x * v.x + y * v.y + z * v.z) << endl;
    }

void Vector3D::comp(Vector3D v) const{
        double n = x/v.x;
        if (y/v.y == n && z/v.z == n){
            cout << "2 ВЕКТОРА СОВПАДАЮТ" << endl;
        } else{
            cout << "НЕ СОВПАДАЮТ" << endl;
        }
    }

void Vector3D::comp_l(Vector3D v) const{
        if (sqrt((x*x)+(y*y)+(z*z)) > sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z))){
            cout << "ДЛИНА ГЛАВНОГО ВЕКТОРА БОЛЬШЕ" << endl;
        } else if(sqrt((x*x)+(y*y)+(z*z)) < sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z))){
            cout << "ДЛИНА ГЛАВНОГО ВЕКТОРА МЕНЬШЕ" << endl;
        } else{
            cout << "ДЛИНЫ РАВНЫ" << endl;
        }
    }

void Vector3D::angle(Vector3D v) const{
        double a = (x * v.x + y * v.y + z * v.z)/(sqrt((x*x)+(y*y)+(z*z))*sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)));
        cout << "УГОЛ МЕЖДУ ВЕКТОРАМИ: " << acos(a)*180/Pi << endl;
    }