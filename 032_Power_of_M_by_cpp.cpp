#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float Number, M;
    cout << "Please enter Number and M to calculate Number^M!\n"
        << "Number: "; cin >> Number;
    cout << "M: "; cin >> M;
    unsigned int Result = round(pow(Number, M));
	cout << "The result of " << Number << "^" << M << " is: " << Result << endl;
}
