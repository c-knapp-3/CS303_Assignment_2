#include "Single_Linked_List.h"

Single_Linked_List::Single_Linked_List() {  // default constructor
	head = nullptr;
	tail = nullptr;
	num_items = 0;
}

void Single_Linked_List::push_front(int value) {
	Node* newNode = new Node;             // make new node
	newNode->data = value;                
	newNode->next = head;                 
	head = newNode;                         
	++num_items;                          
	if (num_items == 1) {                 // if there is only one item, tail is head
		tail = head;
	}
}

void Single_Linked_List::push_back(int value) {
	Node* newNode = new Node;             // make new node
	newNode->data = value;                
	newNode->next = nullptr;                
	if (num_items == 0) {                   // if empty, head = tail = new Node
		head = newNode;
		tail = head;
	}
	else {
		tail->next = newNode;               
		tail = newNode;
	}
	++num_items;                          // increment num_items
}

void Single_Linked_List::pop_front() {
	if (head == nullptr) {              
		cout << "Empty List\n";           // if list is empty, tell user
		return;
	}
	else {
		Node* delNode = head;               // make a new node that will be deleted
		head = head->next;
		delete delNode;                     // deallocate
		delNode = nullptr;
		--num_items;                        // decrement num_items
	}
}

void Single_Linked_List::pop_back() {           
	if (head == nullptr) {
		cout << "Empty List\n";            
		return;
	}
	if (head->next == nullptr) {     // if only one item in list, delete and make null
		delete head;
		head = nullptr;
		--num_items;                  // decrement num_items
	}
	else {
		Node* temp = head;            
		Node* prev = nullptr;
		while (temp->next != nullptr) {     // find last element
			prev = temp;
			temp = temp->next;
		}
		delete temp;                      // delete last element
		temp = nullptr;
		tail = prev;
		tail->next = nullptr;
		--num_items;                 
	}
}

int Single_Linked_List::front() {
	if (head == nullptr) {
		cout << "Empty list\n";      // if list is empty, tell user
	}
	else {
		return head->data;           // else return value in headptr (first)
	}
}

int Single_Linked_List::back() {    
	if (head == nullptr) {
		cout << "Empty list\n";        // if list is empty, tell user
	}
	else {
		return tail->data;          // else return value in tailptr (last)
	}
}

bool Single_Linked_List::empty() const {   
	return (head == nullptr);
}

void Single_Linked_List::insert(size_t index, const int& value) {
	if (index < 0) {          
		cout << "Invalid index\n";
	}
	else if (index >= (num_items - 1)) {   // if index goes beyond end of list
		push_back(value);                //insert at back
	}
	else if (index == 0) {     // if index is 0
		push_front(value);    //insert at the front
	}
	else {
		Node* newNode = new Node;   
		newNode->data = value;
		newNode->next = nullptr;

		Node* temp = head;
		while (--index > 0) {       // find index pos in list
			temp = temp->next;
		}
		newNode->next = temp->next;   // make next point to element at given index
		temp->next = newNode;
		num_items++;                // incrememnt num_items
	}
}

bool Single_Linked_List::remove(size_t index) {
	if (index > (num_items - 1)) {    // if index goes beyond last item in list
		return false;
	}
	else if (index == 0) {         
		Node* delNode = head;
		head = head->next;
		delete delNode;        // deallocate
		delNode = nullptr;
		--num_items;           // decrement num_items
		return true;
	}
	else {
		Node* temp = head;
		while (--index > 0) {    // find index pos in list
			temp = temp->next;
		}
		Node* nextNode = temp->next->next;
		delete temp->next;
		temp->next = nextNode;
		num_items--;
		return true;
	}
}

size_t Single_Linked_List::find(const int& value) {
	Node* findNode = head;          
	int count = -1;           // count starting from 0;
	while (findNode) {
		++count;
		if (findNode->data == value) {
			cout << "Item '" << value << "' found at index: ";
			return count;
		}
		findNode = findNode->next;      // update next node
	}
	cout << "Item '" << value << "' not found. Displaying size of list...\n";
	return num_items;
}

void Single_Linked_List::print_list() {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}