// Курсова_2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "SonikFuelAZK.h"
#include "User.h"
#include "Admin.h"


using namespace std;

int CheckValid(string login, string pass);
void interfaceDraw(int mode);

int main()
{	
	setlocale(LC_ALL, "Russian");
	int mainMENU = 0;
	while (true) {
		switch (mainMENU)
		{
		case 0:
			interfaceDraw(0);
			cin >> mainMENU;
			break;
		case 1:
			cin >> mainMENU;
			break;
		}
	
		system("cls");
		bool logined = false;
		string login, pass;
		int choice = 0;
		cout << "login:" << endl;
		cin >> login;
		cout << "password:" << endl;
		cin >> pass;
		choice = CheckValid(login, pass);
		if (CheckValid(login, pass) == 0)
		{
			cout << "Your login isn`t recognised or password isn`t correct" << endl;
			break;
		}
		else
		{
			logined = true;
		}

		while (logined)
		{
			if (choice == 1)
			{
				int menuChoice = 0;
				admin admin("Admin");
				system("cls");
				cout << "Admin login successful!" << endl;
				cout << "System controls:" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				admin.getMenu();
				while (true)
				{
					cin >> menuChoice;
					if (menuChoice <= 5 && menuChoice > 0)
					{
						admin.setChoice(menuChoice);
						admin.menu();
						if (admin.getExit() == 1)
						{
							logined = false;
							break;
						}
						admin.getMenu();
					}
					else
					{
						cout << "Function error. Reboot and try again";
					}
				}
			}


			if (choice == 2)
			{
				int menuChoice = 0;
				user coustumer("Generic user");
				system("cls");
				cout << "User login successful!" << endl;
				cout << "System controls:" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				coustumer.getMenu();
				while (true)
				{
					cin >> menuChoice;
					if (menuChoice <= 12 && menuChoice > 0)
					{
						coustumer.setChoice(menuChoice);
						coustumer.menu();
						if (coustumer.getExit() == 1)
						{
							logined = false;
							break;
						}
						coustumer.getMenu();
					}
					else
					{
						cout << "Wrong menu number!";
					}
				}
			}
		}
	}
	return 0;
}


int CheckValid(string login, string pass)
{
	string path = "SystemPasswords.txt"; //Шлях до файлу з логінами і паролями
	char PassBuffer[50];
	string RoughLoginPassword;
	int size;

	ifstream fin;	//Відкрив файл
	fin.open(path);		//Перевірка чи файл відкривя
	if (!fin.is_open())
	{
		cout << "Password file is missing or corrupted!" << endl;
		return 0;
	}
	while (fin.is_open())
	{
		fin.getline(PassBuffer, 50);
		RoughLoginPassword = PassBuffer;
		if (fin.eof())
		{
			fin.close();
			return 0;
		}
		if ((size = RoughLoginPassword.find(login)) != -1) //Шукаю чи у файлі є введений логін
		{
			while (true)
			{
				if ((size = RoughLoginPassword.find(pass)) != -1) //Шукаю чи у файлі є введений пароль
				{
					return 2;
					fin.close();
				}
				else
				{
					cout << "Password is incorrect" << endl;
					return 0;
				}
			}

		}
	}

}

void interfaceDraw(int menuTab)
{
	switch (menuTab)
	{
	case 0:
		system("cls");
		cout << "Sonik Fuel costumer system" << endl;
		cout << "Main menu" << endl;
		cout << endl;
		cout << endl;
		cout << left << setw(40) << "Action: " << setw(20) << "Button:" << endl;
		cout << left << setw(40) << "1. Log in" << setw(20) << "---------> 1" << endl;
		cout << left << setw(40) << "2. Missing files troubleshoot" << setw(20) << "---------> 2" << endl;
		cout << left << setw(40) << "3. Info" << setw(20) << "---------> 4" << endl;
		cout << left << setw(40) << "5. System shutdown" << setw(20) << "---------> 5" << endl;
		break;
	case 4:
		system("cls");
		cout << "Sonik Fuel costumer system" << endl;
		cout << "Help and FAQ" << endl;
		cout << endl;
		cout << endl;
		cout << "1. What is this?" << endl;
		cout << "This is an informational system used to control abstract petrol station named Sonik Fuel. All of this was created as coursework by KI-110 student named Brodskyi B.A \r\n also known as SonikPr. This system represents real info-control system of real petrol station which allows you to interact with different properties and objects.";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "2. How to use it" << endl;
		cout << "Login into your account with User or Admin password. Then you can control every parameter. Hint: Database loading occurs everytime you login, and saving ocurs every time you log out.";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "3. How to control it?" << endl;
		cout << "Here is the table with some controls which are widely spread through this system. The usage is simple - put the key into terminal and press Enter" << endl;
		cout << left << setw(20) << "Key: " << setw(20) << "Performed action: " << endl;
		cout << left << setw(20) << "0" << setw(20) << "Return to previous menu (Go back)" << endl;
		cout << left << setw(20) << "Enter" << setw(20) << "Confirm choice" << endl;
		cout << left << setw(20) << "1" << setw(20) << "First menu item" << endl;
		cout << left << setw(20) << "2" << setw(20) << "Second menu item" << endl;
		cout << left << setw(20) << "3" << setw(20) << "Third menu item" << endl;
		cout << left << setw(20) << "4" << setw(20) << "4th menu item" << endl;
		cout << left << setw(20) << "5" << setw(20) << "5th menu item" << endl;
		cout << left << setw(20) << "6" << setw(20) << "6th menu item" << endl;
		cout << left << setw(20) << "7" << setw(20) << "8th menu item" << endl;
		cout << left << setw(20) << "8" << setw(20) << "8th menu item" << endl;
		cout << left << setw(20) << "9" << setw(20) << "9th menu item" << endl;
		cout << left << setw(20) << "9" << setw(20) << "9th menu item" << endl;
		cout << left << setw(20) << "<--- (Backspace)" << setw(20) << "Choice correction (Before pressing Enter)" << endl;
		break;
	default:
		break;
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
