//include headers and libraries
#include <iostream>
#include "copilot.h"
using namespace std;
#include <algorithm>
//implement class functions

Library::Library() {
    for (int i=0; i<10; i++) {
    books[i] == "";
    }
}

bool Library::addBook(string bookName) {
    if (books[9] == "") {
        bool exists = find(books, books + 9, bookName) != (books + 9);
        if (exists == 1) {
            cout<<"Cannot add the book.\n";
            return false;
        } else {
            for (int i=0; i<10; i++) {
                if (books[i] == "") {
                    books[i] = bookName;
                    return 0;
                }
            }
        }
    } else {
        cout<<"Cannot add the book.\n";
        return false;
    }
}

bool Library::removeBook(string bookName) {
    for (int i=0; i<10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    cout<<"Cannot remove the book.\n";
    return false;

}

void Library::print() {
    cout<<"Library contents:\n";
    for (int i=0; i<10; i++) {
        if (books[i] != "") {
        cout<<books[i]<<endl;
        }
    }
}