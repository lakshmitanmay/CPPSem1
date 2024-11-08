// Lab - 08: Program on Function Overloading
// Domain: Event Management

#include <iostream>
#include <string>

class events {
    int id, capacity;
    std::string name, date, time, location;

public:
    static int count;
    events() {
        id = 0;
        name = "";
        date = "";
        time = "";
        location = "";
        capacity = 0;
    }

    events(int id, std::string name, std::string date, std::string time, std::string location, int capacity) {
        this->id = id;
        this->name = name;
        this->date = date;
        this->time = time;
        this->location = location;
        this->capacity = capacity;
    }

    int &set_id() { return id; }

    std::string &set_name() { return name; }

    std::string &set_date() { return date; }

    std::string &set_time() { return time; }

    std::string &set_location() { return location; }

    int &set_capacity() { return capacity; }

    void display();


    friend void update_event(events &e, int id, std::string name, std::string date, std::string time,
                             std::string location, int capacity);

    // Function Overloading
    friend int find_event(events e[], int id);
    friend int find_event(events e[], std::string name);

    friend int menu();
	friend int menu2();
	friend int menu3();
};

void events::display() {
    std::cout << "Event ID: " << id << "\nEvent Name: " << name << "\nEvent Date: " << date << "\nEvent Time: " << time
              << "\nEvent Location: " << location << "\nEvent Max Capacity: " << capacity << "\n"
              << std::endl;
}

void update_event(events &e, int id, std::string name, std::string date, std::string time, std::string location,
                  int capacity) {
    e.id = id;
    e.name = name;
    e.date = date;
    e.time = time;
    e.location = location;
    e.capacity = capacity;
}

int find_event(events e[], int id) {
    for (int i = 0; i < events::count; i++) {
        if (e[i].id == id) {
            return i;
            break;
        }
    }
    return -1;
}

int find_event(events e[], std::string name) {
    for (int i = 0; i < events::count; i++) {
        if (e[i].name == name) {
            return i;
            break;
        }
    }
    return -1;
}

int menu() {
    int option;
    std::cout << "Main Menu" << std::endl;
    std::cout << "1-Add Event" << std::endl;
    std::cout << "2-Display All Events" << std::endl;
    std::cout << "3-Update Event Details" << std::endl;
    std::cout << "4-Find the Event" << std::endl;
    std::cout << "5-Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> option;
    return option;
}

int menu2() {
    int option;
    std::cout << "Update Menu" << std::endl;
    std::cout << "1-All" << std::endl;
    std::cout << "2-ID" << std::endl;
    std::cout << "3-Name" << std::endl;
    std::cout << "4-Date" << std::endl;
    std::cout << "5-Time" << std::endl;
    std::cout << "6-Location" << std::endl;
    std::cout << "7-Capacity" << std::endl;
    std::cout << "8-Go back" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> option;
    return option;
}

int menu3() {
    int option;
    std::cout << "ID or Name" << std::endl;
    std::cout << "1-ID" << std::endl;
    std::cout << "2-Name" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> option;
    return option;
}

int events::count = 0;

int main() {
    int opt, id, capacity, idx;
    std::string name, date, time, location;
    bool valid;
    events e[10];

    do {
        opt = menu();
        switch (opt) {
            case 1: {
                std::cout << "\nAdd Event" << std::endl;
                std::cout << "Enter the Event ID: ";
                std::cin >> id;

                std::cout << "Enter the Event Name: ";
                std::cin >> name;

                std::cout << "Enter the Event Date: ";
                std::cin >> date;

                std::cout << "Enter the Event Time: ";
                std::cin >> time;

                std::cout << "Enter the Event Location: ";
                std::cin >> location;

                std::cout << "Enter the Event Max Capacity: ";
                std::cin >> capacity;

                e[events::count] = events(id, name, date, time, location, capacity);
                std::cout << "\nEvent Added!\n";
                e[events::count].display();
                events::count++;

                break;
            }

            case 2: {
                std::cout << "\n";
                for (int i = 0; i < events::count; i++) {
                    std::cout << "Event " << i + 1 << std::endl;
                    e[i].display();
                }
                break;
            }

            case 3: {
                std::cout << "\n";
                valid = true;
                switch (menu3()) {
                    case 1: {
                        std::cout << "\nEnter the id: ";
                        std::cin >> id;
                        idx = find_event(e, id);
                        if (idx == -1) {
                            std::cout << "Event Not Found!\n" << std::endl;
                            valid = false;

                            break;
                        }
                        break;
                    }
                    case 2: {
                        std::cout << "\nEnter the name: ";
                        std::cin >> name;
                        idx = find_event(e, name);
                        if (idx == -1) {
                            std::cout << "Event Not Found!\n" << std::endl;
                            valid = false;

                            break;
                        }
                        break;
                    }
                    default:
                        std::cout << "\nInvalid choice\n" << std::endl;
                        valid = false;
                        break;
                }
                if (valid) {
                    switch (menu2()) {
                        case 1:
                            std::cout << "\nEnter the new id, name, date, time, location, capacity" << std::endl;
                            std::cin >> id >> name >> date >> time >> location >> capacity;
                            update_event(e[idx], id, name, date, time, location, capacity);
                            std::cout << "\n";
                            break;
                        case 2:
                            std::cout << "\nEnter the new id: ";
                            std::cin >> id;
                            e[idx].set_id() = id;
                            std::cout << "\n";

                            break;
                        case 3:
                            std::cout << "\nEnter the new name: ";
                            std::cin >> name;
                            e[idx].set_name() = name;
                            std::cout << "\n";

                            break;
                        case 4:
                            std::cout << "\nEnter the new date: ";
                            std::cin >> date;
                            e[idx].set_date() = date;
                            std::cout << "\n";

                            break;
                        case 5:
                            std::cout << "\nEnter the new time: ";
                            std::cin >> time;
                            e[idx].set_time() = time;
                            std::cout << "\n";
                            break;

                        case 6:
                            std::cout << "\nEnter the new location: ";
                            std::cin >> location;
                            e[idx].set_location() = location;
                            std::cout << "\n";
                            break;
                        case 7:
                            std::cout << "\nEnter the new capacity: ";
                            std::cin >> capacity;
                            e[idx].set_capacity() = capacity;
                            std::cout << "\n";
                            break;
                        case 8:
                            break;
                    }
                }
                break;
            }
            case 4: {
                std::cout << "\n";
                switch (menu3()) {
                    case 1: {
                        std::cout << "\nEnter the id: ";
                        std::cin >> id;
                        idx = find_event(e, id);
                        if (idx == -1) {
                            std::cout << "Event not found\n" << std::endl;
                        } else {
                            std::cout << "\nEvent Found!" << std::endl;
                            e[idx].display();
                        }
                        break;
                    }
                    case 2: {
                        std::cout << "\nEnter the name: ";
                        std::cin >> name;
                        idx = find_event(e, name);
                        if (idx == -1) {
                            std::cout << "Event not found\n" << std::endl;
                        } else {
                            std::cout << "\nEvent Found!" << std::endl;
                            e[idx].display();
                        }
                        break;
                    }
                    default:
                        std::cout << "\nInvalid choice\n" << std::endl;
                        break;
                }
            }
            case 5:
                break;
        }
    } while (opt != 5);

    return 0;
}