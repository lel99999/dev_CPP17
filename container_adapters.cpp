// stack, queue, priority queue
#include <iostream>
#include <stack>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
  stack<string> langs;

  langs.push("French");
  langs.push("Hindi");
  langs.push("English");
  langs.push("Tamil");
  langs.push("German");

  cout << "\nValues in Stack are ..." << endl;
  while(!langs.empty()){
    cout << langs.top() << endl;
    langs.pop();
  }
  cout << endl;
  
  return 0;
}
