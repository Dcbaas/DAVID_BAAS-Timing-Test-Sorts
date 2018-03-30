#include "sorts.h"
#include "celebrity.h"
#include <vector>

celebrity celebrityBuilder();

int main(int argc, char** argv){
  int sortType{argv[0]};
  int elements{argv[1]};

 std::vector<celebrity> celebrities;

  for(int i{0}; i < elements;++i)
    celebrities.push_back(celebrityBuilder());

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
