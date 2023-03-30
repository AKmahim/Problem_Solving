#include <iostream>
#include <string>

using namespace std;

// Define car types
enum CarType { Hatchback, Sedan, SUV };

// Define services
enum ServiceType { BasicService, EngineFixing, ClutchFixing, GearFixing, BrakeFixing };

// Define service prices
const int hatchbackPrices[] = { 2000, 5000, 2000, 1000, 3000 };
const int sedanPrices[] = { 4000, 8000, 4000, 1500, 6000 };
const int suvPrices[] = { 5000, 10000, 6000, 2500, 8000 };

// Get car type from user
CarType getCarType()
{
    int choice;
    cout << "Enter car type (1 for Hatchback, 2 for Sedan, 3 for SUV): ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            return Hatchback;
        case 2:
            return Sedan;
        case 3:
            return SUV;
        default:
            cout << "Invalid choice." << endl;
            return getCarType();
    }
}

// Get service type from user
ServiceType getServiceType()
{
    int choice;
    cout << "Enter service type (1 for Basic Service, 2 for Engine Fixing, 3 for Clutch Fixing, 4 for Gear Fixing, 5 for Brake Fixing): ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            return BasicService;
        case 2:
            return EngineFixing;
        case 3:
            return ClutchFixing;
        case 4:
            return GearFixing;
        case 5:
            return BrakeFixing;
        default:
            cout << "Invalid choice." << endl;
            return getServiceType();
    }
}

// Get price for car and service
int getPrice(CarType carType, ServiceType serviceType)
{
    switch (carType)
    {
        case Hatchback:
            return hatchbackPrices[serviceType];
        case Sedan:
            return sedanPrices[serviceType];
        case SUV:
            return suvPrices[serviceType];
        default:
            return 0;
    }
}

int main()
{
    CarType carType = getCarType();
    ServiceType serviceType = getServiceType();
    int price = getPrice(carType, serviceType);
    cout << "Price: " << price << endl;
    return 0;
}
