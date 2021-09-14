#include <iostream>
#include <stdlib.h>
#include <string>

#define max 10

using namespace std;

int chainelen(string x) {

    int len = 0,i=0;
    while(x[i] != '\0') {
        len++;
        i++;
    }
    return len;
}

int main() {

    string x;

    cout << "entrez une chaine de characteren\n";
    cin >> x;
    cout << "la chaine fait " << chainelen(x);


}
