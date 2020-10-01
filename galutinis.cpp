
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
#define array_size 1000000

using namespace std; 

int egzaminas, nd;
double galutinis;
char vidurkis;
string* vardas;
string* pavarde;
double* galutinis;
double* pazymiai = new double[array_size];

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

double rezultatai(int egzaminas, vector<int> pazymiai)
{
    double vid, gal;

    vid = accumulate(pazymiai.begin(), pazymiai.end(), 0.000) / pazymiai.size();
    gal = (0.4 * vid) + (0.6 * egzaminas);

    return gal;
}

double mediana(vector<int>pazymiai)
{
        sort(pazymiai.begin(), pazymiai.end());

        if (pazymiai.size() % 2 == 0) {
            return (pazymiai[pazymiai.size() / 2 - 1] + pazymiai[pazymiai.size() / 2]) / 2;
        }
        else {
            return pazymiai[pazymiai.size() / 2];
        }
}



void galutinis(vector<string> vardai, vector<string> pavardes, vector<double> rezultatai, vector<double> mediana)
{
    for (int i = 0; i < vardai.size(); i++)
        cout <<"Galutiniai duomenys:"<<" "<< "Vardas" << vardai.at(i) << setw(25) << pavardes.at(i) << "Pavarde" << setw(25) << rezultatai.at(i) << "Galutinis" << setw(25)<<"Mediana"<<mediana.at(i)<< endl;
}

