#include <iostream>
#include <string>

using namespace std;

void convertion(int x) {
    if(x == 96) {
        return;
    }
        std::cout << char(x);
        convertion(x-1);
}

int main() {

    convertion(122);

return 0;

}
