#include<iostream>
using namespace std;

class Resource {
    private:
    int* data;
    int id;

    public:
    Resource(int i, int val) {
        id = i;
        data = new int(val);
        cout << "Resource " << id << " acquired with value " 
        << *data << endl;
    }
    ~Resource() {
        delete data;  //Release heap memory
        cout << "Resource " << id << " released" << endl;
    }
    void show() {
        cout << "Resource " << id << "; " << *data << endl;
    }
};
void function() {
    Resource local(2, 200);
    local.show();  //Loal will be destroyed 
    //automatically when fucntion ends
}
int main () {
    Resource r1(1, 100);
    r1.show();

    function();

    Resource* r3 = new Resource(3, 300);
    r3->show();
    delete r3;  //Manually release heap memory

    cout << "End of main" << endl;  //r1 destroyd automatically

    return 0;
}