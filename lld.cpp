#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <ctime>


using namespace std;

class Payment { 

public:
    virtual Payment() {}
    virtual float calculateAmount(float cost) = 0;
};

class CashPayment : public Payment {

public:
    float calculateAmount(float cost) override {
        return cost;
    }
};

class CardPayment : public Payment {

public:
    float calculateAmount(float cost) override {
        // implementation for card payment
    }
};

class ParkingTicket {

public:
    virtual ParkingTicket() {}
    virtual void updateTotalCost() = 0;
    virtual void updateVehicleExitTime(time_t vehicleExitTime) = 0;
};

class ParkingSpace {

public:
    virtual ParkingSpace() {}
    virtual double calculateParkingCost(time_t entryTime, time_t exitTime) = 0;
};

class BikeParkingSpace : public ParkingSpace {

public:
    double calculateParkingCost(time_t entryTime, time_t exitTime) override {
        // implementation for bike parking cost calculation
    }
    int freeParkingSpace(){
        return availaibleFreeSpots;
    }
};

class CarParkingSpace : public ParkingSpace {

public:
    double calculateParkingCost(time_t entryTime, time_t exitTime) override {
        // implementation for car parking cost calculation
    }
     int freeParkingSpace(){
        return availaibleFreeSpots;
    }
};

class PaymentInfo {

public:
    int amount;
    int transactionId;
    ParkingTicket parkingTicket;
};

class ParkingFloor {

public:
    int currentFloorNumber;
    vector<ParkingSpace*> parkingSpaces;
    map<int> freeSpotsMap;
    virtual void allotParking()=0;

    string showFreeSpot(){// return the free spot availaible
    }

    ParkingDisplayBoard parkingDisplayBoard;


};

class AddParkingFloor: public ParkingFloor{
    int currentFloorNumber;
    public:
     void addParkingFloor(){
         currentFloorNumber++;
     }
};

class ModifyParkingSpot: public ParkingFloor{
    vector<string> parkingSpaces;
    public:
     void ModifyParkingSpot(string newSpace){
         parkingSpaces.push_back(newSpace);
     }
};

class Gate {

public:
    int gateId;
    ParkingAttendant* parkingAttendant;
};

class Entrance : public Gate {

public:
    virtual Entrance() {}
    virtual getParkingTicket(Vehicle* vehicle) = 0;
};

class Exit : public Gate {
    ParkingAttendant parkingAttendant;
    PaymentType paymentType;
public:
    virtual Exit() {}
    virtual payForParking( PaymentType paymentType) = 0;
};



class ParkingSpaceTypeCompact{
        virtual ParkingSpaceTypeCompact(){}=0;
};

class ParkingSpaceTypeLarge{
        virtual ParkingSpaceTypeLarge(){}=0;
};

class ParkingSpaceTypeHandicapped{
        virtual ParkingSpaceTypeHandicapped(){}=0;
};

class ParkingSpaceType : public ParkingSpaceTypeHandicapped,ParkingSpaceTypeCompact,ParkingSpaceTypeLarge{

};

class ParkingLot {

public:
    string parkingLotName;
    Address address;
    vector<ParkingFloor*> parkingFloors;
    vector<Entrance> entrances;
    vector<Exit> exits;

    virtual void isParkingSpaceAvailableForVehicle()=0;
    virtual addParkingFloor(void) {} = 0;
};


class Person{
    public: 
    string name;
    string email;
};

class Customer : public Person{
    public :
     Vehicle vehicle;
     string vehicleNumber;

     Payment payment;
     void makePayment(){
         
     }
};

class Worker : public Person {

public:
    
    string empId;
    string password;
    Address address;
    int salary;
    virtual setSalary() = 0;
};

class Admin : public Worker {
    int numberOfParkingFloors;
public:
    virtual void addParkingFloor(ParkingLot* parkingLot, ParkingFloor* floor);
    virtual void addParkingSpace(ParkingFloor* floor, ParkingSpace* parkingSpace);
    virtual void addParkingDisplayBoard(ParkingFloor* floor, ParkingDisplayBoard* parkingDisplayBoard);
};


class ParkingAttendant : public Worker {

public:
    Payment* paymentService;
    virtual bool processVehicleEntry(Vehicle* vehicle);

    CashPayment cashPayment;
    virtual void acceptPayment(int paymentValue){}
};

class Vehicle {

public:
    string licenseNumber;
    VehicleType vehicleType;
    ParkingTicket* parkingTicket;
    PaymentInfo* paymentInfo;
    virtual int spaceRequired(string) =0;
};

class Car: public Vehicle{
    public:
     string spaceOccupied;
     virtual int spaceRequired(spaceOccupied){
         return spaceOccupied;
     }
};

class Truck: public Vehicle{
    public:
    //   function to return space required
};
class Van: public Vehicle{
    public:
    //   function to return space required
};

class ElecricVehicle : public Vehicle{
    public: 
    int batteryCapacity;
    time_t requiredChargingTime;

    Payment payment;
    virtual int voltageCharging() =0; 

    void setBatteryCapacity(int batteryCapacity){
        this->batteryCapacity = batteryCapacity;
    }

    int getBatteryCapacity(){
        return batteryCapacity;
    }
};
void ElectricVehicle :: voltageCharging(time_t){
    // returns the charges incurred for charging
}

class ParkingDisplayBoard {
public:
    vector<string> freeSpot;
    virtual void showFreeSpotsAvailable() = 0;
    virtual void showTotalSpotsAvailable() =0;
    
    string dispayFreeSpot(){

    }
};
