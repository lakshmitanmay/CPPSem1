// Lab - 06: Demonstrate constructor overloading using arrays
// Domain: Event Management

#include <iostream>
#include <string>


class events {
    std::string event_name;
    std::string event_date;
    std::string event_time;
    std::string event_location;
    int event_max_capacity;

public:
// constructor with no arguments
    events() {
        event_name = "event x";
        event_date = "01/01/1970";
        event_time = "10:00";
        event_location = "abc hall";
        event_max_capacity = 0;
    }
    
// constructor with all parameters
    events(std::string event_name, std::string event_date) {
        this->event_name = event_name;
        this->event_date = event_date;

        // default use for these
        event_time = "10:00";
        event_location = "abc hall";
        event_max_capacity = 0;
    }

// constructor with some parameters
    events(std::string event_name, std::string event_date, std::string event_time,
           std::string event_location, int event_max_capacity) {
        this->event_name = event_name;
        this->event_date = event_date;
        this->event_time = event_time;
        this->event_location = event_location;
        this->event_max_capacity = event_max_capacity;
    }


    void display();
};

void events::display() {
    std::cout << "Event Name: " << event_name << "\nEvent Date: " << event_date << "\nEvent Time: " << event_time
              << "\nEvent Location: " << event_location << "\nEvent Max Capacity: " << event_max_capacity << "\n"
              << std::endl;
}


int main() {
    std::string event_name;
    std::string event_date;
    std::string event_time;
    std::string event_location;
    int event_max_capacity;

    events e1[2];
    events e2;
    events e3[2];
    
    std::cout << "Constructor having all arguments: " << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cin >> event_name >> event_date >> event_time >> event_location >> event_max_capacity;
        e1[i] = events(event_name, event_date, event_time, event_location, event_max_capacity);
    }

    e1[0].display();
    e1[1].display();

    std::cout << "\nConstructor without arguments: " << std::endl;
    e2.display();

    std::cout << "\nConstructor with some arguments: " << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cin >> event_name >> event_date;
        e3[i] = events(event_name, event_date);
    }

    e3[0].display();
    e3[1].display();

    return 0;
}