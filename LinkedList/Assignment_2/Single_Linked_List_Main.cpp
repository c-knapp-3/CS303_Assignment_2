#include "Single_Linked_List.h"

int main()
{
    cout << "Building a singly linked list...\n";
    Single_Linked_List myList;
    cout << "\nIs the list empty? \n" << (myList.empty() ? "YES" : "NO") << "\n";

    cout << "\nInserting the values 5, 13 & 42 to the end of the list using the push_back method.\n";
    myList.push_back(5);
    myList.push_back(13);
    myList.push_back(42);
    cout << "Displaying current list...\n";
    myList.print_list();
    
    cout << "\nInserting the values 4, 12 & 41 to the front of the list using the push_front method.\n";
    myList.push_front(41);
    myList.push_front(12);
    myList.push_front(4);
    cout << "Displaying the current list...\n";
    myList.print_list();

    cout << "\nRemoving the first item from the list using the pop_front method.\n";
    myList.pop_front();
    cout << "Displaying current list...\n";
    myList.print_list();

    cout << "\nRemoving the last item from the list using the pop_back method.\n";
    myList.pop_back();
    cout << "Displaying current list...\n";
    myList.print_list();

    cout << "\nGetting the first element in the list using the front method...\n" << myList.front() << endl;

    cout << "\nGetting the last element in the list using the back method...\n" << myList.back() << endl;

    cout << "\nIs the list empty? \n" << (myList.empty() ? "YES" : "NO") << "\n";

    cout << "\nInsert the value 25 at index 2\n";
    myList.insert(2, 25);
    cout << "Displaying current list...\n";
    myList.print_list();

    cout << "\nInsert the value 3 at index 0\n";
    myList.insert(0, 3);
    cout << "Displaying current list...\n";
    myList.print_list();

    cout << "\nInsert the value 8 at index 8\n";
    myList.insert(8, 8);
    cout << "Displaying current list...\n";
    myList.print_list();

    cout << "\nAttempting to remove the item at index 8...\nSuccess?: " << (myList.remove(8) ? "YES" : "NO") << endl;
    cout << "Displaying current list...\n";
    myList.print_list();
    cout << "\nAttempting to remove the item at index 4...\nSuccess?: " << (myList.remove(4) ? "YES" : "NO") << endl;
    cout << "Displaying current list...\n";
    myList.print_list();
    cout << "\nAttempting to remove the item at index 0...\nSuccess?: " << (myList.remove(0) ? "YES" : "NO") << endl;
    cout << "Displaying current list...\n";
    myList.print_list();

    cout << "\nAttempting to find the item '1' in the list...\n";
    cout << myList.find(1) << endl;

    cout << "\nAttempting to find the item '41' in the list...\n";
    cout << myList.find(41) << endl;











}

