#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"

#define ARRAY_SIZE 5
using namespace std;

double calcTotalArea(Shape *shapeArray[], int num_shapes)
{
    double total_area = 0.0;
    for (int i = 0; i < num_shapes; i++)
    {
        total_area += shapeArray[i]->getArea();
        cout << "ShapeArray.getArea = " << shapeArray[i]->getArea() << endl;   //NOTE: This is calling the getArea() function in the SHAPE class!!!
        cout << "At i = " << i << " totalArea is " << total_area << endl << endl;
    }
}

int main () {

    // Create a rectangle
    Rectangle rectangle;
    rectangle.setValues(4,6);

    // Print some info about it
    std::cout << "The area of box is " << rectangle.getArea() << std::endl;
    cout << "The perimeter of shape is " << rectangle.getPerimeter() << endl;
    std::cout << "It is a " << rectangle.getDescription() << std::endl;

    // Does it make sense to create a shape like this ?
    Circle circle;
    circle.setValues(5);

    std::cout << "The area of shape is " << circle.getArea() << std::endl;
    cout << "The perimeter of shape is " << circle.getPerimeter() << endl;
    std::cout << "It is a " << circle.getDescription() << std::endl;

    // Can you implement the Triangle class as a sub-class of Shape?

    Triangle triangle;
    triangle.setValues(2,2);

    cout << "The area of the shape is " << triangle.getArea() << endl;


    // How would we use the Shape class in our code to be shape agnostic
    cout << endl;



    Triangle triangle2;
    triangle.setValues(2,2);
    Circle circle2;
    circle.setValues(2);
    //Create array of shapes

    Shape* shapeArray[ARRAY_SIZE];
    shapeArray[0] = &triangle;
    shapeArray[1] = &rectangle;
    shapeArray[2] = &circle;
    shapeArray[3] = &triangle2;
    shapeArray[4] = &circle2;

    calcTotalArea(shapeArray, ARRAY_SIZE);

}
