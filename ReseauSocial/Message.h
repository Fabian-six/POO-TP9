#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
#include "Date.h"

using namespace std;

class Message
{
protected:
    string myContent;
    Date myDate;
public:
    void displayContent();
    void displayDate();
    void displayHour();
    string getContent() ;
    Message(const string & Message);
    Date getMyDate() const;
};

class PrivateMessage : Message
{
private:
    string mySender;
};

#endif // MESSAGE_H
