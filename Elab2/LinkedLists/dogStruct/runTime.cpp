#include <iostream>
#include <iomanip>

using namespace std;

struct Dog
{
    int age;
    double speed;
    double weight;
};

double run_time(Dog d, double distance)
{
    if (d.speed != 0)
    {
        return distance / d.speed;
    }
    else
    {
        return 0;
    }
}

Dog read_dog()
{
    Dog d;
    cin >> d.age >> d.weight >> d.speed;
    return d;
}

main()
{
    Dog dang = read_dog();
    double distance;
    cin >> distance;
    cout << fixed << setprecision(5); // this line is for formatting
    cout << run_time(dang, distance) << endl;
}
