//
//  Analytic_Geometry_Plane.cpp
//  Higher_Mathematics
//
//  Created by Eliza on 15/09/2017.
//  Copyright © 2017 maggot99999. All rights reserved.
//

#include "Analytic_Geometry_Plane.hpp"
#include <iostream>

//Dot with 1 coordinate
Plane::_1D::_1D(int x) : x(x){}

int Plane::_1D::X(){
  return this->x;
}

void Plane::_1D::X(int x){
  this->x = x;
}

//Dot with 2 coordinates
Plane::_2D::_2D(int x, int y) : x(x), y(y){}

int Plane::_2D::X(){
  return this->x;
}

int Plane::_2D::Y(){
  return this->y;
}

void Plane::_2D::X(int x){
  this->x = x;
}

void Plane::_2D::Y(int y){
  this->y = y;
}

//Dot with 3 coordinates
Plane::_3D::_3D(int x, int y, int z) : x(x), y(y), z(z){}

int Plane::_3D::X(){
  return this->x;
}

int Plane::_3D::Y(){
  return this->y;
}

int Plane::_3D::Z(){
  return this->z;
}

void Plane::_3D::X(int x){
  this->x = x;
}

void Plane::_3D::Y(int y){
  this->y = y;
}

void Plane::_3D::Z(int z){
  this->z = z;
}
