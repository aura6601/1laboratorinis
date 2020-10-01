
// v.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

double rezultatai(int egzaminas, vector<int> pazymiai);
void galutinis(vector<string> vardai, vector<string> pavardes, vector<double> galutinis);

int egzaminas, nd;
double galutinis;
char vidurkis;

float vidurkis(vector<int> pazymiai) {
    int suma = 0;
    int dydis = pazymiai.size();

    for (int i = 0; i < dydis; i++) {
        suma += pazymiai[i];
    }
    return suma / dydis;
}

int main()
{
    vector<std::string> vardai;
    vector<std::string> pavardes;
    vector<double> pazymiai;
    vector<double> galutinis;
    string vardas;
    string pavarde;
    
    cout << "Iveskite studentu skaiciu: \n ";
    int n = 0;
    cin >> n;
    if (n > 0)
    {
        cout << "Iveskite reikalingus duomenis (Vardas, Pavarde, egz. paz.,5 nd. paz.):\n";
        for (int i = 0; i < n; i++) {
            cout << i + 1 << "-ojo studento duomenys: ";
            cin >> grupe[i].vardas >> grupe[i].pavarde >> grupe[i].egz;
            for (int i = 0; i < 5; i++) {
                cin >> eilute.pazymiai[i];
            }
            streamsize prec = cout.precision();
            cout << "Ivesti duomenys: " << grupe[i].vardas << " " << grupe[i].pavarde << " " << grupe[i].egz << setprecision(3)
                << 0.6 * grupe[i].egz + 0.4 * suma / n << setprecision(prec) << endl;
            for (int i = 0; i < 5; i++) cout << " " << eilute.pazymiai[i];
            cout << " " << grupe[i].gal << std::endl;
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
    else  std::cout << "Studentu skaicius turi buti teigiamas sveikasis skaicius \n";
           
    


}

