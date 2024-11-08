// Lab - 04 Implement Default Arguments 
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
    // Parameterized Constructor with default arguments
    events(std::string event_name, std::string event_date, std::string event_time = "10:00",
           std::string event_location = "abc hall", int event_max_capacity = 0) {
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
    int choice;
    events par = events("wedding event", "01/01/2023", "12:00", "Wedding hall", 100);
    par.display();


    // Omitted some of the arguments, default arguments will be used instead
    events par_def = events("birthday party", "01/01/2023");
    par_def.display();
    return 0;
}