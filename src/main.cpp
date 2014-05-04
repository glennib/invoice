#include <iostream>
#include <Invoice.h>

using namespace std;

int main() {
	int size = 3;
	Invoice *invoices[size];
	
	invoices[0] = new Invoice(0, "Mouse", 3, 22.5);
	invoices[1] = new Invoice(1, "Computer", 1, 301.11);
	invoices[2] = new Invoice(22, "Chair", 39, 80.0);

	cout << "ID\tDescription\tCount\tPrice" << endl;
	for (int i = 0; i < size; i++) {
		if (invoices[i] != NULL)
			cout << (*invoices[i]).toString() << endl;
	}
	delete invoices[1];
	cout << "Number of Invoice objects: " << Invoice::getNumberOfInvoices() << endl;
}
