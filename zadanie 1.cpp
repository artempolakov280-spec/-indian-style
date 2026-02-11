#include <iostream>
#include <cmath>
int main () {
    int month;
    std::cout << "Введите номер месяца от 1 до 12:";
    std::cin>>month;
    if (month <1 || month >12){
        std::cout <<"Число должно быть больше нуля и меньше 13";
} else if (month <=2){
    std::cout << "Зима";
} else if (month >= 3&& month <=5) {
        std::cout << "Весна";
} else if (month >=5 && month <=8) {
    std::cout << "Лето";
} else if (month >=9 && month <=11) {
    std::cout << "Осень";
} else if (month ==12) {
    std::cout << "Зима";
} 
}