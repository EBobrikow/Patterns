#include "Factory.h"
#include <iostream>
using namespace std;

void Car::DeliverCargo()
{
	cout << "Cargo moved by car" << endl;
}

void IDeliveryFactory::Deliver()
{
	IVehicle* vehicle = CreateVehicle();
	vehicle->DeliverCargo();
}

IVehicle* CarDelivery::CreateVehicle()
{
	Car* carVehicle = new Car();
	return carVehicle;
}

void Ship::DeliverCargo()
{
	cout << "Cargo moved by ship" << endl;
}

IVehicle* ShipDelivery::CreateVehicle()
{
	Ship* ship = new Ship();
	return ship;
}


void Airplane::DeliverCargo()
{
	cout << "Cargo moved by airplane" << endl;
}

IVehicle* SkyDelivery::CreateVehicle()
{
	Airplane* airplane = new Airplane();
	return airplane;
}
