#include<iostream>
#include<string>
using namespace std;
int main()
{
	string student;
	char choice;

	do
	{
		string currentStudent;
		cout << "Enter Student Name:";
		getline(cin, currentStudent);
		cin.ignore();
		student.append(currentStudent);
		student.append("\n");
		
		cout << "Want to continue Entering Press Y or y:";
		cin >> choice;
		cin.ignore();
	}
	while (choice == 'Y' || choice == 'y');
	cout << student;
	return 0;
}