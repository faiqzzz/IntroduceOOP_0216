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
            void inputdata() { 
                cout << "my name is : ";
                cin >> name;
                cout << "my size is :";
                cin >> diameters;
                cout << "my gravity is : ";
                cin >> gravity;


            }
            
            
        


};   

int main()

{
    planet venus;
    venus.inputdata();
    cout << " my name is " << venus.name; 
    cout << "my size is " << venus.diameters; 
    
    venus.displaydata();

}