// Compare with the C++ equivalent in circle.hpp & circle.cpp

class Circle {
  private double x, y;
  private double radius;

  public Circle(double r) {
    this(0, 0, r);
  }

  public Circle(double x, double y, double r) {
    if (r <= 0.0) {
      throw new IllegalArgumentException("radius must be > 0");
    }
    this.x = x;
    this.y = y;
    radius = r;
  }

  public double getX() {
    return x;
  }

  public double getY() {
    return y;
  }

  public double getRadius() {
    return radius;
  }

  public boolean containsPoint(double x, double y) {
    double dx = this.x - x;
    double dy = this.y - y;
    return Math.sqrt(dx*dx + dy*dy) <= radius;
  }

  public double area() {
    return Math.PI * radius * radius;
  }

  public double perimeter() {
    return 2.0 * Math.PI * radius;
  }
}
