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
	//string price;
        //string bathrooms;
        //string bedrooms;
        double price;
	double bathrooms;
	int bedrooms;
};

void loadarray(houserecord house[], int size);
void printfile();

int main()
{
        const int size = 10;
	int i;

	ifstream fin;
	ofstream fout;
	houserecord house[size];
	loadarray(house, size);
//        printfile();
	return 0;
}

void loadarray(houserecord house[], int size)
{
	int i;
	ifstream fin;
	fin.open("house.txt");

	for (i = 0; i < size; i++)
	{
		getline(fin, house[i].address);
		getline(fin, house[i].city);
		getline(fin, house[i].state);
		getline(fin, house[i].zip);
		fin >> house[i].price;
		fin >> house[i].bathrooms;
		fin >> house[i].bedrooms;
		fin.ignore();

//This part is done by printfile() now
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

void printfile()

{	ofstream fout;
	ifstream fin;
	
	cout << "Input data file as read\n\n";
	char ch;
	fin.open("house.txt");
	fin.get(ch);
	while (!fin.eof())
	{
		cout << ch;
		
		fin.get(ch);
	}
	fin.close();
	cin.get();
}

