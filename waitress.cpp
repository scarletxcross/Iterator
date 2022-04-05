#include "waitress.h"

Waitress::Waitress(PancakeHouseMenu *pancakeHouseMenu, DinerMenu, *dinerMenu) {
	this->pancakeHouseMenu = pancakeHouseMenu;
	this->dinerMenu = dinerMenu;
}

void Waitress::printMenu() {
	Iterator *dinerIterator = dinerMenu->createIterator();
	Iterator *pancakeIterator = pancakeHouseMenu->createIterator();
	
	cout<< "MENU\n----\nBREAKFAST" << endl;
	printMenu(pancakeIterator);
	cout << "\nLUNCH" << endl;
	printMenu(dinerIterator);
}

void Waitress:printMenu(Iterator *iterator) {
	while (iterator->hasNext()) {
		MenuItem *menuItem = (MenuItem*)iterator->next();
		cout << menuItem->getName() << ", ";
		cout << menuItem->getPrice() << " -- ";
		cout << menuItem->getDescription() << endl;
	}
}	