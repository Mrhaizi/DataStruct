#include <iostream>
#include <vector>
#include <vector.hpp>

int main() {
    // MyVector<int>* valVecotr = new MyVector<int>();
    MyVector<int> valVector1(1);
    valVector1.pushBack(1);
    valVector1.pushBack(2);
    valVector1.pushBack(3);
    valVector1.pushBack(4);
    int a =valVector1.popBack();
    std::cout << a << "\n";
    a = valVector1.popBack();
    std::cout << a << "\n";
    a = valVector1.popBack();
    std::cout << a << "\n";
    a = valVector1.popBack();
    std::cout << a << "\n";
    return 0;
}
