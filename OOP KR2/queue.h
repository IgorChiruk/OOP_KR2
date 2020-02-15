#pragma once
class queue
{
	struct item {
		int value;
		struct item *next;
		struct item *prev;
	};
	int quality = 0;
	item *Head=NULL, *Tail=NULL;
public:

	void push(int i);
	void pop();
	void print();
	bool isEmpty();
	queue();
	~queue();
};

