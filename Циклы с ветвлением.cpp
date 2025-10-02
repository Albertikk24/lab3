/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Циклы с ветвлением *
 * Вариант:   7                  *
 *********************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    const double d = 0.191;
    const double g = 9.81;
    
    double v, Fv, phi;
    char choice;
    
    cout << "Gas saturation coefficient calculation" << endl;
    cout << "======================================" << endl;
    
    do {
        cout << "\nEnter velocity v (m/s): ";
        cin >> v;
        
        // Проверка корректности ввода
        if (v <= 0) {
            cout << "Error: velocity must be positive!" << endl;
            continue;
        }
        
        // Вычисление числа Фруда
        Fv = (v * v) / (g * d);
        
        // Вычисление коэффициента газонасыщенности
        if (Fv > 50) {
            phi = 0.05 * Fv * Fv;
        } else {
            phi = 0.35 * Fv * Fv;
        }
        
        // Вывод результатов

        cout << fixed << setprecision(3);
        cout << "\nCalculation results:" << endl;
        cout << "Velocity v = " << v << " m/s" << endl;
        cout << "Froude number Fv = " << Fv << endl;
        cout << "Gas saturation coefficient φ = " << phi << endl;
        
        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Program completed." << endl;
    
    return 0;
}