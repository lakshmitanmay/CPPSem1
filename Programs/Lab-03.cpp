// Lab - 03 Implement Classes and Objects
#include <iostream>
#include <string>


class events {
    std::string event_name;
    std::string event_date;
    std::string event_start_time;
    std::string event_end_time;
    std::string event_location;
    std::string event_type;
    std::string event_description;
    std::string event_status;
    int event_max_capacity = 0;
    int event_ticket_price = 0;

public:
    void create_event();

    void display_all_event_det() const;
};

void events::create_event() {
    std::cin.ignore();
    std::cout << "Enter the event name: ";
    std::getline(std::cin, event_name);
    std::cout << "Enter the event date: ";
    std::getline(std::cin, event_date);
    std::cout << "Enter the event start time: ";
    std::getline(std::cin, event_start_time);
    std::cout << "Enter the event end time: ";
    std::getline(std::cin, event_end_time);
    std::cout << "Enter the event location: ";
    std::getline(std::cin, event_location);
    std::cout << "Enter the event type: ";
    std::getline(std::cin, event_type);
    std::cout << "Enter the event description: ";
    std::getline(std::cin, event_description);
    std::cout << "Enter the event status: ";
    std::getline(std::cin, event_status);
    std::cout << "Enter the event max capacity: ";
    std::cin >> event_max_capacity;
    std::cout << "Enter the event ticket price: ";
    std::cin >> event_ticket_price;
}

void events::display_all_event_det() const {
    std::cout << "Event Name: " << event_name << "\nEvent Date: " << event_date << "\nEvent Start Time: " <<
            event_start_time << "\nEvent End Time" << event_end_time << "\nEvent Location: " << event_location <<
            "\nEvent Type: " << event_type << "\nEvent Description: " << event_description << "\nEvent Status: " <<
            event_status << "\nEvent Max Capacity: " << event_max_capacity << "\nEvent Ticket Price: " <<
            event_ticket_price << '\n';
}


int main() {
    int choice;
    events t;
    while (true) {
        std::cout << "\n1. Create Event\n2. Display All Event Details \n3. Exit \nChoose (1, 2 or 3): ";
        std::cin >> choice;
        if (choice == 1) {
            t.create_event();
        } else if (choice == 2) {
            t.display_all_event_det();
        } else if (choice == 3) break;
        else std::cout << "Try Again!\n";
    }

    return 0;
}