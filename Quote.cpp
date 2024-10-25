#include "Quote.h"

// Default & parameterized constructor
Quote::Quote(std::string path):text_file(path), no_of_lines(0)
{
    
    // Check if the file is successfully opened 
    if (!text_file.is_open()) { 
        std::cerr << "Error opening the file!" << std::endl; 
        exit(0);
    }
    
    // To get values from file and put it in the text file
    refresh();
}

// Function to get values from file
void Quote::refresh(void)
{
    
    // Declare a string variable to store each line of the file
    std::string line;
    
    // Clear the vector
    vec.clear();
    vec.resize(0);
    vec.shrink_to_fit();
    
    // Clear number of lines
    no_of_lines = 0;
    
    // Read each line of the file and store it in the vector 
    while (getline(text_file, line))
    {
        
        // increment number of lines
        no_of_lines++;
        
        // Push the elements to the vector
        vec.push_back(line); 
    } 
}

// function to get quotes to the file
std::string Quote::get_Quote(int index)
{
    return vec[index];
}

// function to get random quotes to the file
std::string Quote::get_random_Quote(void)
{
    
    // To generate a random number in a range
    int random = (rand() % (no_of_lines + 1));
    
    // Get the quote
    std::string quote = get_Quote(random);
    
    // Return the quote
    return quote;
}

// Destructor to close the file
Quote::~Quote()
{
    
    // Close the file 
    text_file.close();
}