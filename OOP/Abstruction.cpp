

#include <iostream>
using namespace std; 

//Abstraction is the process of hiding the implementation details and showing only the 
// functionality to the user. In C++, abstraction can be achieved using
//  abstract classes and pure virtual functions.
   class Car {
       public:
       virtual void startEngine() =0;
       virtual void shiftGear(int gear) =0;
       virtual void accelerate() =0;
       virtual void brake() =0;
       virtual void stopEngine() =0;
       virtual ~Car(){
           cout << "Car destructor called" << endl;
       }  
   };
   
   
   class SportCar : public Car {
        public :
        
        string brand;
        string model;
        bool isEngineOn;
        int currentSpeed;
        int currentGear;
        
        
        SportCar(string b, string m){
            this->brand = b;
            this->model = m;
            isEngineOn = false;
            currentGear =0 ;
            currentSpeed =0;
        }
        
        void startEngine() {
            isEngineOn = true;
            cout << brand << " " << model << "    : enigne starat with a roar"<<endl;
        }
        
        
        void shiftGear(int gear) {
            if(!isEngineOn){
            cout << brand << " " << model << "    : Engine is off."<<endl;
            return;
            }
            currentGear = gear;
               cout << brand << " " << model << "    : shift to gear "<<currentGear<<endl;
        }
        
        
         void accelerate() {
               if(!isEngineOn){
            cout << brand << " " << model << "    : Engine is off."<<endl;
            return;
            }
            currentSpeed += 20;
              cout << brand << " " << model << "    : Accelerating to "<<currentSpeed<<endl;
        }
        
        
        void brake(){
            currentSpeed -=20;
            if(currentSpeed < 0) currentSpeed =0;
            
               cout << brand << " " << model << "    :Braking speed is now "<<currentSpeed<<endl;

        }
        
        
        void stopEngine(){
            isEngineOn= false;
            currentSpeed=0;
            currentGear=0;
        
               cout << brand << " " << model << "    : engine turned off."<<currentGear<<endl;
        
            
        }
        
   };


   int main(){
  
  
  
  Car* myCar = new SportCar("Ford" , "mustang");
  
  myCar->startEngine();
  myCar->shiftGear(1);
  myCar->accelerate();
  myCar->shiftGear(2);
  myCar->brake();
  myCar->stopEngine();
  
  delete myCar;
  return 0;


     }
  