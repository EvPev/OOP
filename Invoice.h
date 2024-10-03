#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
using namespace std;

class Invoice
{
    protected:
        string invoiceId;
        float dollarsOwed;

    public:
        Invoice(string invoiceId);
        void addServiceCost(float costDollars);
        float getDollarsOwed();
        string getInvoiceId();

};

#endif