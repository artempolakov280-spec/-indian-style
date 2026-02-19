#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double X =4.5;
    std::cout<<"Y\tУгол\n";
    for (double Y =2.0; Y<=3.0+ 1e-9;Y+=0.2){
        if (Y>=X){
            std::cout << Y <<"Ошибка, Y>=X \n";
        } else{
            double alpha = std::acos(Y/X)* 180/M_PI;
            std::cout <<Y<< "\t"<<alpha<< "\n";
        }
    }
}