#include <iostream>
#include "sort.h"
#include "Utils.h"

using namespace std;

int main() {
    int table[10]= {5,12,76,3,9,45,86,22,56,86};


    int size = sizeof(table)/ sizeof (table[0]);

    int* tableauTrie = sort_array(table, size);

    // Afficher le tableau trié
    cout << "Tableau trié : ";
    for (int i = 0; i < size; ++i) {
        cout << tableauTrie[i] << " ";
    }
    cout << endl;

    return 0;

}