#include <iostream> 

using namespace std; 

int main() {
	
	locale::global(locale("spanish"));

	cout << "Programa para calcular el n�mero de diagonales de un pol�gono" << endl << endl;
	int num;
	cout << "Ingresa el numero de lados del pol�gono: ";
	cin >> num;

	int diag;
	diag = num * (num - 3) / 2;
	cout << "El n�mero de diagonales de tu pol�gono es: " << diag << endl;





	system("pause");
	return 0;

	
	

}

