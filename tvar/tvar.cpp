#include <string>

class Tvar
{
public:
  Tvar() {};
  virtual ~Tvar() {};
  virtual float obvod() = 0;
  virtual float obsah() = 0;
  virtual std::string jmeno() = 0;
};

class Kruh : public Tvar
{
public:

  Kruh() = default;

  Kruh(float r) : radius( r ) {}

  void setRadius( float r ) { radius = r; }

  float obvod(){ return 2*PI*radius; }

  float obsah(){ return PI*radius*radius; }

  std::string jmeno(){ return name; }

private:

  float radius;

  float PI = 3.14156;

  std::string name = "kruh";
};

class Ctverec : public Tvar
{

public:

  Ctverec() = default;

  Ctverec( float side ) : side( side ) {}
  
  void setSideLength( float a ) { side = a; }

  float obvod(){ return 2*side; }

  float obsah(){ return side*side; } 

  std::string jmeno(){ return name; }
  
private:

  float side;

  std::string name = "Ctverec";
};

int main()
{

   return 0;
};
