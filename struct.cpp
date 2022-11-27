#include <iostream>
using namespace std;

int main () {

    struct {
        string fullname;
    }user1 , user2 , user3 ;

    cout << "USER 1 ENTER YOUR NAME " << endl;
    getline (cin , user1.fullname );
    cout << "USER 2 ENTER YOUR NAME " << endl;
    getline (cin , user2.fullname );
    cout << "USER 3 ENTER YOUR FULL NAME " << endl;
    getline (cin , user3.fullname );

    cout << "USER 1 ----" << user1.fullname << endl;
    cout << "USER 2 ----" << user2.fullname << endl;
    cout << "USER 3 ----" << user3.fullname << endl;
    return 0;
    
}