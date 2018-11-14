#pragma once
#include <string>

class Printer
{
public:
	Printer(std::string, int, int, bool, bool);
	Printer();
	~Printer();
	
	std::string Manufacturer;
	int dpiResolution;

	std::string getName();
	int getPrice();
	int getPrintingSpeed();
	std::string toString();

private:
	std::string name;
	int price;
	int printingSpeed;

protected:
	bool isColorPrinter;
	bool hasWifiConnection;
};

