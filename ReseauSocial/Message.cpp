#include "Message.h"
#include <iostream>
#include "Date.h"


void Message::displayContent()
{
    cout << myContent;
}

void Message::displayDate()
{
    cout << myDate.getDay () << ' ' << myDate.getMonth () << ' ' << myDate.getYear ();
}

void Message::displayHour()
{
    cout << myDate.getHour () << "h " << myDate.getMinute () << "mn et " << myDate.getSecond () << 's';
}

string Message::getContent()
{
    return myContent;
}

Date Message::getMyDate() const
{
    return myDate;
}

Message::Message(const string & Message)
{
    myDate = Date();
    myContent = Message;
}
