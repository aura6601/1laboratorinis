
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
using std::isdigit

double rezultatai(int egzaminas, vector<int> pazymiai);
void galutinis(vector<string> vardai, vector<string> pavardes, vector<double> galutinis);



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
    int egzaminas, nd;
    double galutinis;
    char vidurkis;

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
        for (int i=0; i<n; i++){
            cout << "Iveskite varda:\n";
            cin >> vardas;
            if (isdigit(vardas[i]))
            {
                cout << "Klaida: studento vardas negli buti skaicius\n";
            }
            else
            {
                vardai.push_back(vardas);

                cout << "Iveskite studento pavarde:\n";
                cin >> pavarde;

                if (isdigit(pavarde[i]))
                {
                    cout << "Klaida: studento pavarde negali buti skaicius\n";
                }
                else
                {
                    pavardes.push_back(pavarde);

                    cout << "Iveskite studento egzamino rezultata desimtbaleje sistemoje: \n ";
                    cin >> egzaminas;

                    if (egzaminas < 0 || egzaminas > 11)
                    {
                        cout << "Klaida: rezultatas turi buti desimtbaleje(nuo 1 iki 10) sistemoje\n";
                    }
                    else
                    {

                    }



                }

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
double rezultatai(int egzaminas, std::vector<double> pazymiai)
{
    double vid, gal;

    vid = accumulate(pazymiai.begin(), pazymiai.end(), 0.000) / pazymiai.size();
    gal = (0.4 * vid) + (0.6 * egzaminas);

    return gal;
}

void galutinis(std::vector<std::string> vardai, std::vector<std::string> pavardes, std::vector<double> galutinis)
{
    for (int i = 0; i < vardai.size(); i++)
        std::cout << "Vardas" << vardai.at(i) << std::setw(25) << pavardes.at(i) << "Pavarde" << std::setw(25) << galutinis.at(i) << "Galutinis" << std::endl;
}

