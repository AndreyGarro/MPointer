#include <iostream>
#include "Server/Server.h"
//#include "Server/JSONMaker.h"
#include <document.h>
#include <string.h>
#include <include/rapidjson/stringbuffer.h>
#include <include/rapidjson/prettywriter.h>

using namespace std;

int main() {

//    JSONMaker::crearJSON();

//    rapidjson::Document document;
//
//    document.SetObject();
//
//    rapidjson::Document::AllocatorType& alloc = document.GetAllocator();
//
//    document.AddMember("dato", 2, alloc);
//    document.AddMember("type", "int", alloc);
//
//    rapidjson::StringBuffer stringBuffer;
//    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
//
//    document.Accept(writer);
//
//    printf(stringBuffer.GetString());
//
    Server * server = new Server();

    server->run(2048);

//    void * mem;
//
//    mem = (char*)malloc(1024);
//
//    int cola;
//
//    int * g = (int*) (mem);
//
//    mem += 4;

//    *g = 2;
//
//    char * f = (char*) (mem + 4);
//
//    *f = 'c';
//
//    int j = *((int*)(mem));
//
//    std::cout<<g<<" "<< *g << " " << *((int*)(mem)) <<j<<endl;
//
//    std::cout<<&f<< " " << *f<<" "<< *((char*)(mem + 4))<<endl;
//
//    std::cout<<mem<<endl;
//
//    int t[25];
//
//    string hola = typeid(t).name();
////
//
//    if (hola == typeid(t).name()) {
//        std::cout<<typeid(t).name()<<hola<<endl;
//    }
//    else {
//        std::cout<<typeid(t).name()<<endl;
//    }
//

//    string s = "";
//    std::cout<<typeid(string).name()<<endl;
//    std::cout<<typeid(s).name()<<endl;
//    std::cout<< sizeof(string);



//    Memoria * memoria = new Memoria(2048);
//
//    rapidjson::Document doc;
//    doc.SetObject();
//
//    rapidjson::Document::AllocatorType& allocator = doc.GetAllocator();
//
//    doc.AddMember("solicitud", "reservar", allocator);
//    doc.AddMember("tipo", rapidjson::Value().SetString(typeid(std::string).name(), allocator), allocator);
//
//
//    rapidjson::StringBuffer stringBuffer;
//    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
//
//    doc.Accept(writer);
//
//    std::string hola = stringBuffer.GetString();
//    std::string respuesta = memoria->verificarSolicitud(hola);
//
//    std::cout<<respuesta<< endl;
//
//    rapidjson::Document doc2;
//    doc2.SetObject();
//    doc2.AddMember("solicitud", "asignar", allocator);
//    doc2.AddMember("id", "S-0", allocator);
//    doc2.AddMember("dato", "HOla", allocator);
//
//    rapidjson::StringBuffer stringBuffer2;
//    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer2(stringBuffer2);
//
//    doc2.Accept(writer2);
//
//    hola = stringBuffer2.GetString();
//    respuesta = memoria->verificarSolicitud(hola);
//
//    cout<<respuesta<<endl;
//
//    hola = stringBuffer.GetString();
//
//    respuesta = memoria->verificarSolicitud(hola);
//
//    cout<<respuesta<<endl;
//
//    rapidjson::Document doc3;
//    doc3.SetObject();
//    doc3.AddMember("solicitud", "retornar", allocator);
//    doc3.AddMember("id", "S-0", allocator);
//
//    rapidjson::StringBuffer stringBuffer3;
//    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer3(stringBuffer3);
//
//    doc3.Accept(writer3);
//
//    hola = stringBuffer3.GetString();
//
//    respuesta = memoria->verificarSolicitud(hola);
//
//    cout<<respuesta<<endl;

}