#include "Admin.h"

void admin::menu()
{
	if (choice == 1)
	{
		this->getPrices();
		while (true) {
			cout << endl;
			cout << "0 ---> return back" << endl;
			int e;
			cin >> e;
			if (e == 0) {
				break;
			}
		}
	}
	if (choice == 2)
	{
		this->setPrices();
		while (true) {
			cout << endl;
			cout << "0 ---> return back" << endl;
			int e;
			cin >> e;
			if (e == 0) {
				break;
			}
		}
	}
	if (choice == 3)
	{
		this->resetPrices();
		while (true) {
			cout << endl;
			cout << "0 ---> return back" << endl;
			int e;
			cin >> e;
			if (e == 0) {
				break;
			}
		}
	}
	if (choice == 4)
	{
		this->readFeedback();
		while (true) {
			cout << endl;
			cout << "0 ---> return back" << endl;
			int e;
			cin >> e;
			if (e == 0) {
				break;
			}
		}
	}
	if (choice == 5)
	{
		this->exit = 1;
	}

}

void admin::getMenu()
{
	drawLogo();
	cout << endl << endl << "Hello, administrator!" << endl;
	cout << " 1. Check prices" << endl;
	cout << " 2. Set new prices" << endl;
	cout << " 3. Reset prices" << endl;
	cout << " 4. Read feedback" << endl;
	cout << " 5. Log out" << endl;
}

void admin::setPrices()
{
	while (true) {
		system("cls");
		cout << "Which price do you want to change?" << endl;
		cout << left << setw(20) << "Change A95 price" << setw(5) << "---->" << setw(5) << "1" << endl;
		cout << left << setw(20) << "Change A98 price " << setw(5) << "---->" << setw(5) << "2" << endl;
		cout << left << setw(20) << "Change Diesel price " << setw(5) << "---->" << setw(5) << "3" << endl;
		cout << left << setw(20) << "Change Snacks price " << setw(5) << "---->" << setw(5) << "4" << endl;
		cout << left << setw(20) << "Change Drink price " << setw(5) << "---->" << setw(5) << "5" << endl;
		cout << left << setw(20) << "Change STO price " << setw(5) << "---->" << setw(5) << "6" << endl;
		cout << left << setw(20) << "Cancel " << setw(5) << "---->" << setw(5) << "0" << endl;
		cout << "Choice -->";
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		else
			if (n == 1) {
				cout << "Old A95 price is: " << A95price << endl;
				int new_pr = 0;
				cout << "Enter new price: ";
				cin >> new_pr;
				A95price = new_pr;
			}
			else
				if (n == 2) {
					cout << "Old A98 price is: " << A98price << endl;
					int new_pr = 0;
					cout << "Enter new price: ";
					cin >> new_pr;
					A98price = new_pr;
				}
				else
					if (n == 3) {
						cout << "Old Diesel price is: " << Dieselprice << endl;
						int new_pr = 0;
						cout << "Enter new price: ";
						cin >> new_pr;
						Dieselprice = new_pr;
					}
					else
						if (n == 4) {
							cout << "Old Snacks price is: " << Snacksprice << endl;
							int new_pr = 0;
							cout << "Enter new price: ";
							cin >> new_pr;
							Snacksprice = new_pr;
						}
						else
							if (n == 5) {
								cout << "Old Drink price is: " << Drinkprice << endl;
								int new_pr = 0;
								cout << "Enter new price: ";
								cin >> new_pr;
								A95price = new_pr;
							}
							else
								if (n == 6) {
									cout << "Old STO price is: " << STOprice << endl;
									int new_pr = 0;
									cout << "Enter new price: ";
									cin >> new_pr;
									STOprice = new_pr;
								}
								else
								{
									cout << "Choice -->";
									int n;
									cin >> n;
								}

	}
}

void admin::resetPrices() {
	system("cls");
	A95price = priceA95;
	A98price = priceA98;
	Dieselprice = priceDiesel;
	Snacksprice = priceSnacks;
	Drinkprice = priceDrink;
	STOprice = priceSTO;
	cout << "All prices have been resetted!" << endl;
	cout << endl << "Press any key to display new values" << endl;
	system("pause");
	cout << endl << "Press any key to display new values" << endl;
	this->getPrices();
	system("pause");
}

void admin::readFeedback()
{
	system("cls");
	ifstream fsin;
	string line2;
	string path = "Feedbacks.txt";
	fsin.open(path);
	cout << "-------------------------- User feedback --------------------------" << endl;
	while (getline(fsin, line2))
	{
		cout << line2 << endl;
	}
	fsin.close();
}
