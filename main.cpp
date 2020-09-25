#include <iostream>
#include "Vector3D.cpp"

using namespace std;

void print_menu(){
    cout << "______________________________" << endl;
    cout << "|                            |" << endl;
    cout << "|            МЕНЮ            |" << endl;
    cout << "|____________________________|" << endl;
    cout << "|                            |" << endl;
    cout << "|1  - ВЫВЕСТИ ВЕКТОР         |" << endl;
    cout << "|2  - ИЗМЕНИТЬ ВЕКТОР        |" << endl;
    cout << "|3  - ДЛИННА ВЕКТОРА         |" << endl;
    cout << "|4  - УМНОЖИТЬ НА ЧИСЛО      |" << endl;
    cout << "|5  - СЛОЖЕНИЕ 2 ВЕКТОРОВ    |" << endl;
    cout << "|6  - ВЫЧИТАНИЕ 2 ВЕКТОРОВ   |" << endl;
    cout << "|7  - ВЕКТОРНОЕ ПРОИЗВЕДЕНИЕ |" << endl;
    cout << "|8  - СКАЛЯРНОЕ ПРОИЗВЕДЕНИЕ |" << endl;
    cout << "|9  - СРАВНЕНИЕ НА СОВПАДЕНИЕ|" << endl;
    cout << "|10 - СРАВНЕНИЕ ДЛИН ВЕКТОРОВ|" << endl;
    cout << "|11 - УГОЛ МЕЖДУ ВЕКТОРАМИ   |" << endl;
    cout << "|0  - КОНЕЦ                  |" << endl;
    cout << "|____________________________|" << endl;
}

int main(){
    int n;
    setlocale(LC_ALL, "Rus");
    Vector3D v1{};
    Vector3D v2{};
    int var;
    print_menu();
    for(;;){
        cin >> var;
        switch(var){
            case 1:
                cout <<"ВЫБИРИТЕ ВЕКТОР(1 или 2): "<< endl;
                cin >> n;
                if(n == 1){
                    v1.print_vec();
                    break;
                }else if(n == 2){
                    v2.print_vec();
                    break;
                } else{
                    cout << "НЕВЕРНО ВВЕДЕН НОМЕР ВЕКТОРА!" << endl;
                    break;
                }
            case 2:
                cout <<"ВЫБИРИТЕ ВЕКТОР(1 или 2): "<< endl;
                cin >> n;
                if(n == 1){
                    v1.add();
                    break;
                }else if(n == 2){
                    v2.add();
                    break;
                } else{
                    cout << "НЕВЕРНО ВВЕДЕН НОМЕР ВЕКТОРА!" << endl;
                    break;
                }
            case 3:
                cout <<"ВЫБИРИТЕ ВЕКТОР(1 или 2): "<< endl;
                cin >> n;
                if(n == 1){
                    v1.func_l();
                    break;
                }else if(n == 2){
                    v2.func_l();
                    break;
                } else{
                    cout << "НЕВЕРНО ВВЕДЕН НОМЕР ВЕКТОРА!" << endl;
                    break;
                }
            case 4:
                double a;
                cout <<"ВЫБИРИТЕ ВЕКТОР(1 или 2): "<< endl;
                cin >> n;
                if(n == 1){
                    cout << "ВВЕДИТЕ ЧИСЛО: ";
                    cin >> a;
                    v1.mult_a(a);
                    break;
                }else if(n == 2){
                    cout << "ВВЕДИТЕ ЧИСЛО: ";
                    cin >> a;
                    v2.mult_a(a);
                    break;
                } else{
                    cout << "НЕВЕРНО ВВЕДЕН НОМЕР ВЕКТОРА!" << endl;
                    break;
                }
            case 5:
                v1.sum(v2);
                break;
            case 6:
                v1.dif(v2);
                break;
            case 7:
                v1.vec_pro(v2);
                break;
            case 8:
                v1.scalar_pro(v2);
                break;
            case 9:
                v1.comp(v2);
                break;
            case 10:
                v1.comp_l(v2);
                break;
            case 11:
                v1.angle(v2);
                break;
            case 0:
                return 0;
            default:
                cout << "ОШИБКА, ПОПРОБУЙТЕ ЕЩЕ РАЗ" << endl;
                break;
        }
    }
}