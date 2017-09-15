//
//  Analytic_Geometry_Plane.hpp
//  Higher_Mathematics
//
//  Created by Eliza on 15/09/2017.
//  Copyright © 2017 maggot99999. All rights reserved.
//

#ifndef Analytic_Geometry_Plane_hpp
#define Analytic_Geometry_Plane_hpp

namespace Plane {
  
  class _1D {
    private:
      int x;
    
    public:
      _1D(int x);
      int X();
      void X(int x);
  };
  
  class _2D {
  private:
    int x;
    int y;
    
  public:
    _2D(int x, int y);
    int X();
    int Y();
    void X(int x);
    void Y(int y);
  };
  
  class _3D {
  private:
    int x;
    int y;
    int z;
    
  public:
    _3D(int x, int y, int z);
    int X();
    int Y();
    int Z();
    void X(int x);
    void Y(int y);
    void Z(int z);
  };

}

#endif /* Analytic_Geometry_Plane_hpp */
