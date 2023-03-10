#include <iostream>
#include <iomanip>

using namespace std;

const double POUNDS_IN_KILOGRAM = 2.2;

int main()
{
    // Write your main here
    double weightInPounds;
    double weightInKilograms;
    
    cout << fixed << showpoint << setprecision(2);
        
    cout << "Enter the weight in kilograms: ";
    cin >> weightInKilograms;
    cout << endl;
    
    weightInPounds = weightInKilograms * POUNDS_IN_KILOGRAM;
    
    cout << "The equivalent in pounds = " << weightInPounds << endl;
    
    return 0;
}
