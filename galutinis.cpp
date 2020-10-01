
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
using std::isdigit;
using std::setw();

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
                cout << "Klaida: studento vardas negli buti skaicius.\n";
            }
            else
            {
                vardai.push_back(vardas);

                cout << "Iveskite studento pavarde:\n";
                cin >> pavarde;

                if (isdigit(pavarde[i]))
                {
                    cout << "Klaida: studento pavarde negali buti skaicius.\n";
                }
                else
                {
                    pavardes.push_back(pavarde);

                    cout << "Iveskite studento egzamino rezultata desimtbaleje sistemoje: \n ";
                    cin >> egzaminas;

                    if (egzaminas < 0 || egzaminas > 11)
                    {
                        cout << "Klaida: rezultatas turi buti desimtbaleje(nuo 1 iki 10) sistemoje.\n";
                    }
                    
                    cout << "Iveskite namu darbu pazymius \n";
                    cin >> nd;
                    if (nd >= 0 && nd <= 10)
                    {
                        pazymiai.push_back(nd);
                        cout << "Ar ivedete visus rezulatatys (Y/N)? \n";
                        string ats;
                        cin >> ats;

                        if (ats == "Y") {
                            break;
                        }
                        else
                        {
                            cout << "Klaida: reikia pasirinkti '+' arba '-'.\n";
                        }

                    }
                    else
                    {
                        cout<<"Klaida: ivedete netinkama skaiciu.\n"
                    }

                }

            }
            galutinis.push_back(rezultatai(egzaminas, pazymiai));
            pazymiai.clear();

        }  
    }
    else  cout << "Studentu skaicius turi buti teigiamas sveikasis skaicius \n";
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
        cout <<"Galutiniai duomenys:"<<" "<< "Vardas" << vardai.at(i) << setw(25) << pavardes.at(i) << "Pavarde" << setw(25) << galutinis.at(i) << "Galutinis" << endl;
}

