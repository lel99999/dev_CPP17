// Sequence Containers
/*
 - Arrays
 - Vectors
 - Lists
 - forward_list
 - deque

Ojbects stored in STL contaier are nothing but copies of the values, the STL expects certain basic requirements
from user-defined data types to hold those objects inside a container. Every object stored in STL container must
provide the following:
 - default constructor
 - copy constructor
 - assignment operator

*/

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
  list<int> l;

  for(int count=0;count<5;++count)
    l.push_back((count+1) * 100);

  auto pos = l.begin();
  cout << "\nPrint the list ..." << endl;
  while(pos!=l.end())
    cout << *pos++ << "-->";
  cout << " X" << endl

  return 0;
}

