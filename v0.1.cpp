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
    int n = 0;
    cout << "Iveskite studentu skaiciu: \n "; 
    cin >> n;
    const studentas* grupe = new studentas[n];
    studentas Eil; studentas Eil_mas[5];
    std::vector<studentas> Eil_vect;
    cout << "Iveskite reikalingus duomenis (Vardas, Pavarde, egz. paz.,5 nd. paz.):\n";
    cin >> Eil.vardas >> Eil.pavarde >> Eil.egz;
    for (int  i = 0; i < 5; i++) {
        cin >> Eil.pazymiai[i];
        Eil.gal = Eil.gal + (float)Eil.pazymiai[i];
    }
    Eil.gal = Eil.gal / 5.0;
    Eil.gal = Eil.gal * 0.4 * 0.6 * Eil.egz;
    cout << "Ivesti duomenys: " << Eil.vardas << " " << Eil.pavarde << " " << Eil.egz;
    for (int i = 0; i < 5; i++) cout << " " << Eil.pazymiai[i];
    cout << " " << Eil.gal << std::endl;
    char a; 
    cin >> a;
    
}

