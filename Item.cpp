#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(){           // 4. Implement Default Constructor Implementation
 
 itemCode = 0;
 unitPrice =0 ;
 discount = 0;
}
Item::Item(int pitemCode, float punitPrice){// 5. Implement Overloaded Constructor Implementation

itemCode= pitemCode;
unitPrice = punitPrice;
discount = 0;
}
Item::~Item(){ // 6. Implement Destructor (display "Destructor Called")
cout << "Destructor Called"<< endl;
}

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
