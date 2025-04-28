#include <iostream>
using namespace std;

class menghitungpersegipanjang
{
    public : 
    float panjang; float lebar; float luas;
    void inputData()
    {
        cout << "input panjang :" ;
        cin >> panjang;
        cout << "input lebar :" ;
        cin >> lebar;
    }


    void menghitungluas(){
    luas = panjang * lebar;
    cout << "luas persegi panjang : " << luas << endl;
    }

    void output(){
        cout << "luas persegi panjang =" << luas << endl;


    }


};
    





int main()
{
    menghitungpersegipanjang per;
    per.inputData();
    per.menghitungluas();
    per.output();
    return 0;

}