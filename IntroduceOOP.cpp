#include <iostream>
using namespace std;

class planet{
   private :
        float gravity;
    public :
        string name;
        float diameters;
        
        void displaydata() 
        {
            cout  << "my gravity is" << gravity << endl; 
        }
    };