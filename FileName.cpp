#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int x = 100;                     
    int* ptr = &x;                  
    int& ref = x;                  

    
    std::cout << "Значения: x = " << x << ", *ptr = " << *ptr << ", ref = " << ref << std::endl;

    
    std::cout << "Адреса: &x = " << &x << ", ptr = " << ptr << ", &ref = " << &ref << std::endl;

    return 0;
}
