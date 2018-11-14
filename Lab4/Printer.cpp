#include "Printer.h"

Printer::Printer(std::string name,
	int price,
	int printingSpeed,
	bool isColorPrinter,
	bool hasWifiConnection) :
	name(name),
	price(price),
	printingSpeed(printingSpeed),
	isColorPrinter(isColorPrinter),
	hasWifiConnection(hasWifiConnection)
{
}

Printer::Printer()
{
}

Printer::~Printer()
{
}

std::string Printer::getName()
{
	return name;
}

int Printer::getPrice()
{
	return price;
}

int Printer::getPrintingSpeed()
{
	return printingSpeed;
}

std::string Printer::toString()
{
	return "Name: " + name + "\n" +
		"Price :" + std::to_string(price) + "\n" +
		"Printing speed : " +std::to_string(printingSpeed) + " sheets/min\n" +
		"Color printer: " + std::to_string(isColorPrinter) + "\n" +
		"Wifi connection : " + std::to_string(hasWifiConnection) + "\n";
}