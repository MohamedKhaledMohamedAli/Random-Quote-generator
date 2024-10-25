#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <vector> // to be able to use vector
#include <string> // to be able to use strings
#include <fstream> // To be able to access files

class Quote
{
    protected:
        
        // Vector to store the file elements as strings
        std::vector<std::string> vec;
        
        // Variables to access the files
        std::fstream text_file;
        
        // Variable to store number of lines
        int no_of_lines;
        
        /******** Private functions to manipulate the file ********/
        // Function to get values from file
        void refresh(void);
        
        /********* Constructor is protecetd to avoid making object of this class *********/
        // Default & parameterized constructor
        Quote(std::string path = "\0");
        
        // To avoid making copy of this class we will use delete
        Quote(const Quote& obj) = delete;
        Quote& operator=(const Quote& obj) = delete;
        
    public:
        
        // function to get quotes to the file
        std::string get_Quote(int index);
        
        // function to get random quotes to the file
        std::string get_random_Quote(void);
        
        // Destructor to close the file
        ~Quote();
};

#endif