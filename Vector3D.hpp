#ifndef Vector3D_hpp
#define Vector3D_hpp

#include <iostream>
using namespace std;

class Vector3D{
    public:
        double x, y, z;

        Vector3D(){
            x = 0;
            y = 0;
            z = 0;
            cout << "БЫЛ СОЗДАН ВЕКТОР" << endl;
        }

        void add();
        void print_vec() const;
        void func_l() const;
        void sum(Vector3D v);
        void dif(Vector3D v);
        void mult_a(double a);
        void vec_pro(Vector3D v) const;
        void scalar_pro(Vector3D v) const;
        void comp(Vector3D v) const;
        void comp_l(Vector3D v) const;
        void angle(Vector3D v) const;
};

#endif //Vector3D_hpp