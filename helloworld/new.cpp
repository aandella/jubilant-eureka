#include <iostream>
 
int main() {
    double sm;
    std::cout << "Введите длину в см" << "\n";
   std::cin >> sm;
   double du = sm/2.54;
   std::cout << "Длина в дюймах равна: " << du << "\n";
    return 0;
}
