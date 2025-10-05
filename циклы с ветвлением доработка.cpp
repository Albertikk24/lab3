/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Циклы с ветвлением *
 * Вариант:   7                  *
 *********************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double d = 0.191;
const double g = 9.81;

int main() {

    double v, Fv, phi;
    char choice;
    
    cout << "Gas saturation coefficient calculation" << endl << "======================================" << endl;
    
    do {
        cout << "\nEnter velocity v (m/s): ";
        cin >> v;
        
        // Вычисление числа Фруда
        Fv = (v * v) / (g * d);
        
        // Вычисление коэффициента газонасыщенности
        if (Fv > 50) {
            phi = 0.05 * Fv * Fv;
        } else {
            phi = 0.35 * Fv * Fv;
        }
        
        // Вывод результатов

        cout << fixed << setprecision(3)<< endl << "\nCalculation results:" << endl << "Velocity v = " << v << " m/s" << endl << "Froude number Fv = " << Fv << endl << "Gas saturation coefficient f = " << phi << endl << "\nDo you want to continue? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Program completed." << endl;
    
    return 0;
}