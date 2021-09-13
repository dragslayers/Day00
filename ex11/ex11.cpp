#include <iostream>
#include <string>

using namespace std;

int main() {

    int x;

    std::cout << "entrez une valeur \n";
    std::cin >> x;

    for(int i=0;i<=10;i++) {
        std::cout << x*i << "\n";
    }

return 0;

}
