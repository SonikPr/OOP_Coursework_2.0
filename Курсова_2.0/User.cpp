#include "User.h"

void user::menu()
{

	if (choice == 1)
	{
		this->displayUserInfo();
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
		while (true) {
			system("cls");
			cout << "Which fuel you want to buy?" << endl;
			cout << left << setw(20) << "A95" << setw(5) << "---->" << setw(5) << "1" << endl;
			cout << left << setw(20) << "A98" << setw(5) << "---->" << setw(5) << "2" << endl;
			cout << left << setw(20) << "Cancel " << setw(5) << "---->" << setw(5) << "0" << endl;
			cout << "Choice -->";
			int n;
			cin >> n;
			if (n == 0) {
				break;
			}
			else
				if (n == 1) {
					
					this->buyA95();
				}
				else
					if (n == 2) {
						this->buyA98();
					}
					else
					{
						cout << "Choice -->";
						int n;
						cin >> n;
					}

		}
	}
	if (choice == 3)
	{
		this->buyDiesel();
	}
	if (choice == 4)
	{
		while (true) {
			system("cls");
			cout << "Which food you want to buy?" << endl;
			cout << left << setw(20) << "Snacks" << setw(5) << "---->" << setw(5) << "1" << endl;
			cout << left << setw(20) << "Drink" << setw(5) << "---->" << setw(5) << "2" << endl;
			cout << left << setw(20) << "Cancel " << setw(5) << "---->" << setw(5) << "0" << endl;
			cout << "Choice -->";
			int n;
			cin >> n;
			if (n == 0) {
				break;
			}
			else
				if (n == 1) {

					this->buySnacks();
				}
				else
					if (n == 2) {
						this->buyDrink();
					}
					else
					{
						cout << "Choice -->";
						int n;
						cin >> n;
					}

		}
	}
	if (choice == 5)
	{
		this->drive();
	}
	if (choice == 6)
	{
		this->fix_car();
	}
	if (choice == 7)
	{
		this->eat();
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
	if (choice == 8)
	{
		this->drink();
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
	if (choice == 9)
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
	if (choice == 10)
	{
		this->receiveSalary();
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
	if (choice == 11)
	{
		this->leaveFeedback();
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
	if (choice == 12)
	{
		this->exit = 1;
	}
}

void user::buyA95() {
	int amount;
	cout << "How much gasoline (A95) do you want to buy?" << endl << "Amount --> ";
	cin >> amount;
	int TotalPrice = amount * A95price;
	if (bank >= TotalPrice) {
		A95volume += amount;
		bank = bank - TotalPrice;
		cout << "You have successfully bought " << amount << " liters of A95. Now you have " << A95volume << " liters" << endl;
		cout << "You have " << bank << " $ left." << endl;;
	}
	else
	{
		cout << "You haven`t enough money to do that! The " << amount << " liters of A95 costs " << TotalPrice << "And you only have "<< bank << " $. Get the salary!" << endl;
	}
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

void user::buyDiesel() {
	system("cls");
	int amount;
	cout << "How much Diesel do you want to buy?" << endl << "Amount --> ";
	cin >> amount;
	int TotalPrice = amount * Dieselprice;
	if (bank >= TotalPrice) {
		Dieselvolume += amount;
		bank = bank - TotalPrice;
		cout << "You have successfully bought " << amount << " liters of A98. Now you have " << Dieselvolume << " liters" << endl;
		cout << "You have " << bank << " $ left." << endl;;
	}
	else
	{
		cout << "You haven`t enough money to do that! The " << amount << " liters of A98 costs " << TotalPrice << "And you only have " << bank << " $. Get the salary!" << endl;
	}
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

void user::buyA98() {
	int amount;
	cout << "How much gasoline (A98) do you want to buy?" << endl << "Amount --> ";
	cin >> amount;
	int TotalPrice = amount * A98price;
	if (bank >= TotalPrice) {
		A98volume += amount;
		bank = bank - TotalPrice;
		cout << "You have successfully bought " << amount << " liters of A98. Now you have " << A98volume << " liters" << endl;
		cout << "You have " << bank << " $ left." << endl;;
	}
	else
	{
		cout << "You haven`t enough money to do that! The " << amount << " liters of A98 costs " << TotalPrice << "And you only have " << bank << " $. Get the salary!" << endl;
	}
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

void user::buySnacks() {
	int amount;
	cout << "How much snacks do you want to buy?" << endl << "Amount --> ";
	cin >> amount;
	int TotalPrice = amount * Snacksprice;
	if (bank >= TotalPrice) {
		snacks += amount;
		bank = bank - TotalPrice;
		cout << "You have successfully bought " << amount << " snacks. Thank you! Now you have " << snacks << " " << endl;
		cout << "You have " << bank << " $ left." << endl;;
	}
	else
	{
		cout << "You haven`t enough money to do that! The " << amount << " portions of shacks costs " << TotalPrice << "And you only have " << bank << " $. Get the salary!" << endl;
	}
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

void user::buyDrink() {
	int amount;
	cout << "How much drinks do you want to buy?" << endl << "Amount --> ";
	cin >> amount;
	int TotalPrice = amount * Drinkprice;
	if (bank >= TotalPrice) {
		drinks += amount;
		bank = bank - TotalPrice;
		cout << "You have successfully bought " << amount << " snacks. Thank you! Now you have " << drinks << " " << endl;
		cout << "You have " << bank << " $ left." << endl;;
	}
	else
	{
		cout << "You haven`t enough money to do that! The " << amount << " cups of drink costs " << TotalPrice << "And you only have " << bank << " $. Get the salary!" << endl;
	}
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

void user::displayUserInfo() {
	system("cls");
	cout << "Your info" << endl;

	cout << endl;
	cout << left << setw(30) << "You " << endl;
	cout << left << setw(30) << "Your account" << setw(15) << this->role << endl;
	cout << left << setw(30) << "Your name" << setw(15) << "Need to connect login gere" << endl;
	cout << endl;
	cout << left << setw(30) << "Fuel stats: " << endl;
	cout << left << setw(30) << "A95 volume (What you have)" << setw(15) << A95volume << " liters"<< endl;
	cout << left << setw(30) << "A98 volume (What you have)" << setw(15) << A98volume << " liters"<< endl;
	cout << left << setw(30) << "Diesel volume (What you have)" << setw(15) << Dieselvolume << " liters" << endl;
	cout << endl;
	cout << left << setw(30) << "Food: " << endl;
	cout << left << setw(30) << "Snacks" << setw(15) << snacks << " pieces" << endl;
	cout << left << setw(30) << "Drink" << setw(15) << drinks << " pieces" << endl;
	cout << endl;
	cout << left << setw(30) << "Finance: " << endl;
	cout << left << setw(30) << "Your salary" << setw(15) << salary << " $" << endl;
	cout << left << setw(30) << "Your bank" << setw(15) << bank << " $" << endl;
	cout << endl;
	cout << left << setw(30) << "Your cars: " << endl;
	cout << left << setw(30) << "Car 1 (gasoline engine)" <<  endl;
	cout << left << setw(30) << "Durablity" << setw(15) << car1_dur << "%" << endl;
	cout << left << setw(30) << "Gas consumption" << setw(15) << car1_cons << "L/100km" << endl;
	cout << endl;
	cout << left << setw(30) << "Car 2 (diesel engine)" << endl;
	cout << left << setw(30) << "Durablity" << setw(15) << car2_dur << "%" << endl;
	cout << left << setw(30) << "Diesel consumption" << setw(15) << car2_cons << "L/100km" << endl;

}

void user::receiveSalary() {
	system("cls");
	cout << "Your salary is " << salary << " $" << endl;
	bank += salary;
	cout << "You have successfully received the salary. Now your bank is " << bank << " $" << endl;
}

int FuelLoss(int distance, int consumption) {
	return (consumption * distance) / 100;
}

int mileageLeft(int liters, int consumption) {
	return ((liters * 100)/consumption);

}

void user::drive() {
	while (true) {
		bool success = false;
		system("cls");
		cout << "Which car do you want to use?" << endl;
		cout << left << setw(20) << "Car 1 (Gasoline)" << setw(5) << "---->" << setw(5) << "1" << endl;
		cout << left << setw(20) << "Car2 (Diesel)" << setw(5) << "---->" << setw(5) << "2" << endl;
		cout << left << setw(20) << "Cancel " << setw(5) << "---->" << setw(5) << "0" << endl;
		cout << "Choice -->";
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		else
			if (n == 1) {
				system("cls");
				cout << "Car 1 status (Gasoline) " << car1_dur << " % of durablity left" << endl;
				cout << "You have " << A95volume << " liters of A95 and " << A98volume << " liters of A98 left" << endl;
				cout << "Your gasoline is enough for about " << mileageLeft(A95volume, car1_cons) + mileageLeft(A98volume, car1_cons) << " km " << endl;
				if (car1_dur <= 10 && car1_dur > 0) {
					cout << endl;
					cout << endl;
					cout << "Warning! Your car has less than 10% of durablity. Maybe it`s it`s last ride" << endl;
					int distance;
					cout << "How much KM do you want to travel?" << "Choice --> ";
					cin >> distance;
					if (A98volume >= FuelLoss(distance, car1_cons)) {
						A98volume = A98volume - FuelLoss(distance, car1_cons);
						car1_dur = (car1_dur - (distance / 10));
						success = true;
					}
					else
						if (A95volume >= FuelLoss(distance, car1_cons)) {
							A95volume = A95volume - FuelLoss(distance, car1_cons);
							car1_dur = (car1_dur - (distance / 10));
							success = true;
						}
						else
							if (A95volume + A98volume >= FuelLoss(distance, car1_cons)) {
								if (A95volume > A98volume) {
									A95volume = A95volume - A98volume;
									A98volume = 0;
									car1_dur = (car1_dur - (distance / 10));
									success = true;
								}
								else
								{
									A98volume = A98volume - A95volume;
									A95volume = 0;
									car1_dur = (car1_dur - (distance / 10));
									success = true;
								}
							}
							else
							{
								cout << "You have neither enough A98 nor enough A95 to drive. Buy some!";
								system("pause");
								success = false;
							}
					if (success == true) {
						cout << endl;
						cout << "You have covered " << distance << " kilometers. Your gasoline car has " << car1_dur << "% durablity left" << endl;
						cout << "You have " << A95volume << " liters of A95 and " << A98volume << " liters of A98 left" << endl;
						cout << "Your gasoline is enough for about " << mileageLeft(A95volume, car1_cons) + mileageLeft(A98volume, car1_cons) << " km " << endl;
						system("pause");
					}
					
				}
				else
					if (car1_dur > 10 ) {
						int distance;
						cout << "How much KM do you want to travel?" << "Choice --> ";
						cin >> distance;
						if (A98volume >= FuelLoss(distance, car1_cons)) {
							A98volume = A98volume - FuelLoss(distance, car1_cons);
							car1_dur = (car1_dur - (distance / 10));
							success = true;
						}
						else
							if (A95volume >= FuelLoss(distance, car1_cons)) {
								A95volume = A95volume - FuelLoss(distance, car1_cons);
								car1_dur = (car1_dur - (distance / 10));
								success = true;
							}
							else
								if (A95volume + A98volume >= FuelLoss(distance, car1_cons)) {
									if (A95volume > A98volume) {
										A95volume = A95volume - A98volume;
										A98volume = 0;
										car1_dur = (car1_dur - (distance / 10));
										success = true;
									}
									else
									{
										A98volume = A98volume - A95volume;
										A95volume = 0;
										car1_dur = (car1_dur - (distance / 10));
										success = true;
									}
								}
							else
							{
								cout << "You have neither enough A98 nor enough A95 to drive. Buy some!";
								system("pause");
								success = false;
							}
						if (success == true) {
							cout << endl;
							cout << "You have covered " << distance << " kilometers. Your gasoline car has " << car1_dur << "% durablity left" << endl;
							cout << "You have " << A95volume << " liters of A95 and " << A98volume << " liters of A98 left" << endl;
							cout << "Your gasoline is enough for about " << mileageLeft(A95volume, car1_cons) + mileageLeft(A98volume, car1_cons) << " km " << endl;
							system("pause");
						}

					}
				if (car1_dur <= 0)
				{
					cout << "Warning! Your car has less than 1% of durablity. It can`t travel. Visit service immediately!" << endl;
					system("pause");
				}

			}
			else
				if (n == 2) {
					system("cls");
					cout << "Car 2 status (Diesel) " << car2_dur << " % of durablity left" << endl;
					cout << "You have " << Dieselvolume << " liters of diesel left" << endl;
					cout << "Your diesel is enough for about " << mileageLeft(Dieselvolume, car2_cons) << " km " << endl;
					if (car2_dur <= 10 && car2_dur > 0) {
						cout << endl;
						cout << endl;
						cout << "Warning! Your car has less than 10% of durablity. Maybe, It`s it`s last ride!" << endl;
						int distance;
						cout << "How much KM do you want to travel?" << "Choice --> ";
						cin >> distance;
						if (Dieselvolume >= FuelLoss(distance, car2_cons)) {
							Dieselvolume = Dieselvolume - FuelLoss(distance, car2_cons);
							car2_dur = (car2_dur - (distance / 20));
							success = true;
						}
						else
						{
							cout << "You haven`t enough Diesel to drive. Buy some!";
							system("pause");
							success = false;
						}
						if (success == true) {
							cout << endl;
							cout << "You have covered " << distance << " kilometers. Your diesel car has " << car2_dur << "% durablity left" << endl;
							cout << "You have " << Dieselvolume << " liters of diesel left" << endl;
							cout << "Your dieles is enough for about " << mileageLeft(Dieselvolume, car2_cons) << " km " << endl;
							system("pause");
						}
					}
					else
						if (car2_dur > 10) {
							int distance;
							cout << "How much KM do you want to travel?" << "Choice --> ";
							cin >> distance;
							if (Dieselvolume >= FuelLoss(distance, car2_cons)) {
								Dieselvolume = Dieselvolume - FuelLoss(distance, car2_cons);
								car2_dur = (car2_dur - (distance / 20));
								success = true;
							}
								else
								{
									cout << "You haven`t enough Diesel to drive. Buy some!";
									system("pause");
									success = false;
								}
							if (success == true) {
								cout << endl;
								cout << "You have covered " << distance << " kilometers. Your diesel car has " << car2_dur << "% durablity left" << endl;
								cout << "You have " << Dieselvolume << " liters of diesel left" << endl;
								cout << "Your dieles is enough for about " << mileageLeft(Dieselvolume, car2_cons) << " km " << endl;
								system("pause");
							}

						}
						else
						if(car2_dur <= 0)
						{
							cout << "Your car can`t be driven now, because it has 0% of durablity. Service it now!" << endl;
							system("pause");
						}
				}
				else
				{
					cout << "Choice -->";
					int n;
					cin >> n;
				}

	}
}

void user::eat() {
	system("cls");
	cout << "Looks like you`re hungry! You can eat your favourite snacks" << endl;
	cout << "Quantity --> ";
	int quantity;
	cin >> quantity;
	if (snacks >= quantity) {
		snacks = snacks - quantity;
		cout << "You ate " << quantity << " snacks. Your have left " << snacks << " left" << endl;
	}
	else
	{
		cout << "You haven`t enough snacks to eat. You wanted to eat " << quantity << " but you have only" << snacks << "Buy some!" << endl;
	}
}

void user::drink() {
	system("cls");
	cout << "Looks like you`re thirsty! You can drink your favourite drinks" << endl;
	cout << "Quantity --> ";
	int quantity;
	cin >> quantity;
	if (drinks >= quantity) {
		drinks = drinks - quantity;
		cout << "You ate " << quantity << " snacks. Your have left " << drinks << " left" << endl;
	}
	else
	{
		cout << "You haven`t enough snacks to eat. You wanted to eat " << quantity << " but you have only" << drinks << "Buy some!" << endl;
	}
}

void user::fix_car() {
	while (true) {
		system("cls");
		cout << "Which car do you want to fix?" << endl;
		cout << left << setw(20) << "Car 1 (Gasoline)" << setw(5) << "---->" << setw(5) << "1" << endl;
		cout << left << setw(20) << "Car2 (Diesel)" << setw(5) << "---->" << setw(5) << "2" << endl;
		cout << left << setw(20) << "Cancel " << setw(5) << "---->" << setw(5) << "0" << endl;
		cout << "Choice -->";
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		else
			if (n == 1) {
				if (bank >= STOprice) {
					cout << endl;
					cout << "Car 1 status (Gasoline) " << car1_dur << " % of durablity left" << endl;
					for (int i = 0; i < 10; i++) {
						cout << "..." << endl;
					}
					bank = bank - STOprice;
					car1_dur = 100;
					cout << "FIXED!" << endl;
					cout << "Your gasoline car has " << car1_dur << "% durablity left" << endl;
					system("pause");
				}
				else
				{
					cout << "You haven`t enough money to do that! The STO price is" << STOprice << " $ And you only have " << bank << " $. Get the salary!" << endl;
					system("pause");
				}
			}
			else
				if (n == 2) {
					if (bank >= STOprice) {
						cout << endl;
						cout << "Car 2 status (Diesel) " << car2_dur << " % of durablity left" << endl;
						for (int i = 0; i < 10; i++) {
							cout << "..." << endl;
						}
						bank = bank - STOprice;
						car2_dur = 100;
						cout << "FIXED!" << endl;
						cout << "Your diesel car has " << car2_dur << "% durablity left" << endl;
						system("pause");
					}
					else
					{
						cout << "You haven`t enough money to do that! The STO price is" << STOprice << " $ And you only have " << bank << " $. Get the salary!" << endl;
						system("pause");
					}
				}
				else
				{
					cout << "Choice -->";
					int n;
					cin >> n;
				}

	}
}


void user::getMenu()
{
	system("cls");
	drawLogo();
	cout << endl << endl << "SonikFuel online shop" << endl;
	cout << "Hello, User!" << endl;
	cout << "menu" << endl;
	cout << " 1. About yourself" << setw(5) << endl;
	cout << " 2. Buy gasoline" << endl;
	cout << " 3. Buy diesel" << endl;
	cout << " 4. Buy food" << endl;
	cout << " 5. Drive car" << endl;
	cout << " 6. Fix car" << endl ;
	cout << " 7. Eat" << endl ;
	cout << " 8. Drink" << endl;
	cout << " 9. View prices" << endl;
	cout << " 10. Get salary" << endl;
	cout << " 11. Leave feedback" << endl;
	cout << " 12. Log out" << endl;
}