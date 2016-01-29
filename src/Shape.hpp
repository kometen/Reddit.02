/*
 * Shape.hpp
 *
 *  Created on: 26/01/2016
 *      Author: claus
 */

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <iostream>
#include "Point.hpp"

namespace gnome {

class Shape {   // Abstract class
public:
    virtual const float getArea() = 0;
    virtual std::ostream& display(std::ostream&) const = 0;

    friend std::ostream& operator<<(std::ostream&, const Shape&);
    virtual ~Shape();
};

} /* namespace gnome */

#endif /* SHAPE_HPP_ */
