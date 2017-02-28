/*
#ifndef INVITEM_H
#define INVITEM_H

#include <iostream>

class InventoryItem {
public:
	InventoryItem();
	InventoryItem(const char *inDesc);
	InventoryItem operator=(const InventoryItem& right);
	void setInfo(const char *inDesc, int inUnits);
	void setUnits(int inUnits);
	int getUnits();
	friend std::ostream& operator<<(std::ostream& stream, InventoryItem item);
};

#endif // !INVITEM_H

InventoryItem InventoryItem::operator=(const InventoryItem& right) {
	units = right.units;
	delete[] description;
	description = new char[strlen(right.description) + 1];
	strcpy(description, right.description);
}

// but what if item1 = item1
InventoryItem InventoryItem::operator=(const InventoryItem& right) {
	if (this != &right) {
		units = right.units;
		delete[] right.description();
		description = new char[strlen(right.description) + 1];
		strcpy(description, right.description);
	}

	return *this;
}



// When passing by value, the description pointer will still be modified
// We need to make a copy constructor
InventoryItem(const InventoryItem& copyMe);

InventoryItem::InventoryItem(const Inventory& copyMe) {
	units = copyMe.units;
	description = new char[strlen(copyMe.description) + 1];
	strcpy(description, copyMe.description);
}

// What if the following were to occur
InventoryItem item3 = item1;
// same thing as Inventory item3(item1);
// the = is not the assignment operator
// it is an initialization and doesnt use the assignment operator but rather the copy constructor
item3.setInfo("ice cream", 962);


// returning by value

// These are the three times the copy constructor is called


// We also need a destructor
*/