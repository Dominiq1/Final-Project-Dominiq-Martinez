#include <iostream>
#include "Library.h"
#include <fstream>
#include <iomanip>
using namespace std; 

//Project Description: This project is intended to work as a backend manager for an ecommerce platform. I have implemented functions that run a variety of tests on an inventory databse. 
int main() {
  int length = 100; 
  Inventory items[105];
  build(items, length);
  print(items, length);

  //-------DONE---------

  //This function takes a string as input data for a string item in the inventory struct list selected for location identification. (Finds an items location)

  //Whereis(items, length);


  //-------DONE-------


  //This function accepts a 1)string and a 2)float as parameter for 1)item name and 2)price change. It then returns an updated list with new price changes. 

  //setPrice(items, length);


  //---------Done-----------

  //This functions adds a new struct item to the inventory list.
  newItem(items, length);


 //-----DONE--------


  //This function returns a descending  ordered list of items by price value. 
  //orderedMaxToMin(items,length);




  //--------Done-----------



//removes an item for the invetntory struct list. 
//remove(items, length);


return 0;
}