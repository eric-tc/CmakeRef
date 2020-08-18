#include "modelInterface.h"


namespace classification{


class ResNet50 : modelInterface{

    public:

    ResNet50();
    void preprocessing(int data);
    void postprocessing();
    void runmodel();

    int model;

};





}