// OOP KR2.cpp: ������� ���� �������.

#include "stdafx.h"
#include "queue.h"

using namespace System;



int main()
{
	setlocale(LC_ALL, "RUS");
	bool cont = true;
	int value;
	queue *q = new queue;
	string choise;
	while (cont) 
	{
		Console::Clear();
		q->print();
		cout <<endl<< "��� �������?" << endl << "1)�������� ������� � �������" << endl << "2)������� ������� �� �������" << endl << "3)�����" << endl;
		cin >> choise;
		switch (stoi(choise))
		{
		case 1:
			{
			cout << "������� �����" << endl;
			cin >> value;
			q->push(value);
			break;
			}

		case 2:
		{
			q->pop();
			break;
		}

		case 3:
		{
			cont = false;
			break;
		}
		}
	}
	Console::Clear();
    return 0;
}

