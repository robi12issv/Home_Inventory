//
//  test.cpp
//  Test_cpp
//
//  Created by Robi Bejenar on 16.04.2024.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float timeSpan;
    bool isValid;
};

void addItem(vector<Item> &database, int id, const string &itemName, int quantity, float timeSpan, bool isValid) {
    Item newItem;
    newItem.id = id;
    newItem.name = itemName;
    newItem.quantity = quantity;
    newItem.timeSpan = timeSpan;
    newItem.isValid = isValid;
    database.push_back(newItem);
};

int generateID() {
    static int id = 0;
    return ++id;
};

void displayItems(const vector<Item> &database) {
    cout << "Home items in the intentory:" << endl;
    for (auto &item : database) {
        if (item.isValid) {
            cout << "\tID " << item.id << ", Name: " << item.name << ", Quantity: " << item.quantity << ", Units per month: " << item.timeSpan << endl;
        }
        
    }
};

void removeItem(const vector<Item> &database, int idtoRemove) {
    cout << "What item you want to remove? " << endl;
    cin >> idtoRemove;
    for(auto item : database) {
        if(int idtoRemove = item.id){
            item.isValid = false;
            break;
        }
    }
};
    
    
int main () {
    vector<Item> database;
        
    addItem(database, generateID(), "Hartie igienica", 36, 1.0, true);
    addItem(database, generateID(), "Servetele de mobila", 1, 1.0, true);
    addItem(database, generateID(), "Pasta de dinti", 2, 0.33, true);
        
    removeItem(database, 2);
    for(const Item &item :database) {
        if(item.isValid) {
            cout << "The item with ID " << item.id << "is still in the list" << endl;
        }
        else {
            cout << "The item with ID " << item.id << "was removed" << endl;
        }
    }
        
    displayItems(database);
        
    return 0;
}
