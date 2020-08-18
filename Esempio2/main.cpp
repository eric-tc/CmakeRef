#include <iostream>

using namespace std;

#include "src/classification.h"

using namespace classification;

//classe Custom posso cambiare solo il preprocessing lasciando invariato il resto
//Link lista funzioni che possono essere usate
class customResnet : ResNet50{

    public:

    customResnet(){

        cout<<"costruttoreCustom"<<endl;
    }
    
    
    void preprocessing(int data){

        ResNet50::model= data;

    }
};


int main(){
    
    ResNet50 *resnet;    
    
    resnet = new ResNet50();

    resnet->preprocessing(1);
    cout<<resnet->model<<endl;
    cout<< "test"<< endl;

    customResnet cRes;

    cRes.preprocessing(1);

    return 0;
}