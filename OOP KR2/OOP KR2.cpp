// OOP KR2.cpp: главный файл проекта.

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
		cout <<endl<< "Что сделать?" << endl << "1)добавить элемент в очередь" << endl << "2)достать элемент из очереди" << endl << "3)выйти" << endl;
		cin >> choise;
		switch (stoi(choise))
		{
		case 1:
			{
			cout << "Введите число" << endl;
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

