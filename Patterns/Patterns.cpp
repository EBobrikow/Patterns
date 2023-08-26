// Patterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include "Singleton.h"
#include "Factory.h"
#include "Prototype.h"
#include "Adapter.h"
#include "Facade.h"
#include "Observer.h"
#include "Momento.h"

using namespace std;

int main()
{
    cout << "Singleton=============================================== " << endl;

    Singleton* obj = Singleton::GetObj();
    cout << obj->classFieldStr << endl;
    cout << obj->classFieldNum << endl;

    obj->classFieldNum = 10234;

    Singleton* newObj = Singleton::GetObj();
    cout << "New single object" << endl;
    cout << obj->classFieldNum << endl;

   /* cout << "Factory=============================================== " << endl;

    string CargoManifest = "Sky";
    IDeliveryFactory* delivery = nullptr;

    if (CargoManifest == "Sea")
    {
        delivery = new ShipDelivery();
    }
    else if (CargoManifest == "Land")
    {
        delivery = new CarDelivery();
    }
    else if (CargoManifest == "Sky")
    {
        delivery = new SkyDelivery();
    }
    
    if (delivery != nullptr)
    {
        delivery->Deliver();
    }
    
    delete delivery;

    cout << "Prototype=============================================== " << endl;
   

    Shape* circle = new Circle();
    cout << "Circle area = " << circle->GetArea() << endl;
    Circle* circleClone = dynamic_cast<Circle*>(circle->Clone());
    if (circleClone != nullptr)
    {
        circleClone->SetRadius(7.0f);
        cout << "Circle clone area after update = " << circleClone->GetArea() << endl;
    }
    Shape* square = new Square();
    cout << "Square area = " << square->GetArea() << endl;
    Square* sqaureClone = dynamic_cast<Square*>(square->Clone());
    if (sqaureClone != nullptr)
    {
        sqaureClone->SetSide(12.0f);
        cout << "Square clone area after update = " << sqaureClone->GetArea() << endl;
    }

    delete square;
    delete sqaureClone;
    delete circle;
    delete circleClone;

    cout << "Adapter=============================================== " << endl;
  

    JSONString inData;
    inData.JData = "'Title' : name";
    cout << "Json income = " << inData.JData << endl;

    XMLService* lib = new XMLService();
    IClientInterface* adapt = new Adapter(lib);
    adapt->ProcessJson(inData);
 
    delete adapt;
    delete lib;

    cout << "Facade=============================================== " << endl;

    string path = "../funnyVideo.mpeg";
    Facade* face = new Facade();
    face->ConvertMPEGtoMP4(path);
    delete face;

    cout << "Observer=============================================== " << endl;
   

    TechStore* store = new TechStore();
    PersonCustomer* person = new PersonCustomer();
    ItEmployer* worker = new ItEmployer();
    ProductCompany* company = new ProductCompany();

    store->SubscribeCustomer(person);
    store->SubscribeCustomer(worker);
    store->SubscribeCustomer(company);

    store->NewProductArrived("IPhone 13", DeviceType::Phone);
    cout << "=============================================== " << endl;
    store->NewProductArrived("Asus Rog", DeviceType::Laptop);
    cout << "=============================================== " << endl;
    store->NewProductArrived("IBM Max", DeviceType::Server);
    cout << "=============================================== " << endl;


    delete store;
    delete person;
    delete worker;
    delete company;

    cout << "Momento=============================================== " << endl;
    
    int operation = 1;
    Editor* editor = new Editor();
    string input = "";
    while (operation > 0)
    {
        system("CLS");
        cout << "Current text = " << editor->GetText() << endl;
        cout << "Choose comand" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Enter text" << endl;
        cout << "2. Undo text" << endl;
        cin >> operation;
        switch (operation)
        {
        case 0:
            continue;
            break;
        case 1:
            system("CLS");
            cout << "Enter text" << endl;
            cin  >> input;
            editor->SetText(input);
            break;
        case 2:
            editor->Undo();
            break;
        default:
            break;
        }
    }

    delete editor;*/
   
}

