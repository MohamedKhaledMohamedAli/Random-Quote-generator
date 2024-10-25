#ifndef HAPPY_QUOTE_H
#define HAPPY_QUOTE_H

#include "Quote.h"

// Path of the file
#define HAPPY_PATH "happy_quote.txt"

class Happy_Quote: public Quote
{
    public:
        
        // Default Constructor
        Happy_Quote():Quote(HAPPY_PATH){}
};

#endif