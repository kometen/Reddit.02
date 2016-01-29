/*
 * Circle.cpp
 *
 *  Created on: 29/01/2016
 *      Author: claus
 */

#include <cmath>
#include "Circle.hpp"

constexpr float pi = 3.1415926535897932385;

namespace gnome {

Circle::Circle() :
        center(Point{0, 0}),
        edge(Point{0, 0}),
        radius{0},
        area{0},
        circumference{0}
        { }

Circle::Circle(const Point& center, const Point& edge) :
        center(center),
        edge(edge),
        radius{getRadius()},
        area{getArea()},
        circumference{getCircumference()}
        { }

std::ostream& Circle::display(std::ostream& os) const {
    return os << "Circle, radius: " << radius << ", area: " << area << ", circumference: " << circumference;
}

const int Circle::xDistance() {
    return abs(edge.x() - center.x());
}

const int Circle::yDistance() {
    return abs(edge.y() - center.y());
}

const float Circle::getArea() {
    return pi * radius * radius;
}

const float Circle::getRadius() {
    return sqrt(xDistance() * xDistance() + yDistance() * yDistance());
}

const float Circle::getCircumference() {
    return 2 * pi * getRadius();
}

Circle::~Circle() {
    // TODO Auto-generated destructor stub
}

} /* namespace gnome */
