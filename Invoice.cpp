#include "Invoice.h"
#include <iostream>
using namespace std;

Invoice::Invoice(string invoiceId) {
    this->invoiceId = invoiceId;
    dollarsOwed = 0;
    }

void Invoice::addServiceCost(float costDollars) {dollarsOwed += costDollars;}

float Invoice::getDollarsOwed() {return dollarsOwed;}
string Invoice::getInvoiceId() {return invoiceId;}