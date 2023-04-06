#include<iostream>
using namespace std;
int main()
{
	char i;
	cout << "Enter rainbow color:\n";
	cin >> i;
	switch(i)
	{
		case 'v':
		cout << "violet!" << endl;
		break;
		case 'i':
		cout << "indigo!" << endl;
		break;
		case 'b':
		cout << "blue!" << endl;
		break;
		case 'g':
		cout << "green!" << endl;
		break;
		case 'y':
		cout << "yellow!" << endl;
		break;
		case 'o':
		cout << "orange!" << endl;
		break;
		case 'r':
		cout << "red!" << endl;
		break;
		default:
		cout << "Color out of range" << endl;
	}
}