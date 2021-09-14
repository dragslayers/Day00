#include <iostream>
#include <string>

using namespace std;

double convertion(double x) {
    return x*1.6;
}

int main() {

    double x;

    std::cout << "donnez une distance en miles\n";
    std::cin >> x;
    std::cout << "ça fait " << convertion(x) << "km";

return 0;

}


