// Ayush Yadav
// 24070123028

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any integer ";
    cin>>a;
    cout<<"Integer " <<a<< " and size is " <<sizeof(a)<< " bytes" << endl;

    float b;
    cout<<"Enter any number with decimal ";
    cin>>b;
    cout<<"Float " <<b<< " and size is " <<sizeof(b)<< " bytes"<< endl;

    string c;
    cout<<"Enter any word ";
    cin>>c;
    cout<<"String " <<c<< " and size is " <<sizeof(c)<< " bytes" << endl;

    double d;
    cout<<"Enter any number with bigger decimal ";
    cin>>d;
    cout<<"Double " <<c<< " and size is " <<sizeof(d)<< " bytes" << endl;

    char e;
    cout<<"Enter any letter ";
    cin>>e;
    cout<<"Charerecter " <<e<< " and size is " <<sizeof(e)<< " bytes" << endl;

    return 0;
}

// OUTPUT
// Enter any integer 11
// Integer 11 and size is 4 bytes
// Enter any number with decimal 3.14
// Float 3.14 and size is 4 bytes
// Enter any word Aditya
// String Aditya and size is 24 bytes
// Enter any number with bigger decimal 6.654323457643
// Double Aditya and size is 8 bytes
// Enter any letter A
// Charerecter A and size is 1 bytes
