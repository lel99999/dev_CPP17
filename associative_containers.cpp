// Associative containers
/*
 - Set
 - Map
 - Multiset
 - Multimap
 - Unordered set
 - Unordered multiset
 - Unordered map
 - Unordered multimap

*/

#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
  multimap<string,long> contacts = {
    {"Joe",7035551212},
    {"Alice",7034423311},
    {"Aimee",7038812222},
    {"Colin",3014551111}
  }; 
 
  auto pos = contacts.find("Aimee");
  int count = contacts.count("Aimee");
  int index = 0;

  while(pos!= contacts.end()){
    cout << "\nPhone number of " << post->first << "is " << pos->second << endl;
    ++index;
    if(index == count)
      break;
  }
 
  return 0;
}     
     
     
     
      
      
            
           
           
           
           
           

            
           
         
            
                    
          
        
             
 
  
