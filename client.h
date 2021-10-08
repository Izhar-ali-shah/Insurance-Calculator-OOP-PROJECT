#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;

class client
{
private:
	string name;
	int age;
	string NIC;
	string f_name;
	string phn_no;
	string address;
	long double income;
	int a;
	double prem, prem1, prem2;
	long int price;
	int cond;
	int yr;
	bool I;
	bool agr;
public:
	client();
	void get_data();
	void choice(int x);
	void clac_premium1();
	void clac_premium2();
	void save(string x[], int y);
	void display(string Y[],int y);

};