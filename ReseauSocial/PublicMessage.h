#ifndef PUBLICMESSAGE_H
#define PUBLICMESSAGE_H
#include "Message.h"
#include <iostream>

class PublicMessage : Message
{
private:
    unsigned myLikers ;
public:
    PublicMessage(const string &Message);
    void add();
};

#endif // PUBLICMESSAGE_H
