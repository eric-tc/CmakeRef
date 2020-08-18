#include <iostream>


//classe interfaccia su come devono essere create le varie classi
class modelInterface{

public:

virtual void preprocessing(int data)=0;

virtual void runmodel()=0;

virtual void postprocessing()=0;

};