#include <iostream>
#include <math.h>
#include <vector>

int subtract (int x, int y){
  return x-y;
}

int multiply (int x, int y){
  return x*y;
}

int divide (int x, int y){
  return x/y;
}

class Circle
{
  public:
    float radius;

    
    void printArea(){
      float area = radius * radius * M_PI;
      std::cout << "Area:" << area << std::endl;
    }
};

//Problem1

class Point{
  public:
    double x;
    double y;

  double distance_to_origin(){
    return sqrt(x * x + y * y);
  }

  double distance_to_point(const Point other) {
      double dx = x - other.x;
      double dy = y - other.y;
      return std::sqrt(dx * dx + dy * dy);
  }
};

class Line{
  public:
    Point p1, p2;

    double distance_of_line() {
      return p1.distance_to_point(p2);
    }
  /* skipping 5 for now
    double distance_to_point(const Point other)){
      
      
    }
    */
};

class Triangle{
  public:
    Point p1, p2, p3;
    
    double area(Point p1, Point p2, Point p3) {
      double side1 = sqrt (pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
      double side2 = sqrt (pow(p2.x - p3.x, 2) + pow(p2.y - p3.y, 2));
      double side3 = sqrt (pow(p3.x - p1.x, 2) + pow(p3.y - p1.y, 2));
      double semi = (side1 + side2 + side3) / 2;
    return sqrt ( semi * (semi - side1) * (semi - side2) * (semi - side3));
    }
};

class Polygon {
public:
    std::vector<Point> points;

    double allArea = 0;

    double alltriarea(std::vector<Point> points) {
      for (int i = 0; i < points.size() - 2; i++) {
        Triangle triangle;
        triangle.p1 = points[0];
        triangle.p2 = points[i + 1];
        triangle.p3 = points[i + 2];

        allArea += triangle.area(triangle.p1, triangle.p2, triangle.p3);
      }
      return allArea;
  }

  double perimiter(std::vector<Point> points) {
    double Perimeter = 0;
    for (int i = 0; i < points.size()-1; i++){
      Perimeter += points[i].distance_to_point (points[i+1]);
    }
      Perimeter += points[0].distance_to_point(points[points.size()-1]);
    return Perimeter;
  }
} ;

class AUV {
  public:
  std::string name;
  Point position;
  double depth;
  double heading;
  array <double> speed;
  double angular_speed;
  double speed;

  double step ()
  
  

}


int main()
{

  //first thing

  int x = 5;
  int y = 7;

  int z = subtract(x, y);
  int b = multiply(x, y);
  int n = divide(x, y);

  std::cout << z <<   std::endl;
  std::cout << b <<   std::endl;
  std::cout << n <<   std::endl;

  //Circle
  Circle tom;
  tom.radius = 5;
  tom.printArea();


  //Problem 1
  Point a;
  a.x = 4;
  a.y = 5;
  a.distance_to_origin();

  //Problem 

  Triangle erin;
    erin.p1 = {3, 4};
    erin.p2 = {4, 5};
    erin.p3 = {1, 3};
    double triangleArea = erin.area(erin.p1, erin.p2, erin.p3);
    std::cout << "Triangle Area: " << triangleArea << std::endl;
    

  //Problem 7

  Polygon g;
  g.points = {{0, 1}, {1, 2}, {2, 2}, {3, 1}, {2, 0}, {1, 0}};
  double finalArea = g.alltriarea(g.points);
  
  std::cout << "final area: " << finalArea << std::endl;

  double finalPerimeter = g.perimiter(g.points);
  std::cout << "perimeter: " << finalPerimeter << std::endl;

  return 0;

  
  
 

  
  

  /*std::cout << "Albert 115" << std::endl;

   int x = 2;
   int y = 4;
   int z = 6;
   int w = 8;
   int v = 10;



  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;
  std::cout << "The sum of " << x << " and " << y << " and " << z << " is " << x + y + z << std::endl;
  std::cout << "The product of " << x << " and " << y << " and " << z << " and " <<v<< " is " << x*y*z*w << std::endl;
  std::cout << "The division of " << x << " and " << y << " and " <<v<< " is " << x/y/v << std::endl;

  return 0;*/

}



