//11. WAP to initialize class with respective value for city, show use of copy constructor to initialize
//another object of class city.
#include <iostream>
using namespace std;
class City {
    string name;
    int population;
public:
    // Parameterized constructor to initialize city name and population
    City(string cityName, int cityPopulation) : name(cityName), population(cityPopulation)
    {
    }
    // Copy constructor
    City(const City& other) : name(other.name), population(other.population)
    {
    }
    // Function to display city details
    void displayCity() {
        cout << "City Name: " << name << ", Population: " << population << endl;
    }
};
int main() {
    string cityName;
    int cityPopulation; 
    cout << "Enter City Name: ";
    cin >> cityName;
    cout << "Enter City Population: ";
    cin >> cityPopulation;
    City city1(cityName, cityPopulation);
    City city2 = city1; // Using copy constructor
    cout << "Details of city1:" << endl;
    city1.displayCity();
    cout << "Details of city2 (copy of city1):" << endl;
    city2.displayCity();
    return 0;
}
//output:
// Enter City Name: Metropolis
// Enter City Population: 5000000
// Details of city1:
// City Name: Metropolis, Population: 5000000
// Details of city2 (copy of city1):
// City Name: Metropolis, Population: 5000000
