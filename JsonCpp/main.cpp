#include <iostream>
#include <json/json.h>
#include <fstream>

using namespace std;

int main()
{

    Json::Value root;
    Json::Value data;

    Json::Value content(Json::arrayValue);
    content.append("a");
// root["res"]=content;
// cout << root.toStyledString() <<endl;


    constexpr bool shouldUseOldWay = false;
    int i[4];
    
    root["action"] = "run";
    data["number"] = content;
    root["data"] = data;

    Json::StreamWriterBuilder builder;
    const std::string json_file = Json::writeString(builder, root);
    std::cout << json_file << std::endl;


    ofstream myfile;
    myfile.open ("example.txt",std::ios::in | std::ios::out | std::ios::app);
    myfile<<json_file+ "\n";
    myfile.close();

    cout<<"test"<<endl;
    return 0;
}