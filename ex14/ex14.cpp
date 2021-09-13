#include <iostream>
#include <stdlib.h>

#define max 10

using namespace std;

int trie(int tab[]) {
    int temp;
    for(int i=0;i<max;i++) {
        if(tab[i] < tab[i+1] && i<max) {
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
        }
    }
    return *tab;
}

int main() {

    int tab[max];

    for(int i=0;i<max;i++) {
        tab[i]=rand() % 100;
        std::cout << tab[i]<< "\t";
    }

    for(int i=0;i<max;i++) {
        if(tab[i] < tab[i+1]) {
            trie(tab);
        }
    }

    std::cout << "\n";
    std::cout << "\n";

    for(int i=0;i<max;i++) {
        std::cout << tab[i]<< "\t";
    }



}


