#ifndef POINT2D_H
#define POINT2D_H


class point2d {
   public:
      // Default constructor
      point2d();
      // Parametric constructor
      point2d(float nx, float ny);
      // Copy constructor
      point2d(const point2d &p);

      virtual ~point2d() {}
      // Getters:
      float getX() const { return this->x; }
      float getY() const { return this->y; }
      // Setters:
      void setX(float nx);
      void setY(float ny);
   protected:
      float x;
      float y;
};
#endif /* POINT2D_H */
