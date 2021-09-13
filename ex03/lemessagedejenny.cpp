#include <iostream>
#include <string>

using namespace std;

int main() {

    string x;

    std::cout << "Bonjour, Quel est ton prénom\n";
    std::cin >> x;

    if(x == "Johnny" || x == "johnny" ) {
        std::cout << "Hello, my love";
    }else{
        std::cout << "Salut, " << x;
    }

return 0;

}


