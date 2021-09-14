#include <iostream>

using namespace std;

void prenom(std::string language = "pas de nom") {
    std::cout << "Bonjour, " << language << " comment allez vous ?" << "\n";
}

int main() {


prenom("Bob");
prenom();

return 0;

}


