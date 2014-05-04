#include <iostream>

using namespace std;

class Invoice {
private:
	int quantity_;
	float price_;
	int partNumber_;
	string partDescription_;
	static int numInvoices_;

public:
	void setPartNumber(int partNumber);
	int getPartNumber();
	
	void setPartDescription(string partDescription);
	string getPartDescription();
	
	void setQuantity(int quantity);
	int getQuantity();

	void setPrice(float price);
	float getPrice();
	
	Invoice(int part, string description, int count, float price);
	~Invoice();

	string toString();

	static int getNumberOfInvoices();
};

