#include <iostream>
#include <string>

using namespace std;

std::string divisible(int x) {
    if(x%3==0 && x%5==0) {
        return "fizzbuzz";
    }
    if(x%5==0) {
        return "buzz";
    }
    if(x%3==0) {
        return "fizz";
    }
    return "nope";
}

int main() {

    int x;

    std::cout << "donnez une nombre\n";
    std::cin >> x;

    std::cout << divisible(x);

return 0;

}


