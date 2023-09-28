#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
#include "Map.h"
using namespace std;

double haversine(double long1, double lat1, double long2, double lat2);

int main() 
{
    ifstream infile;
    double longi, lati;
    Map <string, Pair<double, double>> earth_map;
    string capital;
    int choice1, choice2;
    bool more = true;
    char y_n;

    while (more == true)
    {
        infile.open("hw4_input.txt");
        while (!infile.eof())
        {
            infile >> capital >> longi >> lati;
            earth_map[capital] = Pair<double, double>(longi, lati);
        }

        Set<string> capitals = earth_map.keys();
        Set<string>::iterator itr = capitals.begin();
        cout << fixed << setprecision(2);
        int count = 1;

        cout << "Choose two capitals from the list below: " << endl << endl;
        while (itr != capitals.end())
        {
            cout << "(" << count << ")\t" << *itr << endl;
            ++itr;
            ++count;
        }

        cout << endl;
        cout << "First capital: (1-" << capitals.cardinality() << "): ";
        cin >> choice1;
        Set<string>::iterator itr1 = capitals.begin();
        for (int i = 1; i < choice1; i++)
            itr1++;
        
        cout << "Second capital: (1-" << capitals.cardinality() << "): ";
        cin >> choice2;
        Set<string>::iterator itr2 = capitals.begin();
        for (int i = 1; i < choice2; i++)
            itr2++;


        cout << endl << endl;
        cout << "The distance between " << *itr1 << " and " << *itr2 << " is " << 
        haversine(earth_map[*itr1].first, earth_map[*itr1].second, earth_map[*itr2].first, earth_map[*itr2].second) << "km" << endl;

        cout << endl << "More? [y/n] ";
        cin >> y_n;

        if (y_n != 'y')
        {
            more = false;
        }
        cout << endl << endl;
    }
    return 0;
}

double haversine(double long1, double lat1, double long2, double lat2)
{
    double lat1_rad = lat1 * M_PI / 180;
    double lat2_rad = lat2 * M_PI / 180;
    double delta_long_rad = (long2 - long1) * M_PI / 180;
    double delta_lat_rad = (lat2 - lat1) * M_PI / 180;
    double a = pow(sin(delta_lat_rad/2), 2) + cos(lat1_rad) * cos(lat2_rad) * pow(sin(delta_long_rad/2), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return 6371.0 * c;

}