// Lab - 16: Implement virtual functions
// domain: event management

#include <iostream>

class event_main {
protected:
    std::string id, name;

public:
    event_main(std::string id, std::string name) {
        this->id = id;
        this->name = name;
    }

    virtual void display() {}
};


class event_sec : public event_main {
    std::string date, no_attendees;

public:
    event_sec(std::string id, std::string name, std::string date, std::string no_attendees) : event_main(id, name) {
        this->date = date;
        this->no_attendees = no_attendees;
    }

    void display();
};

void event_sec::display() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Date: " << date << std::endl;
    std::cout << "No. of Attendees: " << no_attendees << std::endl;
}


class event_admin : public event_main {
    std::string admin_name;

public:
    event_admin(std::string id, std::string name, std::string admin_name) : event_main(id, name) {
        this->admin_name = admin_name;
    }
    void display();
};

void event_admin::display() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Admin Name: " << admin_name << std::endl;
}


int main() {
    event_sec es1("1001", "Farewell", "20-01-2025", "100");
    event_admin ea1("1001", "Farewell", "xyz");
    event_main *ptr;

    ptr = &es1;
    ptr->display();
    std::cout << "\n";
    ptr = &ea1;
    ptr->display();
    return 0;
}