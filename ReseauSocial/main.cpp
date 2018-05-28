#include <iostream>
#include "Date.h"
#include "Message.h"

using namespace std;

void testDate (void)
{
    Date date;
    cout << "Aujourd'hui nous sommes le : "
         << date.getDay () << ' ' << date.getMonth () << ' ' << date.getYear ()
         << " et il est " << date.getHour () << "h " << date.getMinute ()
         << "mn et " <<date.getSecond () << 's' << endl;

} // testDate()

void testMessage (void)
{
    Message message ("salut");
    message.displayContent ();
    cout << " posté le : ";
    message.displayDate();
    cout << " à ";
    message.displayHour();
    cout << endl;

} // testMessage()}

int main()
{
    testMessage();
}
