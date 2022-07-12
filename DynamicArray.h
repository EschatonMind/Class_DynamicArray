#pragma once
#include <iostream>
using namespace std;
class DynamicArray
{
	int* Data;
	int NextIndex;
	int Capacity;

public:

	DynamicArray(int Cap) {
		Data = new int[Cap];
		NextIndex = 0;
		Capacity = Cap;
	}

    void add(int element) {
        if (NextIndex == Capacity) {
            int* newData = new int[2 * Capacity];
            for (int i = 0; i < Capacity; i++) {
                newData[i] = Data[i];
            }
            delete[]Data;
            Data = newData;
            Capacity = Capacity * 2;
            
        }
        Data[NextIndex] = element;
        NextIndex++;
    }

    void print() const {
        for (int i = 0; i < NextIndex; i++) {
            cout << " | " << Data[i] << " | ";
        }
        cout << endl;
    }

    int GetCapacity() const {
        return Capacity;
    }
    int GetNextIndex() const {
        return NextIndex;
    }
};

