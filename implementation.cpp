#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include<iomanip>
#include"client.h"
using namespace std;


client::client()
	{
		name = "abc";
		NIC = "*****-*******-*";
		f_name = "fgh";
		phn_no = "01234";
		address = "xyz";
		income = 3210;
		a = 0;
		prem = 0;
		prem1 = 0;
		prem2 = 0;
		price = 0;
		cond = 0;
		yr = 1;
		I = 0;
		agr = 0;
	}

void client::get_data()
	{

		
	cout << "\nEnter your name: ";
	getline(cin, name);


	cout << "\nEnter your age: ";
	cin >> age;

	cout << "\nEnter your CNIC (*****-*******-*): ";
	cin.ignore();
	getline(cin, NIC);


	cout << "\nEnter your father name: ";
	getline(cin, f_name);


	cout << "\nEnter your cell number: ";
	getline(cin, phn_no);


	cout << "\nEnter your address: ";
	getline(cin, address);


	cout << "\nEnter your monthly income (Rs.): ";
	cin >> income;
	choice(age);

	}
void client::choice(int x)
	{
		if (age >= 18)
		{

		start1:

			int x;
			cout << "\nEnter 1 for four wheeler vehicle." << endl << "\nEnter 2 for two wheeler vehicle." << endl;
			cin >> x;

			if (x == 1)
			{
				clac_premium1();
			}
			else if (x == 2)
			{
				clac_premium2();
			}
			else
			{
				cout << "Invalid Input...." << endl;
				goto start1;
			}
		}
		else
		{
			cout << "You are illegible for granting insurance\nThanks." << endl;
		}
		system("cls");
	}

void client::clac_premium1()
	{

		system("cls");
		string A[] = { "Honda", "Toyota", "Suzuki", "Daihtsu", "Nissan", "Kia", "Hino" };

		for (int i = 0; i<7; i++)
		{

			cout << i + 1 << ". " << A[i] << endl;

		}

	start2:

		cout << "\nChoose your car brand.\nEnter (1-7) :";
		cin >> a;

		if (a<1 || a>7)
		{
			cout << "\nInvalid input...." << endl;
			goto start2;
		}

	start3:
		cout << "\nChoose condition of your car.\nEnter 1 for (new) and 2 for (used): ";
		cin >> cond;

		if (cond<1 || cond>2)
		{
			cout << "\nInvalid input...." << endl;
			goto start3;
		}

		cout << "\nEnter price of your car: ";
		cin >> price;

		switch (a)
		{
		case 1:
			if (cond == 1)
			{
				prem = (price * 6) / 100;
			}
			else if (cond == 2)
			{
				prem = (price * 3) / 100;
			}
			break;

		case 2:

			if (cond == 1)
			{
				prem = (price * 7) / 100;
			}
			else if (cond == 2)
			{
				prem = (price*3.5) / 100;
			}
			break;

		case 3:

			if (cond == 1)
			{
				prem = (price * 6) / 100;
			}
			else if (cond == 2)
			{
				prem = (price * 3) / 100;
			}
			break;

		case 4:

			if (cond == 1)
			{
				prem = (price * 4) / 100;
			}
			else if (cond == 2)
			{
				prem = (price * 3) / 100;
			}
			break;


		case 5:

			if (cond == 1)
			{
				prem = (price*6.5) / 100;
			}
			else if (cond == 2)
			{
				prem = (price * 4) / 100;
			}
			break;

		case 6:

			if (cond == 1)
			{
				prem = (price * 5) / 100;
			}
			else if (cond == 2)
			{
				prem = (price*2.5) / 100;
			}
			break;


		case 7:

			if (cond == 1)
			{
				prem = (price * 4) / 100;
			}
			else if (cond == 2)
			{
				prem = (price * 2) / 100;
			}
			break;

		default:
			cout << "\nInvalid input....";
		}
		prem1 = prem;


	start4:
		cout << "\nFor how many years do you want insurance? (1-5): ";
		cin >> yr;

		if (yr == 1)
		{
			prem2 = 0;
			prem1 = prem + prem2;
		}

		else if (yr == 2)
		{
			prem2 = ((prem * 2) / 100);
			prem1 = prem + prem2;
		}
		else if (yr == 3)
		{
			prem2 = ((prem * 4) / 100);
			prem1 = prem + prem2;
		}
		else if (yr == 4)
		{
			prem2 = ((prem * 6) / 100);
			prem1 = prem + prem2;
		}
		else if (yr == 5)
		{
			prem2 = ((prem * 8) / 100);
			prem1 = prem + prem2;
		}
		else
		{
			cout << "\nInvalid input...." << endl;
			goto start4;
		}

	start5:
		cout << "\nDo you want insurance for your car's interior? (1 for \"yes\" , 0 for \"No\") :";
		cin >> I;

		
		if (I == 1)
		{
			prem2 += ((prem * 5) / 100);
			prem1 = prem + prem2;
		}

		else if (I != 1 && I != 0)
		{
			cout << "\nInvalid input...." << endl;
			goto start5;
		}

		prem = static_cast<int>(prem);
		prem1 = static_cast<int>(prem1);
		prem2 = static_cast<int>(prem2);
		system("cls");
		cout << "\nBasic Premium is: " << prem << " Rs." << endl << "\nExtra charges for car's interior and long insurance (if any): " << prem2 << " Rs." << endl << "\nTotal Premium is: " << prem1 << " Rs." << endl;

		save(A, a);

	}

	void client::clac_premium2()
	{



		string B[] = { "Honda", "Yamaha", "Suzuki", "SuperAsia", "United", "Zxmco", "" };

		for (int i = 0; i<6; i++)
		{

			cout << i + 1 << ". " << B[i] << endl;

		}
	start6:

		cout << "\nChoose your bike brand.\nEnter (1-6) :";
		cin >> a;
		if (a<1 || a>6)
		{
			cout << "\nInvalid input...." << endl;
			goto start6;
		}
	start7:
		cout << "\nChoose condition of your bike.\nEnter 1 for (new) and 2 for (used): " << endl;
		cin >> cond;

		if (cond<1 || cond>2)
		{
			cout << "\nInvalid input...." << endl;
			goto start7;
		}
		cout << "\nEnter price of your bike: ";
		cin >> price;

		switch (a)
		{
		case 1:
			if (cond == 1)
			{
				prem = (price * 3) / 100;
			}
			else if (cond == 2)
			{
				prem = (price*1.8) / 100;
			}
			break;

		case 2:

			if (cond == 1)
			{
				prem = (price*3.5) / 100;
			}
			else if (cond == 2)
			{
				prem = (price * 2) / 100;
			}
			break;

		case 3:

			if (cond == 1)
			{
				prem = (price * 4) / 100;
			}
			else if (cond == 2)
			{
				prem = (price*2.5) / 100;
			}
			break;

		case 4:

			if (cond == 1)
			{
				prem = (price*2.8) / 100;
			}
			else if (cond == 2)
			{
				prem = (price*1.5) / 100;
			}
			break;


		case 5:

			if (cond == 1)
			{
				prem = (price * 3) / 100;
			}
			else if (cond == 2)
			{
				prem = (price*1.5) / 100;
			}
			break;

		case 6:

			if (cond == 1)
			{
				prem = (price*2.6) / 100;
			}
			else if (cond == 2)
			{
				prem = (price*1.3) / 100;
			}
			break;



		default:
			cout << "\nInvalid input....";
		}
		prem1 = prem;


	start8:
		cout << "\nFor how many years do you want insurance? (1-5): ";
		cin >> yr;

		if (yr == 1)
		{
			prem2 = 0;
			prem1 = prem + prem2;
		}

		else if (yr == 2)
		{
			prem2 = ((prem * 2) / 100);
			prem1 = prem + prem2;
		}
		else if (yr == 3)
		{
			prem2 = ((prem * 4) / 100);
			prem1 = prem + prem2;
		}
		else if (yr == 4)
		{
			prem2 = ((prem * 6) / 100);
			prem1 = prem + prem2;
		}
		else if (yr == 5)
		{
			prem2 = ((prem * 8) / 100);
			prem1 = prem + prem2;
		}
		else
		{
			cout << "\nInvalid input...." << endl;
			goto start8;
		}
		system("cls");

		prem = static_cast<int>(prem);
		prem1 = static_cast<int>(prem1);
		prem2 = static_cast<int>(prem2);
		cout << "\nBasic Premium is: " << prem << " Rs." << endl << "\nExtra charges including long insurance charges (if any): " << prem2 << " Rs." << endl << "\nTotal Premium is: " << prem1<< " Rs." << endl;
		save(B, a);

	}

	void client::save(string x[], int y)
	{
	start9:
		cout << "\nDo you want our Insurance policy? \n(Enter (1) if u agree, Enter (0) if u dont) :";
		cin >> agr;
		
			if (agr==1)
			{
				{
			
				
				ofstream output;

				output.open(name);
				output << "Name of the client: " << name << endl << "CNIC No. : " << NIC << endl << "Age : " << age << endl << "Father name: " << f_name << endl << "Phone No. :" << phn_no << endl << "Address : " << address << endl << "Client's income : " << income << endl;
				output << "Client's vehicle: " << x[y]<<endl;
				output << "Price of the car: " << price << endl;
				output << "Insurance valid upto:" << yr <<" years"<< endl;
				output << "Basic Premium : "<<prem<<endl;
				output << "Extra Premium charges: " << prem2 << endl;
				output << "Total Premium: " << prem1 << endl;

				output.close();

				

				}
			display(x,y);
			}
		
		else if (agr!=1 && agr!=0)
		{
			cout << "Invalid Input....." << endl;
			goto start9;
		}

		system("cls");
		cout << "\"Thank You\"" << endl;
		system("pause");
	}

	void client::display(string Y[],int y)
	{

		system("cls");

		cout<< "\nName of the client: " << name << endl;
		cout<< "\nCNIC No. : " << NIC << endl;
		cout<< "\nAge : " << age << endl;
		cout<< "\nFather name: " << f_name << endl;
		cout<< "\nPhone No. :" << phn_no << endl;
		cout<< "\nAddress : " << address << endl;
		cout<< "\nClient's income : " << income << endl;
		cout << "\nClient's vehicle: " << Y[y]<<endl;
		cout << "\nPrice of the car: " << price << endl;
		cout << "\nInsurance valid upto:" << yr <<" years"<< endl;
		cout << "\nBasic Premium : "<<prem<<endl;
		cout << "\nExtra Premium charges: " << prem2 << endl;
		cout << "\nTotal Premium: " << prem1 << endl;

		cout<<"\"Thank You for your precious time.\""<<endl;
	system("pause");
	}
