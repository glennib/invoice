#include <iostream>
#include <Invoice.h>
#include <sstream>

using namespace std;

int Invoice::numInvoices_ = 0;

void Invoice::setPartNumber(int partNumber) {
	partNumber_ = partNumber;
}

int Invoice::getPartNumber() {
	return partNumber_;
}


void Invoice::setPartDescription(string partDescription) {
	partDescription_ = partDescription;
}

string Invoice::getPartDescription() {
	return partDescription_;
}


void Invoice::setQuantity(int quantity) {
	if (quantity >= 0) quantity_ = quantity;
}

int Invoice::getQuantity() {
	return partNumber_;
}


void Invoice::setPrice(float price) {
	if (price >= 0) price_ = price;
}

float Invoice::getPrice() {
	return price_;
}

Invoice::Invoice(int part, string description, int count, float price) {
	setPartNumber(part);
	setPartDescription(description);
	setQuantity(count);
	setPrice(price);
	numInvoices_++;
}

Invoice::~Invoice() {
	numInvoices_--;
}

string Invoice::toString() {
	stringstream ss;
	ss << partNumber_ << "\t" << partDescription_ << "\t" << quantity_ << "\t" << price_;
	return ss.str();
}

int Invoice::getNumberOfInvoices() {
	return numInvoices_;
}
