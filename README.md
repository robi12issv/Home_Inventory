# Household inventory (work in progress)
### This project is an inventory of some household items that need to be purchased in a certain amout of time.

## Description
The final project is a database of items, with `ID` (unique), `itemName`, `quantity`, `purchaseDate`, `timeSpan`.  
The functions allow the user to add, remove, display items and to remind them when to buy an item.

At this moment, the user can only add, remove and display the items, the other functions are to be implemented.

## Working of the project
The base part of the project is a `struct` that describes the key features of the items and the items.  

The functions `void addItem`, `void displayItems` and `void removeItem` are the ones the user interacts with and perform actions of adding item to database, displaying all items from database, removing and item from the database.  
The `removeItem` needs an `ID` number input from the user in order to perform the action.  

![Screenshot 2024-04-20 at 07 13 52](https://github.com/robi12issv/Home_Inventory/assets/160391019/2356bd81-13a3-4a7e-b045-a098714fc268)  

`main()` function  

![Screenshot 2024-04-20 at 07 45 48](https://github.com/robi12issv/Home_Inventory/assets/160391019/d3220f5b-c806-422e-916b-5475d057c908)

## Installation guide
Create a directory in a known location on your drive, then open terminal and navigate to the directory.
Use `git clone` command and the repository link, like `git clone https://github.com/robi12issv/Home_Inventory.git`.
