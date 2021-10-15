#include <iostream>
#include "hash.h"

using namespace std;

int main(){

int elementos[9] = { 25, 32, 11, 24, 14, 37, 92, 51, 43 };
Hash elementosHash(11);

for (int i = 0; i < 9; i++){
    int item = elementos[i];
    elementosHash.insertItem(item);
}

elementosHash.print();

system("pause");
}

