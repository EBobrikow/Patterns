#pragma once


// Vehicle interface, provide method to deliver cargo
class IVehicle
{
public:
	virtual void DeliverCargo() = 0;

};

// vehicle classes implementaion
class Car : public IVehicle
{
public:

	Car() {};
	virtual ~Car() {};
	virtual void DeliverCargo() override;

};

class Ship : public IVehicle
{
public:

	Ship() {};
	virtual ~Ship() {};
	virtual void DeliverCargo() override;

};

class Airplane : public IVehicle
{
public:

	Airplane() {};
	virtual ~Airplane() {};
	virtual void DeliverCargo() override;

};

// Factory interface, provide delivery method and creation of proper vehicle
class IDeliveryFactory
{
public:

	virtual IVehicle* CreateVehicle() = 0;
	virtual void Deliver();
	
};

// Delivery method classes, provide the construction of proper vehicle
class CarDelivery : public IDeliveryFactory
{
public:
	virtual IVehicle* CreateVehicle() override;

};

class ShipDelivery : public IDeliveryFactory
{
public:
	virtual IVehicle* CreateVehicle() override;

};

class SkyDelivery : public IDeliveryFactory
{
public:
	virtual IVehicle* CreateVehicle() override;

};