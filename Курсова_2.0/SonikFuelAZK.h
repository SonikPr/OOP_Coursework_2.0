#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include<iomanip>
#include <cstdlib>
using namespace std;
class GasStation
{
protected:
	string role;
	int choice;
	int exit = 0;
	int A95price = 29;
	int A98price = 32;
	int Dieselprice = 26;
	int Snacksprice = 49;
	int Drinkprice = 14;
	int STOprice = 526;
public:
	GasStation(string role) { this->role = role; };
	virtual void menu() = 0;
	virtual void getMenu() = 0;
	void getPrices();
	void loadData();
	void saveData();
	void leaveFeedback();
	void displayProperties();
	void drawLogo();


	int getExit();
	void setChoice(int choice);
};

