#include <bits/stdc++.h>
using namespace std;

void printList(list<int> &lst) {
    for(auto num : lst) {
        cout << num << " ";
    }
    cout << endl;
}


int main () {
    // Create a list
    list<int> marks;

    // Insert elements into the list
    marks.push_back(24);
    marks.push_back(57);
    marks.push_back(13);
    marks.push_back(49);
    marks.push_back(68);
    marks.push_back(68);
    marks.push_back(24);
    marks.push_back(90);

    // Insert an element at the beginning of the list
    marks.push_front(34);
    marks.push_front(90);

    // Print the elements of the list
    // printList(marks);

    // Remove an element from the list
    // marks.remove(57);
    // marks.pop_back();
    // marks.pop_front();

    // Print the elements of the list after removal
    // printList(marks);

    // list ka apna sort() aur unique() use karo, algorithm wale nahi
    // marks.sort();
    // marks.unique();

    // printList(marks);


    // list<int> lst1 = {1, 2, 3, 4, 5};
    // list<int> lst2 = {6, 7, 8, 9, 10};

    // Merging two lists
    // lst1.merge(lst2);

    // printList(lst1);

    // swap
    // list<int> lst1 = {1, 2, 3, 4, 5};
    // list<int> lst2 = {6, 7, 8, 9, 10};

    // lst1.swap(lst2);

    // printList(lst1);
    // printList(lst2);

    return 0;

}
