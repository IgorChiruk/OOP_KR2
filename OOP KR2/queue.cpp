#include "stdafx.h"
#include "queue.h"


void queue::push(int i)
{
	quality++;
	if (Head == NULL) 
	{
		item *it = new item;
		it->value = i;
		it->next = NULL;
		it->prev = NULL;
		Head = it;
		Tail = it;
	}
	else
	{
		item *temp = new item;
		temp->value = i;
		temp->next = NULL;
		Tail->next = temp;
		temp->prev = Tail;
		Tail = temp;
	}
}

void queue::pop()
{
	if (quality > 0) {
		item *temp = Head->next;
		if(temp!=NULL)
		{
		temp->prev = NULL;
		free(Head);
		Head = temp;
		quality--;
		}
		else
		{
			quality--;
			Head = NULL;
			Tail = NULL;
		}
	}
}

void queue::print()
{
	if (quality == 0) { cout << "Очередь пуста"<<endl;}
	else 
	{
		item *temp = Head;
		while (temp != nullptr)
		{
			cout << temp->value << " ";
			temp = temp->next;
		}
	}
	
}

bool queue::isEmpty()
{
	if (quality == 0) { return true; }
	else{ return false; }
}

queue::queue()
{

}


queue::~queue()
{
}
