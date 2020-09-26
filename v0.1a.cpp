// v0.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    float pazymiai[10],  egz, gal = 0;
};

int main()
{
    studentas eilute; 
    int n = 0;
    cout << "Iveskite studentu skaiciu: \n "; 
    cin >> n;
    const studentas* grupe = new studentas[n];
    studentas Eil; studentas Eil_mas[5];
    cout << "Iveskite reikalingus duomenis (Vardas, Pavarde, egz. paz.,5 nd. paz.):\n";
    for (int i = 0; i < n; i++) {
        cin >> grupe[i].vardas >> grupe[i].pavarde >> grupe[i].egz;
        for (int i = 0; i < 5; i++) {
            cin >> grupe[i].pazymiai[i];
            grupe[i].gal = grupe[i].gal + (float)grupe[i].pazymiai[i];
        }
        grupe[i].gal = grupe[i].gal / 5.0;
        grupe[i].gal = grupe[i].gal * 0.4 * 0.6 * grupe[i].egz;
        cout << i + 1 << "-ojo studento duomenys: " << grupe[i].vardas << " " << grupe[i].pavarde << " " << grupe[i].egz;
        for (int i = 0; i < 5; i++) cout << " " << grupe[i].pazymiai[i];
        cout << " " << grupe[i].gal << std::endl;
    }
  
 
    
}

