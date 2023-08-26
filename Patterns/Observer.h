#pragma once
#include <string>
#include <iostream>
#include <list>
using namespace std;

enum DeviceType
{
	Phone,
	Laptop,
	Server
};

class IEventListner
{
public:
	virtual void Update(const string& name, DeviceType type) = 0;
};

class BaseCustomer : public IEventListner
{
public:
	BaseCustomer() {};
	virtual ~BaseCustomer() {};
	virtual void Happy() = 0;
};

class PersonCustomer : public BaseCustomer 
{
public:
	PersonCustomer() {};
	virtual ~PersonCustomer() {};
	virtual void Update(const string& name, DeviceType type) override;
	virtual void Happy() override;
};

class ItEmployer : public BaseCustomer
{
public:
	ItEmployer() {};
	virtual ~ItEmployer() {};
	virtual void Update(const string& name, DeviceType type) override;
	virtual void Happy() override;
};

class ProductCompany : public BaseCustomer
{
public:
	ProductCompany() {};
	virtual ~ProductCompany() {};
	virtual void Update(const string& name, DeviceType type) override;
	virtual void Happy() override;
};

class EventManager
{
public:
	EventManager() {};
	virtual ~EventManager() { subscribers.clear(); };
	void Subscribe(IEventListner* listner);
	void Unsubscribe(IEventListner* listner);

	void Broadcast(const string& name, DeviceType type);

private:
	list<IEventListner*> subscribers;
};

class TechStore
{
public:
	TechStore();
	virtual ~TechStore();
	void SubscribeCustomer(BaseCustomer* customer);
	void UnsubscribeCustomer(BaseCustomer* customer);

	void NewProductArrived(const string& name, DeviceType type);

private:
	EventManager* eventManager;
};