#include "DynamicArray.h"
#include <iostream>
using namespace std;
int main() {
	int Cap;
	int Element;
	//bool Stop = 0;
	//char Trigger;
	cout << "Enter Numbers: " << endl;
	cin >> Cap;
	DynamicArray D1(Cap);
	for (int i = 0; i <= Cap; i++) {
		cin >> Element; 
		D1.add(Element);
		//Cap = D1.GetCapacity();
	}
	/*while (!Stop)
	{
		cout << Stop << endl;
		if (Trigger == 'a') {
			Stop = 1;
		}
		cin >> Element;
		D1.add(Element);
		Cap = D1.GetCapacity();
		cin >> Trigger;
	}
	*/
	D1.print();
	cout << D1.GetCapacity();
	return 0;
}