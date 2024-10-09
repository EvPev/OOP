#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <iostream>
#include <stack>

class USBConnection
{
    private:
        USBConnection();
        std::stack<int> id;
    public:
        ~USBConnection();
        CreateUsbConnection();
        int get_id();
};

#endif