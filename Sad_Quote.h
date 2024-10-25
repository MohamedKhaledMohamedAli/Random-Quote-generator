#ifndef SAD_QUOTE_H
#define SAD_QUOTE_H

#include "Quote.h"

// Path of the file
#define SAD_PATH "sad_quote.txt"

class Sad_Quote: public Quote
{
    public:
        
        // Default Constructor
        Sad_Quote():Quote(SAD_PATH){}
};

#endif