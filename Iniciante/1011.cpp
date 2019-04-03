#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()
{
	float raio,volume;
	
	cin >> raio;
	//volume = (4*pow(raio,3)*3.14159)/3.0;
	
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << (4*pow(raio,3)*3.14159)/3.0 << endl;


	return 0;
}
