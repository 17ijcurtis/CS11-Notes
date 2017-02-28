/*
// cant over load
// .
// ::
// .*
// ?:


// namespace myNameSpace {}
// never use using in a header file
// using cs_feetInches::feetInches;


#ifndef INVITEM_H
#define INVITEM_H

#include <iostream>

class InventoryItem {
public:
	InventoryItem();
	InventoryItem(const char *inDesc);
	void setInfo(const char *inDesc, int inUnits);
	void setUnits(int inUnits);
	int getUnits();
	friend std::ostream& operator<<(std::ostream& stream, InventoryItem item);
};

#endif // !INVITEM_H
*/