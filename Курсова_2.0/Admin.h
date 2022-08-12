#pragma once
#include "SonikFuelAZK.h"
class admin : public GasStation
{
private:
	const int priceA95 = 29;
	const int priceA98 = 32;
	const int priceDiesel = 26;
	const int priceSnacks = 49;
	const int priceDrink = 14;
	const int priceSTO = 526;
public:
	admin(string role) :GasStation(role) { };

	virtual void menu() override;
	virtual void getMenu() override;
	void resetPrices();
	void setPrices();
	void readFeedback();
};

