// Lab - 05: Implement default, parameterized and copy constructor based on your domain
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
    // Default Constructor
    events() {
        event_name = "event x";
        event_date = "01/01/1970";
        event_time = "10:00";
        event_location = "abc hall";
        event_max_capacity = 0;
    }

    // Parameterized Constructor with default arguments
    events(std::string event_name, std::string event_date, std::string event_time = "10:00",
           std::string event_location = "abc hall", int event_max_capacity = 0) {
        this->event_name = event_name;
        this->event_date = event_date;
        this->event_time = event_time;
        this->event_location = event_location;
        this->event_max_capacity = event_max_capacity;
    }

    // Copy Constructor
    events(const events &x) {
        event_name = x.event_name;
        event_date = x.event_date;
        event_time = x.event_time;
        event_location = x.event_location;
        event_max_capacity = x.event_max_capacity;
    }
    void display();
};

void events::display() {
    std::cout << "Event Name: " << event_name << "\nEvent Date: " << event_date << "\nEvent Time: " << event_time
              << "\nEvent Location: " << event_location << "\nEvent Max Capacity: " << event_max_capacity << "\n"
              << std::endl;
}


int main() {
    int choice;
    std::cout << "Parameterized Constructor" << std::endl;
    events par = events("wedding event", "01/01/2023", "12:00", "xyz hall", 100);
    par.display();


    std::cout << "Parameterized Constructor with default arguments" << std::endl;
    events par_def = events("birthday party", "01/01/2023");
    par_def.display();

    std::cout << "Default constructor" << std::endl;
    events def;
    def.display();

    std::cout << "Copy constructor" << std::endl;
    events copy(par);
    copy.display();

    return 0;
}