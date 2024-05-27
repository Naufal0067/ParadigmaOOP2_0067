#include <Iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    //virtual void() {
        //cout<<"Pesan dari seseorang"<<endl;
    //}
};

class joko :public seseorang {
public:
    void pesan() {
        cout << "Pesan dari joko" << endl;
    }
};