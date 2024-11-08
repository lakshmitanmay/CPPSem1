# ***C++ Lab Work***
# Lab - 01

## 1. Write a C program to check whether the given number is prime or not.
### program
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (true) {
        if (num == 1) {
            printf("The given number is not a prime number.\n");
            break;
        }
        if (num == 0) {
            printf("The given number is neither a prime number nor a composite number.\n");
            break;
        }
        if (num == 2) {
            printf("The given number is a prime number.\n");
            break;
        }
        if (num % 2 == 0) {
            printf("The given number is not a prime number.\n");
            break;
        }
        if (num % 2 != 0) {
            int skip = 3, prim = 1;
            while (skip < num) {
                if (num % skip == 0) {
                    printf("The given number is not a prime number.\n");
                    prim = 0;
                    break;
                }
                skip = skip + 2;
            }
            if (prim == 1) {
                printf("The given number is a prime number\n");
                break;
            }
            if (prim == 0) {
                break;
            }
        }
    }
    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020241108173509.png" width="400">
<br>
<img src="attachments/Pasted%20image%2020241108173527.png" width="400">

## 2. Write a C program to check whether the given number is an armstrong number or not.
### program
```c
#include <stdio.h>

int main() {
    int num, backup_num, digit, arm_num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    backup_num = num;
    while (num != 0) {
        digit = (num % 10);
        num /= 10;
        arm_num += (digit * digit * digit);
    }
    if (backup_num == arm_num) printf("The given number is an armstrong number.\n");
    else printf("The given number is not an armstrong number.\n");
    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020241108173209.png" width="400">
<br>
<img src="attachments/Pasted%20image%2020241108173245.png" width="400">

<br><br>

# Lab - 02
## 1. Write a C program to calculate the mean of a given set of numbers using arrays
### program
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    float arr[100], avg = 0;
    int count = 0;
    char cont;
    while (true) {
        printf("Enter a number: ");
        scanf("%f", &arr[count]);
        printf("Do you want to enter more numbers: ");
        getchar();
        scanf("%c", &cont);
        if (cont=='N' || cont=='n') {
            break;
        }
        count++;
    }

    for (int i = 0; i <= count; i++) {
        avg += arr[i];
    }

    avg = avg / (count + 1);
    printf("Average of the numbers in the array = %f", avg);
    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020241108173742.png" width="500">

## 2. b) Write a c program to generate multiplication table (for example 9th table , 10 times)
### program
```c
#include <stdio.h>

int main() {
    int num, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter till which table: ");
    scanf("%d", &count);
    for (int i = 0; i <=count; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020241108173841.png" width="300">

<br><br>

# Lab - 03
## Write a c++ program to implement classes and objects.
### *Domain: Event Management System*
### program
```c++
#include <iostream>
#include <string>


class events {
    std::string event_name;
    sstring event_date;
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
```
### output
<img src="attachments/Pasted%20image%2020241108174136.png" width="600">
<br>
<img src="attachments/Pasted%20image%2020241108174154.png" width="550">

<br><br>

# Lab 04
## Write a C++ program to implement default arguments based on your domain
### program
```c++
// Program on Default Arguments - Lab 04
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
```

### output
<img src="attachments/Pasted%20image%2020240829121845.png" width="300">

<br><br>

# Lab-05
## Write a C++ program to implement default, parameterized and copy constructor based on your domain.
### program
```c++
// Program to implement default, parameterized and copy constructor based on your domain - Lab 05
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
```
### output
<img src="attachments/Pasted%20image%2020240829122320.png" width="500">

<br><br>

# Lab-06
## Write a C++ program to demonstrate constructor overloading with array of objects
### program
```c++
// demonstrate constructor overloading using arrays - Lab 06
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
```
### output
<img src="attachments/Pasted%20image%2020240906124540.png" width="500">
<br>
<img src="attachments/Pasted%20image%2020240906124558.png" width="300">
<br>
<img src="attachments/Pasted%20image%2020240906124613.png" width="400">
<br>
<img src="attachments/Pasted%20image%2020240906124626.png" width="400">
<br>
<img src="attachments/Pasted%20image%2020240906124638.png" width="300">

<br><br>

# Lab-07
## Write a C++ program to implement pass by value,  pass by reference and returning reference
### program
```c++
// Program on Pass by Value, Pass by reference, Returning by Reference - Lab 07
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

    // Returning reference
    int &set_id() { return id; }

    std::string &set_name() { return name; }

    std::string &set_date() { return date; }

    std::string &set_time() { return time; }

    std::string &set_location() { return location; }

    int &set_capacity() { return capacity; }

    void display();


    // Pass by reference
    friend void update_event(events &e, int id, std::string name, std::string date, std::string time,
                             std::string location, int capacity);

    // Pass by value
    friend int find_event(events e[], int id);

    friend int menu();
};

void events::display() {
    std::cout << "Event Name: " << name << "\nEvent Date: " << date << "\nEvent Time: " << time
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

int events::count = 0;

int main() {
    int option, opt, id, capacity, idx;
    std::string name, date, time, location, choice;
    events e[10];

    do {
        option = menu();
        switch (option) {
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
                for (int i = 0; i < events::count; i++) {
                    std::cout << "\nEvent " << i + 1 << std::endl;
                    e[i].display();
                }
                break;
            }

            case 3: {
                std::cout << "\nEnter the id: ";
                std::cin >> id;
                idx = find_event(e, id);
                opt = menu2();
                switch (opt) {
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
                break;
            }
            case 4:
                std::cout << "\nEnter the id: ";
                std::cin >> id;
                idx = find_event(e, id);
                if (idx == -1) {
                    std::cout << "Event not found" << std::endl;
                } else {
                    e[idx].display();
                }
                break;
            case 5:
                break;
        }

    } while (option != 5);

    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020240913221926.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240913221956.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240913222038.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240913222104.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240913222121.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240913222142.png" width="300">

<br><br>

# Lab-08
## Write a C++ program to implement function overloading based on your domain
### program
```c++
// Program on Function Overloading - Lab 08
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
```
### output
<img src="attachments/Pasted%20image%2020240914123654.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123709.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123729.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123743.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123756.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123815.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123833.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123852.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123905.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123917.png" width="600"><br>
<img src="attachments/Pasted%20image%2020240914123936.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240914123954.png" width="300">


<br><br>

# Lab 09
## Write a C++ program to implement static functions using your own domain
### program
```c++
// Static Functions - Lab 09
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

    static void increment() { count++; }
    static void decrement() { count--; }


    void display();


    friend void update_event(events &e, int id, std::string name, std::string date, std::string time,
                             std::string location, int capacity);

    friend void update(events e[], int id);

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

void update(events e[], int id) {
    int idx = find_event(e, id);
    if (idx == -1) {
        std::cout << "Record not found\n" << std::endl;
        return;
    }
    for (int i = idx; i < events::count - 1; i++) {
        e[i] = e[i + 1];
    }
    events::decrement();
    std::cout << "Event with id: " << id << " has been deleted\n" << std::endl;
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
    std::cout << "5-Delete a Event" << std::endl;
    std::cout << "6-Exit" << std::endl;
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
                events::increment();

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
                std::cout << "Enter the event id: ";
                std::cin >> id;
                update(e, id);
                break;

            case 6:
                break;
        }
    } while (opt != 6);

    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020240925120136.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120153.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120214.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120228.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120242.png" width="400">

<br><br>


# Lab-10
## Write a c++ program to implement Unary (minimum three)and Binary operator overloading (minimum three)
### program
```c++
// Program to implement Unary and Binary operator overloading - Lab 10
#include <iostream>

class INT {
    int x;

public:
    INT() {}
    INT(int x) { this->x = x; }

    void display() { std::cout << "Result: " << x << std::endl; }

    // Unary Operator Overloading
    friend void operator++(INT &X);
    friend void operator--(INT &X);
    friend void operator-(INT &X);

    // Binary Operator Overloading
    friend INT operator+(INT X, INT Y);
    friend INT operator-(INT X, INT Y);
    friend INT operator*(INT X, INT Y);
    friend INT operator/(INT X, INT Y);
    friend INT operator%(INT X, INT Y);

    friend int menu();
};

void operator++(INT &X) { X.x = X.x + 1; }
void operator--(INT &X) { X.x = X.x - 1; }
void operator-(INT &X) { X.x = -(X.x); }


INT operator+(INT X, INT Y) {
    INT temp;
    temp.x = X.x + Y.x;
    return temp;
}

INT operator-(INT X, INT Y) {
    INT temp;
    temp.x = X.x - Y.x;
    return temp;
}

INT operator*(INT X, INT Y) {
    INT temp;
    temp.x = X.x * Y.x;
    return temp;
}

INT operator/(INT X, INT Y) {
    INT temp;
    temp.x = X.x / Y.x;
    return temp;
}

INT operator%(INT X, INT Y) {
    INT temp;
    temp.x = X.x % Y.x;
    return temp;
}

int menu() {
    int option;
    std::cout << "1 - Addition" << std::endl;
    std::cout << "2 - Subtraction" << std::endl;
    std::cout << "3 - Division" << std::endl;
    std::cout << "4 - Multiplication" << std::endl;
    std::cout << "5 - Modulus" << std::endl;
    std::cout << "6 - Increment by 1" << std::endl;
    std::cout << "7 - Decrement by 1" << std::endl;
    std::cout << "8 - Negation" << std::endl;
    std::cout << "9 - Exit" << std::endl;
    std::cout << "Select an option: ";
    std::cin >> option;
    std::cout << "\n";
    return option;
}

int main() {
    int num1, num2, option;
    INT X[5], Z;

    std::cout << "SIMPLE CALCULATOR" << std::endl;

    do {
        std::cout << "\nEnter first number: ";
        std::cin >> num1;
        option = menu();
        X[0] = INT(num1);
        switch (option) {
            case 1: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] + X[1];
                Z.display();
                break;
            }

            case 2: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] - X[1];
                Z.display();
                break;
            }

            case 3: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] / X[1];
                Z.display();
                break;
            }

            case 4: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] * X[1];
                Z.display();
                break;
            }

            case 5: {
                std::cout << "Enter second number: ";
                std::cin >> num2;
                X[1] = num2;
                Z = X[0] % X[1];
                Z.display();
                break;
            }

            case 6: {
                ++X[0];
                X[0].display();
                break;
            }

            case 7: {
                --X[0];
                X[0].display();
                break;
            }

            case 8: {
                -X[0];
                X[0].display();
                break;
            }

            case 9: {
                break;
            }

            default: {
                std::cout << "Invalid choice" << std::endl;
                break;
            }
        }
    } while (option != 9);
    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020240928153926.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240928153940.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240928153955.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240928154013.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240928154027.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240928154043.png" width="300"><br>
<img src="attachments/Pasted%20image%2020240928154058.png" width="300">

<br><br>


# Lab 11
## Write a C++ program to implement subscript operator overloading
### program
```c++
#include <iostream>
#include <string>
#include <cmath>

class perfect_squares {
    int *arr, size;

public:
    perfect_squares() = default;

    perfect_squares(int size) {
        this->size = size;
        arr = new int[size];
    }

    ~perfect_squares() { delete[] arr; }

    int &operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cout << "Array index out of bound!" << std::endl;
            return arr[0];
        }
        return arr[index];
    }

    void display() {
        std::cout << "\nPERFECT SQUARES\n";
        for (int i = 0; i < size; i++) {
            std::cout << "Perfect Square of " << sqrt(arr[i]) << " = " << arr[i] << std::endl;
        }
        std::cout << std::endl;
    }
};


int main() {
    int size, num;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    perfect_squares PS(size);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter the number: ";
        std::cin >> num;
        PS[i] = num * num;
    }

    PS.display();
}
```
### output
<img src="attachments/Pasted%20image%2020240928230516.png" width="400">

<br><br>

# Lab - 12
## Write a C++ program to implement dynamic memory allocation and deallocation new and delete using constructors and destructors.
### program
```c++
#include <iostream>
#include <string>

class car_comp {
    std::string *arr;
    int size;

public:
    car_comp() = default;

    car_comp(int size) {
        this->size = size;
        arr = new std::string[size];
    }

    ~car_comp() { delete[] arr; }

    std::string &operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cout << "Array index out of bound!" << std::endl;
            return arr[0];
        }
        return arr[index];
    }

    void display() {
        std::cout << "\nCar Companies\n";
        for (int i = 0; i < size; i++) {
            std::cout << "Company " << i + 1 << ": " << arr[i] << std::endl;
        }
        std::cout << std::endl;
    }
};


int main() {
    int size;
    std::string c;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    car_comp PS(size);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter the Car Company: ";
        std::cin >> c;
        PS[i] = c;
    }

    PS.display();
    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020241004104407.png" width="300">

<br><br>

# Lab 13
## Write a C++ program to implement friend functions based on your domain
### program
```c++
// Lab-13: Friend Functions
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

    static void increment() { count++; }
    static void decrement() { count--; }


    void display();

    // Friend Functions
    friend void update_event(events &e, int id, std::string name, std::string date, std::string time,
                             std::string location, int capacity);

    friend void update(events e[], int id);

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

void update(events e[], int id) {
    int idx = find_event(e, id);
    if (idx == -1) {
        std::cout << "Record not found\n" << std::endl;
        return;
    }
    for (int i = idx; i < events::count - 1; i++) {
        e[i] = e[i + 1];
    }
    events::decrement();
    std::cout << "Event with id: " << id << " has been deleted\n" << std::endl;
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
    std::cout << "5-Delete a Event" << std::endl;
    std::cout << "6-Exit" << std::endl;
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
                events::increment();

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
                std::cout << "Enter the event id: ";
                std::cin >> id;
                update(e, id);
                break;

            case 6:
                break;
        }
    } while (opt != 6);

    return 0;
}
```
### output
<img src="attachments/Pasted%20image%2020240925120136.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120153.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120214.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120228.png" width="400"><br>
<img src="attachments/Pasted%20image%2020240925120242.png" width="400">

<br><br>


# Lab-14
## Write a c++ program to implement single and multilevel inheritance
### program
```c++
// Lab-14 implement single and multilevel inheritance
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
```
### output
<img src="attachments/Pasted%20image%2020241014151531.png" width="300"><br>
<img src="attachments/Pasted%20image%2020241014151542.png" width="300"><br>
<img src="attachments/Pasted%20image%2020241014151553.png" width="300"><br>
<img src="attachments/Pasted%20image%2020241014151606.png" width="300">

<br><br>

# Lab-15
## Write a c++ program to implement multiple and hybrid inheritance
### program
```c++
// Lab-15 implement multiple and hybrid inheritance
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
```
### output
<img src="attachments/Pasted%20image%2020241017111438.png" width="300"><br>
<img src="attachments/Pasted%20image%2020241017111450.png" width="300"><br>
<img src="attachments/Pasted%20image%2020241017111504.png" width="300"><br>
<img src="attachments/Pasted%20image%2020241017111513.png" width="300"><br>
<img src="attachments/Pasted%20image%2020241017111521.png" width="300">

<br><br>

# Lab-16
## Write a C++ program to implement virtual functions
### program
```c++
// Lab-16 implement virtual functions
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
```
### output
<img src="attachments/Pasted%20image%2020241018091109.png" width="300"><br>

