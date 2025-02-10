// medicineInv.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Paracetamol {
    // Main structure.
    // Used as entries in an array, with variables made via user input and will later be displayed if searched.
    string Name;
    int numSold;
    int numStock;

    // Input functions.
    // Used to take input from the user to insert a new entry in the structure array.
    void inpStuff() {
        cout << "Name of the Medicine: ";
        cin >> Name;
        cout << "# Sold: ";
        cin >> numSold;
        cout << "# of Stocks: ";
        cin >> numStock;
        cout << endl;
    }

    // Information display function.
    // Used to display the info of the structure, can be specified in an array.
    void displayInfo() {
        cout << "Name: " << Name << endl;
        cout << numSold << " have been sold." << endl;
        cout << numStock << " currently in stock." << endl;
    }
};

int main()
{
    // Hello, world: hospital edition
    cout << "Welcome to Wellness and Health Hospital's Inventory System." << endl << endl;

    int size;
    string s1;
    int numSearch;

    // array size input
    cout << "How many are you going to make?" << endl;
    cin >> size;
    Paracetamol* Brands = new Paracetamol[size];
    for (int i = 0; i < size; i++) {
        cout << "Creating Entry[" << i << "]" << endl;
        Brands[i].inpStuff();
    }

    // Picking a brand to choose from
    cout << "Enter a number to view its information." << endl;
    for (int i = 0; i < size; i++) {
        cout << i << " > " << Brands[i].Name << endl;
    }

    // input
    cout << endl;
    cin >> numSearch;
    cout << endl;

    // Search array via input and display it
    for (int i = 0; i < size; i++) {
        if (i == numSearch) {
            Brands[i].displayInfo();
        }
    }

    return 0;
}

/*Paracetamol pndl, rxdl, biogsc, tylnl, excdrn;
    pndl = { "Panadol", 320, 680 };
    rxdl = { "Rexidol", 190, 310 };
    biogsc = { "Biogesic", 985, 515 };
    tylnl = { "Tylenol", 230, 270 };
    excdrn = { "Excedrin", 436, 64 };*/


