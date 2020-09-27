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
    studentas eilute; studentas eilute_mas[5];
    cout << "Iveskite studentu skaiciu: \n ";
    int n = 0;
    cin >> n;
    studentas* grupe = new studentas[n];
    std::vector<studentas> Eil_vect;
   
    cout << "Iveskite reikalingus duomenis (Vardas, Pavarde, egz. paz.,5 nd. paz.):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "-ojo studento duomenys: ";
        cin >> grupe[i].vardas >> grupe[i].pavarde >> grupe[i].egz;
        for (int i = 0; i < 5; i++) {
            cin >> eilute.pazymiai[i];
            eilute.gal = eilute.gal + (float)eilute.pazymiai[i];
        }
        eilute.gal = eilute.gal / 5.0;
        eilute.gal = eilute.gal * 0.4 * 0.6 * grupe[i].egz;
        cout << "Ivesti duomenys: " << grupe[i].vardas << " " << grupe[i].pavarde << " " << grupe[i].egz;
        for (int i = 0; i < 5; i++) cout << " " << eilute.pazymiai[i];
        cout << " " << eilute.gal << std::endl;
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