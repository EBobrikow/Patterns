#pragma once

// Abstract method clone create a copy of object. Copying the private properties that not possible if we try to make copy outside the class
class Shape 
{
public:
	Shape() {};
	virtual ~Shape() {};
	virtual Shape* Clone() = 0;

	virtual double GetArea();

};

class Square : public Shape
{
public:
	Square();
	virtual ~Square() {};
	virtual Shape* Clone() override;

	virtual double GetArea() override;
	void SetSide(const double& val);

private:

	double sideA;

};

class Circle : public Shape
{
public:
	Circle();
	virtual ~Circle() {};
	virtual Shape* Clone() override;

	virtual double GetArea() override;
	void SetRadius(const double& val);

private:

	double radius;

};