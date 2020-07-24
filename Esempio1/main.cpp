#include <iostream>
#include "lib1/func1.h"

using namespace std;

int main(){


    test *prova = new test();



    prova->add(10);

    cout<<prova->m_counter<<endl;

    cout <<prova->m_ip<<endl;

    cout<<"test"<<endl;

    cout<<"test"<<endl;


    return 0;
}