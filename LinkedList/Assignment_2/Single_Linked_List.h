#ifndef SINGLE_LINKED_LIST_H_
#define SINGLE_LINKED_LIST_H_
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class Single_Linked_List {
private:
	Node* head;
	Node* tail;
	int num_items;
public:
	Single_Linked_List();
	void push_front(int value);
	void push_back(int value);
	void pop_front();
	void pop_back();
	int front();
	int back();
	bool empty() const;
	void insert(size_t index, const int& value);
	bool remove(size_t index);
	size_t find(const int& value);
	void print_list();

};
#endif