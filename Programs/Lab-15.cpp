// Lab - 15: Implement multiple and hybrid inheritance
// domain: event management

#include <iostream>

class event_prim {
    std::string id, name;

public:
    void get_event_det1();

    std::string get_id();

    std::string get_name();
};

void event_prim::get_event_det1() {
    std::cin.ignore();
    std::cout << "Enter event id: ";
    std::getline(std::cin, id);
    std::cout << "Enter event name: ";
    std::getline(std::cin, name);
}

std::string event_prim::get_id() { return id; }

std::string event_prim::get_name() { return name; }

class event_sec : public event_prim {
    std::string date, no_attendees, admin_name;

public:
    void get_event_det2();
    std::string get_date();
    std::string get_no_attendees();
    std::string get_admin_name();
};

void event_sec::get_event_det2() {
    std::cin.ignore();
    std::cout << "Enter date: ";
    std::getline(std::cin, date);
    std::cout << "Enter no. of attendees: ";
    std::getline(std::cin, no_attendees);
    std::cout << "Enter the name of the administrator for this event: ";
    std::getline(std::cin, admin_name);
}

std::string event_sec::get_date() { return date; }

std::string event_sec::get_no_attendees() { return no_attendees; }

std::string event_sec::get_admin_name() { return admin_name; }

class venue {
    std::string venue_name;
    std::string venue_location;
    std::string venue_capacity;

public:
    void get_venue_det();
    std::string get_venue_name();
    std::string get_venue_location();
    std::string get_venue_capacity();
};

void venue::get_venue_det() {
    std::cin.ignore();
    std::cout << "Enter venue name: ";
    std::getline(std::cin, venue_name);
    std::cout << "Enter venue location: ";
    std::getline(std::cin, venue_location);
    std::cout << "Enter venue capacity: ";
    std::getline(std::cin, venue_capacity);
}

std::string venue::get_venue_name() { return venue_name; }

std::string venue::get_venue_location() { return venue_location; }

std::string venue::get_venue_capacity() { return venue_capacity; }

// multilevel inheritance and multiple inheritance being used - hybrid inheritance
class event_fin : public event_sec, public venue {
    std::string arr[8];

public:
    void set_arr_prim();
    void set_arr_sec();
    void set_venue_det();
    void display_prim();
    void display_sec();
    void display_venue_det();
    void display();
};

void event_fin::set_arr_prim() {
    arr[0] = get_id();
    arr[1] = get_name();
}

void event_fin::set_arr_sec() {
    arr[2] = get_date();
    arr[3] = get_no_attendees();
    arr[4] = get_admin_name();
}

void event_fin::set_venue_det() {
    arr[5] = get_venue_name();
    arr[6] = get_venue_location();
    arr[7] = get_venue_capacity();
}

void event_fin::display_prim() {
    std::cout << "\nPrimary Event Details";
    std::cout << "\nEvent id: " << arr[0] << "\nEvent name: " << arr[1] << "\n" << std::endl;
}

void event_fin::display_sec() {
    std::cout << "\nSecondary Event Details";
    std::cout << "\nDate: " << arr[2] << "\nNo. of attendees: " << arr[3] << "\nAdministrator name: " << arr[4] << "\n"
              << std::endl;
}

void event_fin::display_venue_det() {
    std::cout << "\nVenue Details";
    std::cout << "\nVenue name: " << arr[5] << "\nVenue location: " << arr[6] << "\nVenue capacity: " << arr[7] << "\n"
              << std::endl;
};

void event_fin::display() {
    std::cout << "\nAll Event Details";
    std::cout << "\nEvent id: " << arr[0] << "\nEvent name: " << arr[1] << "\nDate: " << arr[2]
              << "\nNo. of attendees: " << arr[3] << "\nAdministrator name: " << arr[4] << "\nVenue name: " << arr[5]
              << "\nVenue location: " << arr[6] << "\nVenue capacity: " << arr[7] << "\n"
              << std::endl;
}

int menu() {
    int option;
    std::cout << "Menu" << std::endl;
    std::cout << "1-Add Primary Event Details" << std::endl;
    std::cout << "2-Display Primary Event Details" << std::endl;
    std::cout << "3-Add Secondary Event Details" << std::endl;
    std::cout << "4-Display Secondary Event Details" << std::endl;
    std::cout << "5-Add Venue Details" << std::endl;
    std::cout << "6-Display Venue Details" << std::endl;
    std::cout << "7-Display All Details" << std::endl;
    std::cout << "8-Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> option;
    return option;
}


int main() {
    event_fin E;
    int opt;
    do {
        opt = menu();
        switch (opt) {
            case 1: {
                std::cout << "\nEnter Primary Event Details\n";
                E.get_event_det1();
                E.set_arr_prim();
                std::cout << "\n";
                break;
            }
            case 2: {
                E.display_prim();
                break;
            }
            case 3: {
                std::cout << "\nEnter Secondary Event Details\n";
                E.get_event_det2();
                E.set_arr_sec();
                std::cout << "\n";

                break;
            }
            case 4: {
                E.display_sec();
                break;
            }

            case 5: {
                std::cout << "\nEnter Venue Details\n";
                E.get_venue_det();
                E.set_venue_det();
                std::cout << "\n";
                break;
            }

            case 6: {
                E.display_venue_det();
                break;
            }

            case 7: {
                E.display();
                break;
            }

            case 8: {
                break;
            }

            default: {
                std::cout << "Invalid option";
            }
        }
    } while (opt != 8);
    return 0;
}