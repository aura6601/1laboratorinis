
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

using namespace std; 

int egzaminas, nd;
double galutinis;
char vidurkis;
string* vardas;
string* pavarde;
double* galutinis;
double* pazymiai = new double[array_size];

double rezultatai(int egzaminas, double arr[], int nd);
double mediana(double arr[], int nd);
void galutinis(string vardai[], std::string pavardes[], double galutiniai[], int studentai=0, double mediana);

int main()
{

    int n, egzaminas = 0, pazymiai;
    double galutinis;
    string vardas, pavarde;
    
    cout << "Iveskite studentu skaiciu: \n ";
    int n = 0;
    cin >> n;
    v = new string[n];
    p = new string[n];
    gal = new double[n];
    med = new double[n];
    
    if (n > 0)
    {
        for (int i=0; i<n; i++){
            studentai = n;
            cout << "Iveskite varda:\n";
            cin >> vardas;
            if (isdigit(vardas[i]))
            {
                cout << "Klaida: studento vardas negli buti skaicius.\n";
            }
            else
            {
                v[i] = vardas;

                cout << "Iveskite studento pavarde:\n";
                cin >> pavarde;

                if (isdigit(pavarde[i]))
                {
                    cout << "Klaida: studento pavarde negali buti skaicius.\n";
                }
                else
                {
                    p[i]=pavarde;

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
            gal[i] = rezultatai(egzaminas, pazymiai);
            med[i] = mediana(pazymiai);

        }  
    }
    else  cout << "Studentu skaicius turi buti teigiamas sveikasis skaicius \n";
}

double rezultatai(int egzaminas, double arr[], int nd)
{
    int i, sum = 0;

    for (i = 0; i < sk; ++i) {
        sum += arr[i];
    }

    return ((0.4 * (double(sum) / sk)) + (0.6 * egr));
}

double mediana(double arr[], int nd)
{
        sort(arr, arr + nd);

        if (nd % 2 == 0) {
            return (arr[nd / 2 - 1] + arr[nd / 2]) / 2;
        }
        else {
            return arr[nd.size() / 2];
        }
}



void galutinis(string vardai[], std::string pavardes[], double galutiniai[], int studentai = 0, double mediana)
{
    for (int i = 0; i < studentai; i++)
        cout <<"Galutiniai duomenys:"<<" "<< "Vardas" << vardai.[i] << setw(25)<< "Pavarde" << pavardes.[i] <<setw(25) << "Galutinis" << galutiniai[i] << setw(25)<<mediana.at(i)<<"Mediana"<< endl;
}

