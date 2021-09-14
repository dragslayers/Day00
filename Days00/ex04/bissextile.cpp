#include <iostream>
#include <string>

using namespace std;

int main() {

    int x;

    std::cout << "donnez une année\n";
    std::cin >> x;


    if(x%4 == 0 || x%400==0 ) {
        if(x%100 != 0) {
            std::cout << x << " bissextile";
        } else {
            std::cout << x << " non bissextile";
        }
    }else{
        std::cout << x << " non bissextile";
    }

return 0;

}


