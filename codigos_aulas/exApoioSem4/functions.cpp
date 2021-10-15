#include "hash.h"
#include <iostream>
using namespace std;

Hash::Hash(int max){
    lenght = 0;
    max_items = max;
    structure = new int[max_items];
}

Hash::~Hash(){
    delete [] structure;
}

bool Hash::isFull(){
    return(lenght == max_items);
}

int Hash::getLenght(){
    return(lenght);
}

void Hash::retrieveItem(int& item, bool& found){
  int startLoc = getHash(item);
  bool moreToSearch = true; 
  int location = startLoc;
  do {
    if (structure[location] == item || structure[location] == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);
}

void Hash::insertItem(int item){
    int location;
    location = getHash(item);
    while (structure[location] > 0)
        location = (location + 1) % max_items;
    structure[location] = item;
    lenght++;
}

void Hash::deleteItem(int item){
    int startLoc = getHash(item);
    bool moreToSearch = true;
    int location = startLoc;
  do {
    if (structure[location] == item ||
	structure[location] == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);

  if (structure[location] == item ) {
      structure[location] = -2;
      lenght--;
  }

}

void Hash::print(){
    for (int i = 0; i < max_items; i++){
        cout << structure[i] << " , ";
    }
    cout << endl;
}

int Hash::getHash(int item){
    return item % max_items;
}
