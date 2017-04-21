using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

struct houserecord
{	string address;
	string city;
	string state;
	string zip;
	double price;
	double bathrooms;
	int bedrooms;
};

void loadarray(houserecord house[], int size);

int main()
{
	int i;

	ifstream fin;
	ofstream fout;
	houserecord house[10];
	loadarray(house, 10);
	return 0;
}

void loadarray(houserecord house[], int size)
{
	int i;
	ifstream fin;
	fin.open("/home/cooro/code/cpp/csc/final/house.txt");

	for (i = 0; i < 10; i++)
	{
		getline(fin, house[i].address);
		getline(fin, house[i].city);
		getline(fin, house[i].state);
		getline(fin, house[i].zip);
		fin >> house[i].price;
		fin >> house[i].bathrooms;
		fin >> house[i].bedrooms;
		fin.ignore();
		
		cout <<"\t" << left << house[i].address 
			<< "\t" << house[i].city
			<< "\t" << left << house[i].state
			<< "\t" << left << house[i].zip
			<< "\t" << right << house[i].price
			<< "\t" << right << house[i].bathrooms
			<< "\t" << right << house[i].bedrooms 
			<< endl;
	
	}

	fin.close();


	return;
}

