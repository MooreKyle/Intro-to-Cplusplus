#include <iostream>
 
using namespace std;

int main()
{
    double num1, num2, num3; 
    double temp;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    } 

    //Now num1 is less than or equal to num2

    cout << "The numbers in the ascending order are: ";

    if (num3 <= num1)
        cout << num3 << " " << num1 << " " << num2 << endl;
    else if (num1 <= num3 && num3 <=  num2)
        cout << num1 << " " << num3 << " " << num2 << endl;
    else
        cout << num1 << " " << num2 << " " << num3 << endl;

	return 0;
}
