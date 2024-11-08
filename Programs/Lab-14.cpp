// Lab - 14: Implement single and multilevel inheritance
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

// single level inheritance
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


// multilevel inheritance
class event_fin : public event_sec {
    std::string arr[5];

public:
    void set_arr_prim();
    void set_arr_sec();
    void display_prim();
    void display_sec();
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

void event_fin::display_prim() {
    std::cout << "\nPrimary Event Details";
    std::cout << "\nEvent id: " << arr[0] << "\nEvent name: " << arr[1] << "\n" << std::endl;
}

void event_fin::display_sec() {
    std::cout << "\nSecondary Event Details";
    std::cout << "\nDate: " << arr[2] << "\nNo. of attendees: " << arr[3] << "\nAdministrator name: " << arr[4] << "\n"
              << std::endl;
}

void event_fin::display() {
    std::cout << "\nAll Event Details";
    std::cout << "\nEvent id: " << arr[0] << "\nEvent name: " << arr[1] << "\nDate: " << arr[2]
              << "\nNo. of attendees: " << arr[3] << "\nAdministrator name: " << arr[4] << "\n" << std::endl;
}

int menu() {
    int option;
    std::cout << "Menu" << std::endl;
    std::cout << "1-Add Primary Event Details" << std::endl;
    std::cout << "2-Display Primary Event Details" << std::endl;
    std::cout << "3-Add Secondary Event Details" << std::endl;
    std::cout << "4-Display Secondary Event Details" << std::endl;
    std::cout << "5-Display All Details" << std::endl;
    std::cout << "6-Exit" << std::endl;
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
                E.display();
                break;
            }

            case 6: {
                break;
            }

            default: {
                std::cout << "Invalid option";
            }
        }
    } while (opt != 6);
    return 0;
}