#ifndef ANGRY_QUOTE_H
#define ANGRY_QUOTE_H

#include "Quote.h"

// Path of the file
#define ANGRY_PATH "angry_quote.txt"

class Angry_Quote: public Quote
{
    public:
        
        // Default Constructor
        Angry_Quote():Quote(ANGRY_PATH){}
};

#endif