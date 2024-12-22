#include <iostream>
#include <string>
#include <map>
using namespace std;

class Contact {
private:
    string name;
    string email;
public:
    Contact(): name(""), email("") {}
    Contact(string n, string em) : name(n), email(em) {}
    void setName(string n) { name = n; }
    void setEmail(string em) { email = em; }
    string getName() const { return name; }
    string getEmail() const { return email; }
};

int main() {
    string searchName;
    Contact contact1("Sarah M", "Sara@gmail.com");
    Contact contact2("Bob Y", "Bob@gmail.com");
    Contact contact3("Mike E", "Mike@gmail.com");

    map <string, Contact> contacts;
    map <string, Contact>::iterator iter;

    contacts[contact1.getName()] = contact1;
    contacts[contact2.getName()] = contact2;
    contacts[contact3.getName()] = contact3;

    cout << "Enter name: ";
    getline(cin, searchName);

    iter = contacts.find(searchName);

    if (iter != contacts.end()) {
        cout << "Name: " << iter->second.getName() << endl;
        cout << "Email: " << iter->second.getEmail() << endl;
    }
    else cout << "Contact not found.\n";

    return 0;
}