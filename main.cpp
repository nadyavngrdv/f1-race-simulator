#include <iostream>

int main()
{
    const double baseLapTime = 90.3; 
    const double driverModifier = -0.7; 
    const double carModifier = -1.8;
    const double penaltyTime = 0.0;

    const double lapTime = 
    baseLapTime + driverModifier + carModifier + penaltyTime;
    
    std::cout << "Lap time: " << lapTime << '\n';

    return 0;
}
