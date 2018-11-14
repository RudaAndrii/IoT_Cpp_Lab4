#include <iostream>
#include  "Printer.h"

using namespace std;

void simulateInstanceCreatingAndPrintingToConsole();

int main() {
	simulateInstanceCreatingAndPrintingToConsole();

	return 0;
}

void simulateInstanceCreatingAndPrintingToConsole() {
	Printer printer1("Name 1", 150, 224, true, false);
	Printer printer2("Name 2", 160, 224, true, false);
	Printer printer3("Name 3", 180, 224, true, true);

	cout << printer1.toString() << endl << "------" << endl << endl;
	cout << printer2.toString() << endl << "------" << endl << endl;
	cout << printer3.toString() << endl << "------" << endl << endl;
}