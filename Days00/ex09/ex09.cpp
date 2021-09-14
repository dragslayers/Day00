#include <iostream>
#include <string>

using namespace std;

void convertion(int x) {
    if(x == 123) {
        return;
    }
        std::cout << char(x) << "\n";
        convertion(x+1);
}

int main() {

    convertion(97);

return 0;

}
