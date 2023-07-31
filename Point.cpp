#include "Point.hpp"
#include <cmath>

Point::Point(double x, double y)
{
  this->x = x;
  this->y = y;
}

Point::Point(){
    
}

double Point::distance_to_origin()
{
  return std::sqrt(std::pow(x, 2)  + std::pow(y, 2));
}

double Point::distance_to_point(Point p)
{
  return std::sqrt(std::pow(x - p.x(), 2)  + std::pow(y - p.y(), 2));
}