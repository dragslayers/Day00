#include <iostream>
#include <stdlib.h>
#include <string>

#define max 10

using namespace std;

int main() {

    int x,temp,y=0;
    cout << "entrez une valeur\n";
    cin >> x;
    temp = x;
    do{
        y=y+pow(temp%10,3);
        temp=(temp/10);
    }while(temp>0);

    if(y==x){
        cout << x << " est un nombre armstrong\n";
    }else {
        cout << x << " n'est pas un nombre armstrong\n";
    }
}
