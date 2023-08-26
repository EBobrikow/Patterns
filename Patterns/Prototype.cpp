#include "Prototype.h"


double Shape::GetArea()
{
    return 0.0;
}

Square::Square()
    : sideA(5.0f)
{
}

Shape* Square::Clone()
{
    Square* newSquare = new Square();
    newSquare->sideA = this->sideA;
    return newSquare;
}

double Square::GetArea()
{
    return sideA * sideA;
}

void Square::SetSide(const double& val)
{
    sideA = val;
}

Circle::Circle()
    : radius(3.0f)
{
}

Shape* Circle::Clone()
{
    Circle* newCircle = new Circle();
    newCircle->radius = this->radius;
    return newCircle;
}

double Circle::GetArea()
{
    return 3.1415 * (radius * radius);
}

void Circle::SetRadius(const double& val)
{
    radius = val;
}
