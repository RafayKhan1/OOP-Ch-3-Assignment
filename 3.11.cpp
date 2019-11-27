#include <iostream>
#include <string>
using namespace std;
class MotorVehicle 
{
public:
   MotorVehicle(string m,string ft,int y) {
      setMake( m );
      setFuelType( ft );
      setYearOfManufacture( y );
   }
   void setMake( string m ) {
      make = m;
   }
   void setFuelType( string ft ) {
      fuelType = ft;
   }
   void setYearOfManufacture( int y ) {
      yearOfManufacture = y;
   }
   void setColor(string c ) {
      color = c;
   }
   void setEngineCapacity( int ec ) {
      engineCapacity = ec;
   }
   string getMake(){
      return make;
   }
   string getFuelType(){
      return fuelType;
   }
   int getYearOfManufacture(){
      return yearOfManufacture;
   }
   string getColor(){
      return color;
   }
   int getEngineCapacity(){
      return engineCapacity;
   }
   void displayCarDetails(){
      cout << "CAR DETAILS"
         << "\nMake:                " << make
         << "\nFuel type:           " << fuelType
         << "\nYear of manufacture: " << yearOfManufacture
         << "\nColor:               " << color
         << "\nEngine capacity:     " << engineCapacity
         << endl;
   }
private:
   string make;
   string fuelType;
   int yearOfManufacture;
   string color;
   int engineCapacity;
};
main() {
   MotorVehicle motorVehicle( "Honda Civic", "Diesel", 1972 );
   cout << "INITIAL ";
   motorVehicle.displayCarDetails();
   motorVehicle.setMake( "Civic hatchback" );
   motorVehicle.setFuelType( "Hybrid" );
   motorVehicle.setYearOfManufacture( 2017 );
   motorVehicle.setColor( "Blue" );
   motorVehicle.setEngineCapacity( 1600 );
   cout << "\nMODIFIED ";
   motorVehicle.displayCarDetails();
   return 0;
}
