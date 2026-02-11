#include <cmath>
#include <iostream>
int main(){
    double a=2.8, b=-0.3, c = 4;
    double x,y;
    std::cout <<"Введите значение x:";
    if (!(std::cin >> x)) {
    std::cout << "Вы ввели буквы вместе цифр" << "\n";
    return 1;
}
    if (x<1.2){
    y = a*x*x + b*x + c;
} else if (x=1.2){
    y = a/x + sqrt(x*x+1);
} else if (x>1.2){
    y = (a+b*x)/(sqrt(x*x+1));
}
    std::cout <<"y="<<y;
}
