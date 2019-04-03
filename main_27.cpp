/*
Маришин В.М. , Лихинин А.Е.
Проект: Программа ведет учет числа проехавших машин через кассу по платной дороге и суммарную выручку от платы за проезд. (так же имеются машины, которые не заплатили за проезд)
*/
#include <iostream>
#include <conio.h>

using namespace std;

const char ESC = 27;
const double cost = 150;

class till { // касса
    
    private:
    unsigned int AllCars; // всего машин за день
    double Cash; // всего денег за день
    
    
    public:
    till() : AllCars(0), Cash(0.0)
    { }
    void paymentCar()
    {
        AllCars++;
        Cash += cost;
    }
    
    void nopaymentCar()
    {
        AllCars++;
    }
    
    void output()
    {
        cout << "Машины: " << AllCars << endl;
        cout << "Деньги: " << Cash << endl;
    }
};

int main()
 {
    till cabin;
    char ch;
    cout << "Нажмите - для нарушителя" << endl;
    cout << "+ для каждой оплачивающей машины" << endl;
    cout << "Esc для выхода" << endl;
    do
 {
        ch = getche();
        if (ch == '-')
       {
          cabin.nopaymentCar();
       }
    
       if (ch == '+')
       {
          cabin.paymentCar();
       }
 } 
    while (ch != ESC);
      cabin.output();
    return 0;
} 
