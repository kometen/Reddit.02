/*
 * Shape.cpp
 *
 *  Created on: 26/01/2016
 *      Author: claus
 */

#include "Shape.hpp"

namespace gnome {

std::ostream& operator<<(std::ostream& lhs, const Shape& rhs) {
    return rhs.display(lhs);
}

Shape::~Shape() {
    // TODO Auto-generated destructor stub
}

} /* namespace gnome */
