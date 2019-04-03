#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main ()
{
	int tempo,vm;
	
	cin >> tempo >> vm;
	cout << fixed << setprecision(3);
	cout << tempo*vm/12.0 << endl;

	return 0;
}
