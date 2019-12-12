#include <fstream>
using namespace std;

struct Inventory{
  string ItemType; 
  string location; 
  string itemName;
  string sizeOfItem;
  string pit_to_pit;
  string length;
  float priceOfItem;
};

//item_type,location  item name, size, pit to pit, length, cost


//done

void build(Inventory list[], int& length);
void print(Inventory list[], int& length);
void Whereis(Inventory list[], int& length );
void orderedMaxToMin(Inventory list[], int length);
void setPrice(Inventory list[], int length);
void newItem(Inventory list[], int& length);
void remove(Inventory list[], int& length);

