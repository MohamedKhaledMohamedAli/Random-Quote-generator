#include "Happy_Quote.h"
#include "Sad_Quote.h"
#include "Angry_Quote.h"
#include "Quote.h"
#include <memory> // To use smart pointers

enum feeling
{
    HAPPY = 1, SAD, ANGRY, STOP
};


int main()
{
    
    // Variable Declaration
    int choice;
    int random;
    std::shared_ptr<Quote> ptr;
    
    // Enter the do..while loop until the user
    do
    {
        
        // Ask user to choose a feeling from the list
        std::cout << "---------------------------------------\n";
        std::cout << "Please Enter how you are feeling?\n";
        std::cout << "1) Happy\n2) Sad\n3) Angry\n4) Stop\n";
        std::cout << "---------------------------------------\n";
        std::cout << "Enter your feeling: ";
        std::cin >> choice;
        
        switch (static_cast<feeling>(choice))
        {
        case HAPPY:
                
                // To choose a random number between 1 and 2
                random = 1 + (rand() % (2 + 1));
                
                // If random number = 1 print SAD quote else print ANGRY quotes
                if(random == 1)
                {
                    ptr = std::make_shared<Sad_Quote>();
                }
                else
                {
                    ptr = std::make_shared<Angry_Quote>();
                }
                
                // Print random Quote
                std::cout << ptr->get_random_Quote() << std::endl;
                
            break;
        case SAD:
                
                // To choose a random number between 1 and 2
                random = 1 + (rand() % (2 + 1));
                
                // If random number = 1 print HAPPY quote else print ANGRY quotes
                if(random == 1)
                {
                    ptr = std::make_shared<Happy_Quote>();
                }
                else
                {
                    ptr = std::make_shared<Angry_Quote>();
                }
                
                // Print random Quote
                std::cout << ptr->get_random_Quote() << std::endl;
                
            break;
        case ANGRY:
                
                // To choose a random number between 1 and 2
                random = 1 + (rand() % (2 + 1));
                
                // If random number = 1 print SAD quote else print HAPPY quotes
                if(random == 1)
                {
                    ptr = std::make_shared<Sad_Quote>();
                }
                else
                {
                    ptr = std::make_shared<Happy_Quote>();
                }
                
                // Print random Quote
                std::cout << ptr->get_random_Quote() << std::endl;
                
            break;
        default:
                
                // Ask user to choose a valid choice
                if(choice != STOP)
                {
                    std::cout << "Please Enter a valid feeling\n";
                }
                
            break;
        }
        
    } while (choice != STOP);
    
    
    return 0;
}