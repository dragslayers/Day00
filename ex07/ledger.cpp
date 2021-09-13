#include <iostream>

using namespace std;

int main() {

    float x,somme=0;

std::cout << "entrez vos cryptomonnaie (dans l'ordre btc, Ethereums, xrp, dogecoin, cardano\n";
std::cin >> x;
somme=somme+(x*38125.73);
std::cin >> x;
somme=somme+(x*2756.65);
std::cin >> x;
somme=somme+(x*0.90);
std::cin >> x;
somme=somme+(x*0.20);
std::cin >> x;
somme=somme+(x*2.06);

std::cout << "vous avez " << somme << " euros";

return 0;

}


