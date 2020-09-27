// v.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;

struct studentas {
    string vardas, pavarde;
    float pazymiai[10], egz;
    float gal = 0;
};

int main()
{
    studentas eilute; 
    cout << "Iveskite studentu skaiciu: \n ";
    int n = 0;
    cin >> n;
    studentas* grupe = new studentas[n];
   
    cout << "Iveskite reikalingus duomenis (Vardas, Pavarde, egz. paz.,5 nd. paz.):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "-ojo studento duomenys: ";
        cin >> grupe[i].vardas >> grupe[i].pavarde >> grupe[i].egz;
    }
    for (int i = 0; i < n; i++) {
        cout << grupe[i].vardas << " : ";
    }
    cout << std::endl; 
    studentas* temp = new studentas[n + 1];
    for (int i = 0; i < n; i++) temp[i] = grupe[i];

    for (int i = 0; i < n; i++) {
        cout << temp[i].vardas << " : ";
    }
    cout << std::endl; 
    

}