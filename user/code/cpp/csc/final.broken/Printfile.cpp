using namespace std;
#include <fstream>
#include <iostream>
void printfile();

int main()

{ printfile();
	
	return 0;
}

void printfile()

{	ofstream fout;
	ifstream fin;
	
	cout << "Input data file as read\n\n";
	char ch;
	fin.open("documentation.txt");
	fin.get(ch);
	while (!fin.eof())
	{
		cout << ch;
		
		fin.get(ch);
	}
	fin.close();
	cin.get();
}

