#include <iostream>
#include <string>
using namespace std;

int main()
    {
        cout << "Hello user. In this program, you will be asked to enter ten words." << endl;
        cout << "Once you enter in the words, the program will print the longest word for you." << endl;
        
        string bword{};

        for (int i = 0; i < 10; i++)
            {
                cout << "Please enter a word." << endl;
                string uword{};
                cin >> uword;
                if ( uword.size() > bword.size() )
                    {
                        bword.swap(uword);
                    }                
            }

        cout << "And the word with the longest length is..." << endl;
        cout << bword << "!" << endl;
        cout << "With a length of " << bword.size() << '.' << endl;
    }