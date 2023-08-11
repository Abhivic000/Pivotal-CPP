#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Structure to represent a car
struct Car
{
    string name;         // name of the car
    int speed;           // speed of the car (mph)
    int distance;        // distance traveled (miles)
};

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Create the cars
    Car car1;
    car1.name = "Red Racer";
    car1.speed = rand() % 15 + 85;  // random speed between 85 and 99 mph
    car1.distance = 0;

    Car car2;
    car2.name = "Blue Bullet";
    car2.speed = rand() % 15 + 85;  // random speed between 85 and 99 mph
    car2.distance = 0;

    // Run the race
    int time = 0;  // time elapsed in minutes
    while (car1.distance < 100 && car2.distance < 100)
    {
        // Increment time by 1 minute
        time++;

        // Increment the distance traveled by each car
        car1.distance += car1.speed / 60;
        car2.distance += car2.speed / 60;
    }

    // Print the race results
    cout << "Race results:" << endl;
    cout << car1.name << " traveled " << car1.distance << " miles in " << time << " minutes." << endl;
    cout << car2.name << " traveled " << car2.distance << " miles in " << time << " minutes." << endl;

    if (car1.distance > car2.distance)
    {
        cout << car1.name << " wins the race!" << endl;
    }
    else if (car2.distance > car1.distance)
    {
        cout << car2.name << " wins the race!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
