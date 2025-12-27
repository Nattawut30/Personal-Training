#include <iostream>

class Stove
{
    private: // i dont want people to mess with my attributes so change it to private
        int temperature = 0; // hinding the unneccessary data from users that we don't need

    public: 

    Stove(int temperature)
    {
        // invoke the setter
        setTemperature(temperature);
    }

    int getTemperature() // readable
    {
        return temperature;
    }
    void setTemperature(int temperature) // writeable
    {
        if(temperature < 0)
        {
            this->temperature = 0;
        }
        else if(temperature >= 10) // maximum = 10
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }


};

int main()
{
    /*
    
    Abstraction = hiding unnecessary data from outside a class
    getter = function that makes a private attribute READABLE
    setter = function that makes a private attribute WRITEABLE
    
    */

    Stove stove(5);

    // stove.setTemperature(100);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}