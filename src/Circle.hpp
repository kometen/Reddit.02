/*
 * Circle.hpp
 *
 *  Created on: 29/01/2016
 *      Author: claus
 */

#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include "Shape.hpp"

namespace gnome {

class Circle: public Shape {
private:
    Point center;
    Point edge;
    const float radius;
    const float area;
    const float circumference;
    const int xDistance();
    const int yDistance();
    const float getRadius();
    const float getArea();
    const float getCircumference();
public:
    Circle();
    Circle(Point&, Point&);
    virtual std::ostream& display(std::ostream&) const;
    virtual ~Circle();
};

} /* namespace gnome */

#endif /* CIRCLE_HPP_ */
