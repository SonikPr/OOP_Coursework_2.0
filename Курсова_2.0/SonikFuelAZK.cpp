#include "SonikFuelAZK.h"

using namespace std;
int GasStation::getExit()
{
	return this->exit;
}

void GasStation::setChoice(int choice)
{
	this->choice = choice;
}

void GasStation::getPrices()
{
	system("cls");
	cout << endl;
	cout << left << setw(15) << "Gasoline: " << endl;
	cout << left << setw(15) << "A95" << setw(15) << A95price << endl;
	cout << left << setw(15) << "A98" << setw(15) << A98price << endl;
	cout << endl;
	cout << left << setw(15) << "Diesel: " << endl;
	cout << left << setw(15) << "Diesel price" << setw(15) << Dieselprice << endl;
	cout << endl;
	cout << left << setw(15) << "Cafe: " << endl;
	cout << left << setw(15) << "Snacks" << setw(15) << Snacksprice << endl;
	cout << left << setw(15) << "Drink" << setw(15) << Drinkprice << endl;
	cout << endl;
	cout << left << setw(15) << "Technical support: " << endl;
	cout << left << setw(15) << "STO" << setw(15) << STOprice << endl;
}


void GasStation::leaveFeedback()
{
	system("cls");
	ofstream fsout;
	string line4;
	string path = "Feedbacks.txt";
	fsout.open(path, ios_base::app);
	cout << "-------------------------- Write the feedback --------------------------" << endl;
	getline(cin, line4);
	getline(cin, line4);
	if (fsout.is_open())
	{
		fsout << line4 << endl;
	}
}


void GasStation::displayProperties() {
	cout << left << setw(15) << "Property:" << setw(15) << "Value" << endl;
	cout << left << setw(15) << "A95 price" << setw(15) << A95price << endl;
	cout << left << setw(15) << "A98 price" << setw(15) << A98price << endl;
	cout << left << setw(15) << "Diesel price" << setw(15) << Dieselprice << endl;
	cout << left << setw(15) << "Snacks price" << setw(15) << Snacksprice << endl;
	cout << left << setw(15) << "Drink price" << setw(15) << Drinkprice << endl;
	cout << left << setw(15) << "STO price" << setw(15) << STOprice << endl;

}

void GasStation::drawLogo() {
	system("cls");
	cout << " ####    ####   ##  ##  ######  ##  ##		######  ##  ##  #####   ##" << endl;
	cout << "##      ##  ##  ### ##    ##    ## ##		##      ##  ##  ##      ##" << endl;
	cout << " ####   ##  ##  ## ###    ##    ####		####    ##  ##  ####    ##" << endl;
	cout << "    ##  ##  ##  ##  ##    ##    ## ##		##      ##  ##  ##      ##" << endl;
	cout << " ####    ####   ##  ##  ######  ##  ##		##       ####   #####   ######" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}