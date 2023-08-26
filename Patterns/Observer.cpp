#include "Observer.h"

void PersonCustomer::Update(const string& name, DeviceType type)
{
	if (type == DeviceType::Phone)
	{
		cout << "Person customer gona by a new " << name << endl;
		Happy();
	}
	else
	{
		cout << "Person not intrested " << endl;
	}
}

void PersonCustomer::Happy()
{
	cout << "Cool new phone! " << endl;
}

void ItEmployer::Update(const string& name, DeviceType type)
{
	if (type == DeviceType::Laptop)
	{
		cout << "Employer gonna by a new " << name << endl;
		Happy();
	}
	else
	{
		cout << "Employer not intrested " << endl;
	}
}

void ItEmployer::Happy()
{
	cout << "Now i'm gonna work faster! " << endl;
}

void ProductCompany::Update(const string& name, DeviceType type)
{
	if (type == DeviceType::Server)
	{
		cout << "ProductCompany gonna by a new " << name << endl;
		Happy();
	}
	else
	{
		cout << "ProductCompany not intrested " << endl;
	}
}

void ProductCompany::Happy()
{
	cout << "Our busines is growing up! " << endl;
}

void EventManager::Subscribe(IEventListner* listner)
{
	subscribers.push_back(listner);
}

void EventManager::Unsubscribe(IEventListner* listner)
{
	subscribers.remove(listner);
}

void EventManager::Broadcast(const string& name, DeviceType type)
{
	for (auto listner : subscribers)
	{
		listner->Update(name, type);
	}
}

TechStore::TechStore()
	: eventManager(new EventManager())
{
}

TechStore::~TechStore()
{
	delete eventManager;
}

void TechStore::SubscribeCustomer(BaseCustomer* customer)
{
	eventManager->Subscribe(customer);
}

void TechStore::UnsubscribeCustomer(BaseCustomer* customer)
{
	eventManager->Unsubscribe(customer);
}

void TechStore::NewProductArrived(const string& name, DeviceType type)
{
	cout << "New product in a store: " << name << endl;
	eventManager->Broadcast(name, type);
}
