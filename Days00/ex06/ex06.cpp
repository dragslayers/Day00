#include <iostream>

using namespace std;

int main() {

double x = 150000000;
double y = 31000000;
int semaine = 1;
x-=y;
while(x>0) {
    y*=0.8;
    x=x-y;
    semaine++;
}
std:cout << semaine;

return 0;

}


