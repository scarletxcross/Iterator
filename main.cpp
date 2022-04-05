#include <QCoreApplication>

#include "dinermenu.h"
#include "pancakehousemenu.h"
#include "waitress.h"



int main(int argc, char *argv[]) {
	QCoreApplication a(argc, argv);
	
	DinerMenu *dinerMenu = new DinerMenu();
	PancakeHouseMenu *pancakeHouseMenu = new PancakeHouseMenu();
	
	Waitress *waitress = new Waitress(pancakeHouseMenu, dinerMenu);
	waitress->printMenu();
	
	return a.exec();
}	