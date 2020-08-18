#include "classification.h"
using namespace std;

namespace classification{


ResNet50::ResNet50(){

    cout<<"costruttore"<<endl;
    
}

void ResNet50::postprocessing(){

    cout<<"resnetPost"<<endl;


}

void ResNet50::runmodel(){

    cout<<"resnetRun"<<endl;


}


void ResNet50::preprocessing(int data){

    ResNet50::model=data;

    cout<<"resnetPre"<<endl;

}



}