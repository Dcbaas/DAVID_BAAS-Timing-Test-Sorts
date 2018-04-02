#include "sorts.h"
#include "celebrity.h"
#include <vector>
#include <string>
#include <cstdlib>

celebrity & celebrityBuilder();
std::string & strBuilder();

int main(int argc, char** argv){
  int sortType{std::stoi(argv[0])};
  int elements{std::stoi(argv[1])};

 std::vector<celebrity> celebrities;

  for(int i{0}; i < elements;++i){
    celebrity c = celebrityBuilder();
    celebrities.push_back(c);
  }

  switch(sortType){
    case 1:
      bubble_sort(celebrities);
      return 0;

    case 2: 
      selection_sort(celebrities);
      return 0;

    case 3:
      insertion_sort(celebrities);
      return 0;
    
    case 4:
      mergeSort(celebrities);
      return 0;
  
    case 5:
    default:
      quicksort(celebrities);
      return 0;
  }  
}

celebrity & celebrityBuilder(){
 std::string name = strBuilder();
 int desperation = rand() % 10;
 std::string field = strBuilder();
 bool met = rand() % 2;

 celebrity c(name,desperation,field,met);
 return c;
}

std::string & strBuilder(){
  char ch{'a'};
  std::string str;
  for(int i{0}; i < 8; ++i){
    ch = rand() % 62 + 65;
  }
  return str;
}
