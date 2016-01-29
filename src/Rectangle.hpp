/*
 * Rectangle.h
 *
 *  Created on: 29/01/2016
 *      Author: claus
 */

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "Shape.hpp"

namespace gnome {

class Rectangle: public Shape {
private:
    Point p1;
    Point p2;
    unsigned int length;
    unsigned int width;
    const unsigned int perimeter;
    const float area;
    const unsigned int xDistance();
    const unsigned int yDistance();
    const float getArea();
    const unsigned int getPerimeter();

public:
    Rectangle();
    Rectangle(const Point&, const Point&);
    virtual std::ostream& display(std::ostream&) const;
    virtual ~Rectangle();
};

} /* namespace gnome */

#endif /* RECTANGLE_HPP_ */
