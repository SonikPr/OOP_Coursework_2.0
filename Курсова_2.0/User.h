#pragma once
#include "SonikFuelAZK.h"
#include <iomanip>
class user :public GasStation
{
protected:
	int A95volume = 0;
	int A98volume = 0;
	int Dieselvolume = 0;
	int snacks = 0;
	int drinks = 0;
	int car1_dur = 100;
	int car2_dur = 100;
	const int salary = 6000;
	int bank = 8000;
	const int car1_cons = 7;
	const int car2_cons = 8;
public:
	user(string role) :GasStation(role) { };
	virtual void menu() override;
	virtual void getMenu() override;
	void loadUserData();
	void saveUserData();
	void displayUserInfo();
	void buyA95();
	void buyA98();
	void buyDiesel();
	void buySnacks();
	void buyDrink();
	void receiveSalary();
	void drive();
	void eat();
	void drink();
	void fix_car();
};

