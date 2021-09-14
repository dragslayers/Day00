#include <iostream>

using namespace std;

int main() {

char operateur;
int x,y;

std::cout << "x = ?\n";
std::cin >> x; 
std::cout << "y = ?\n";
std::cin >> y;
std::cout << "operateur : ";
std::cin >> operateur;


switch(operateur) {
    case '+' : std::cout << x + y;
    break;
    case '-' : std::cout << x - y;
    break;
    case '*' : std::cout << x * y;
    break;
    case '/' : std::cout << x / y;
    break;
    default: std::cout << "non valide";
    break;
}

}


