#include <iostream>

class Kruh
{
public:

  Kruh() = default;

  Kruh(float r) : radius( r ) {}

  void setRadius( float r ) { radius = r; }

  float spocitejPlochu(){ return 2*PI*radius; }

  float spocitejObvod(){ return PI*radius*radius; }

  void vypisUdaje(){ std::cout << "Radius je: " << radius << std::endl; }

private:

  float radius;

  float PI = 3.14156;
};

int main()
{
   float prvniRadius = 2;
   Kruh prvniKruh;
   prvniKruh.setRadius( prvniRadius );

   float druhyRaidus = 4;
   Kruh druhyKruh( druhyRaidus );
   std::cout << "Plocha kruhu:" << prvniKruh.spocitejPlochu() << std::endl;;
   std::cout << "Obvod kruhu:" << prvniKruh.spocitejObvod() << std::endl;

   druhyKruh.vypisUdaje();

   // BONUS: radius kruhu bude sablonovy parametr, a udela pole kruhu a pro kazdy kruh spocita vse

   return 0;
}
