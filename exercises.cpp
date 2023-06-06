#include <iostream>
#include <string>

// Write a function that takes two inputs : Sentence, and Word to find inside that sentence
// The function should have a Boolean output

bool findWord(std::string sentence, std::string word){
    std::string::size_type found = sentence.find(word);
    if (found != std::string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main(){
    // Accept a large integer number and print it
    /*
    std::cout << "Enter a Large integer number " << std::endl;
    int x;
    std::cin >> x;
    std::cout << "You entered the following number: " << x << std::endl;
    */

    // Write a Program that accepts two integer numbers and prints them
    /*
    std::cout << "Please enter two numbers inputs " << std::endl;
    int x, y;
    std::cin >> x >> y;
    std::cout << "You entered the following numbers: " << x << ", " << y;
    */

    // Write a Program that accepts charm int and double and prints them
    /*
    std::cout << "Please enter a char, int and double " << std::endl;
    char x;
    int y;
    double z;
    std::cin >> x >> y >> z;
    std::cout << "You entered: " << "char = " << x << ", int = " << y << ", double = " << z; 
    */

    //Write a program that accepts two int numbers, sums them up and assigns a result to a third integer
    /*
    std::cout << "Please enter two integers below: " << std::endl;
    int x, y;
    std::cin >> x >> y;
    std::cout << x+y << std::endl;
    */

    // Write a program that defines an int variable called x with a value of 123, post-increments that value in the next statement, 
    // and adds the value of 20 in the following statement using the compound assignment operator. Print out the value afterward

    // Pointers
    /*
    int x = 12;
    int* p = &x;
    std::cout << *p << std::endl;
    *p = 15;
    std::cout << "X is : " << x << std::endl;
    std::cout << "P is : " << *p << std::endl;
    */

    // References 
    /* when you change a pointer and reference's value, the initial object's value changes as well
    int x = 10;
    int& y = x;
    y = 15;
    std::cout << "X is: " << x << ", Y is: " << y << std::endl;
    */

    // Strings
    /*
    std::string sentence = "What's up?";
    std::string phrase = "Hey?";
    std::cout << sentence << " - " << phrase << std::endl;
    if (sentence == phrase){
        std::cout << "True" << std::endl; 
    }
    else {
        std::cout << "False" << std::endl;
    }
    */

    // Getting a String Input
    // Using Getline is better because you can enter words with gaps. cin will not accept those and each word will be considered separate 
    /*
    std::cout << "Please input a string" << std::endl;
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << "This is what you said: " << sentence << std::endl;    
    */

    /*
    std::string s = "Thanks";
    std::cout << s.c_str();
    */

    // Substrings
    /*
    std::string sentence = "Hello";
    std::string sub_sentence = sentence.substr(2,2);
    std::cout << sub_sentence << std::endl;
    */

    // Inputs for findWord function
    /*
    std::string s = "Hey how are you?";
    std::string p = "not";
    std::cout << findWord(s, p) << std::endl;
    */

    return 0;
}