#include <iostream>
#include <cmath>
int main () {
    int N;
    std::cout << "Введите значение N: \n";
    if (!(std::cin >>N) || N<=0){
        std::cout <<"Число должно быть больше 0 \n";
        return 1;
    }
    double sum = 0.0, dota = 0.0;
    for (int i =1; i<=N;i++){
        dota +=std::sin(i);
    
        if (std::fabs(dota) <1e-9){
        std::cout << "Ошибка. Деление на ноль на шаге i =" << i << "\n";
        return 1;
        }
    sum += 1.0 / dota;
    }
    
    std::cout << "Результат:" <<sum<< "\n";

}