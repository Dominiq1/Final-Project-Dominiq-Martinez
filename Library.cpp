#include "Library.h"
#include <fstream>
#include<iomanip>
#include "iostream"

//prints inventory
void build(Inventory list[], int& length){ 
  ifstream inventoryList; 
  inventoryList.open("inventory.txt");
  for (int i = 0; i< length; i++){
    getline(inventoryList, list[i].ItemType, ',');
    getline(inventoryList,list[i].location,',');
    getline(inventoryList, list[i].itemName, ',');
    getline(inventoryList, list[i].sizeOfItem,',');
    getline(inventoryList, list[i].pit_to_pit,',');
    getline(inventoryList, list[i].length, ',');
    inventoryList>>list[i].priceOfItem;
    inventoryList.ignore();
  }
}





//-----------------------------

//Prints the list  
void print(Inventory list[], int& length){
  for(int i = 0; i<length; i++){
    cout<<left<<setw(10)<<list[i].ItemType;
    cout<<left<<setw(20)<<list[i].location;
    cout<<left<<setw(45)<<list[i].itemName;
    cout<<left<<setw(10)<<list[i].sizeOfItem;
    cout<<left<<setw(10)<<list[i].pit_to_pit;
    cout<<left<<setw(10)<<list[i].length;
    cout<<left<<setw(10)<<list[i].priceOfItem<<endl;
  }
}


//asks for location of item
//done
void Whereis(Inventory list[], int& length ){
  string item_requested; 
  cout<<"What item would you like to find?: ";
  getline(cin,item_requested);
  cout<<item_requested<<endl; 
  for(int i = 0; i<length; i++){
    if (list[i].itemName == item_requested){
      cout<<list[i].itemName<<"is located in: "<<list[i].location<<endl;;
      break;
    }
  }
}



//--------------------------------------



//lists items in order or price from least to most expensive
//done
void orderedMaxToMin(Inventory list[], int length){
  Inventory temp;
  for (int j = 0; j<length; j++)
  for(int i = 0; i<length; i++){
    if(list[i].priceOfItem< list[i+1].priceOfItem){
      temp = list[i];
      list[i]=list[i+1];
      list[i+1] = temp;
    }
  }
  print(list, length);

 }


//---------------------------------



//Adds item to the list
//notdone
void newItem(Inventory list[], int& length){
  
  cout<<"What type of item would you like to add?: ";
  getline(cin,list[length].ItemType );
  cout<<"Where will this item be stored?: ";
  getline(cin,list[length].location);
  cout<<"What is the name of the item to be stored?: ";
  getline(cin, list[length].itemName);
  cout<<"What size is this item?: ";
  cin>>list[length].sizeOfItem;
  cout<<"What is the size pit to pit?: ";
  cin>>list[length].pit_to_pit;
  cout<<"What is the length of your item?: ";
  cin>>list[length].length;
  cout<<"What is the price of your item?: ";
  cin>>list[length].priceOfItem;
  length = length + 1;
  print(list, length);

}
//Removes item 

void remove(Inventory list[], int& length){
  string itemToBeRemoved; 
  cout<<"What is the name of the item you are trying to remove?:";
  getline(cin, itemToBeRemoved);

  for(int i = 0; i<length; i++){
    if(itemToBeRemoved == list[i].itemName){
      for(int j = i; j<length; j++){
        list[j]= list[j+1];
      }
    }
  }
  print(list,length);




}


//--------------------



//sets a price to an item
void setPrice(Inventory list[], int length){
  string selected_item; 
  float set_price; 
  cout<<"What item would you like to set a price for?: ";
  getline(cin, selected_item);
  cout<<"How much would you like to charge for this item?: ";
  cin>>set_price; 
  int i = length;
  while(i>-1){
    if(selected_item == list[i].itemName){
      list[i].priceOfItem = set_price; 
       print(list, length);
    }
    i--;
  }
}  









  