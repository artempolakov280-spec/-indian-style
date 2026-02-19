#include <cmath>
#include <iostream>
int main(){
    double A,B;
        std::cout <<"Введите A и B, A>B \n";
        std::cin >> A>>B;
        if (A<=0 || B<=0 || A<=B){
        std::cout<<"Ошибка, A не может быть меньше B \n";
    }
    int count = 0;
    while (A>=B) {
        A-=B;
        count++;
    }
    std::cout << "Количество отрезков:" <<count<< "\n";
    std::cout << "Длина незанятой части:" <<A<< "\n";

    }