#include <iostream>
using namespace std;
#include <string>


//call by adress
int fibo(int& a, int& b);

// global definieren
#define nFibo 1000


int main() {

	//definieren declarieren
	int first = 1;
	int second = 2;
	int gerade, summe = 2;



	// fibos die mit 3 anfangen und bis..
	for (int i = 0; i < nFibo - 2; i++)  // 10 ita's
	{
		gerade = fibo(first, second);

		if (gerade > 4000000) {

			cout << "\nder wert von itaration " << i << " ist " << gerade << " und ist ueber 4Mio ! die ita wird abgebrochen." << endl;
			break;
		}

		if (gerade % 2 == 0) {
			summe = gerade + summe;
		}
	}
	cout << "\nsumme der geraden fibos: " << summe << endl;


	return 0;
}




int fibo(int& a, int& b) {

	if (a == 1 || b == 2) {

		// die ersten zwei fibos
		cout << a << " " << b;

	}

	int temp = a + b;

	a = b;
	b = temp;

	cout << " " << temp;

	return temp;
}