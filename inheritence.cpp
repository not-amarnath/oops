#include <iostream>
using namespace std;

class AbstractEmployee {
public:
    virtual void AskForPromotion() = 0;
};

class Employee : public AbstractEmployee {

private:
    string name;
    string dept;
    string company;
    string role;
    double age;

public:

    // Setters
    void setName(string Name) {
        name = Name;
    }

    void setDept(string Dept) {
        dept = Dept;
    }

    void setCompany(string Company) {
        company = Company;
    }

    void setRole(string Role) {
        role = Role;
    }

    void setAge(double Age) {
        age = Age;
    }

    // Getters
    string getName() {
        return name;
    }

    string getDept() {
        return dept;
    }

    string getCompany() {
        return company;
    }

    string getRole() {
        return role;
    }

    double getAge() {
        return age;
    }

    // Introduce Yourself
    void IntroduceYourself() {
        cout << "Name = " << name << endl;
        cout << "Dept = " << dept << endl;
        cout << "Company = " << company << endl;
        cout << "Role = " << role << endl;
        cout << "Age = " << age << endl;
    }

    // Constructor
    Employee(string Name, string Dept, string Company, string Role, double Age) {
        name = Name;
        dept = Dept;
        company = Company;
        role = Role;
        age = Age;
    }

    // Abstract function implementation
    void AskForPromotion() override {
        if (age > 20) {
            cout << name << " got promoted" << endl;
        }
        else {
            cout << name << " not promoted" << endl;
        }
    }
};


class Developer : public Employee {

public:
    string FavProgrammingLanguage;

    // Constructor
    Developer(
        string Name,
        string Dept,
        string Company,
        string Role,
        double Age,
        string Language
    ) : Employee(Name, Dept, Company, Role, Age) {

        FavProgrammingLanguage = Language;
    }

    void fixbug() {
        cout << "Fixed bug using "
             << FavProgrammingLanguage << endl;
    }
};


int main() {

    Developer d(
        "Amarnath",
        "Development",
        "IB ARTS",
        "Web Developer",
        23,
        "C++"
    );

    d.IntroduceYourself();
    d.AskForPromotion();
    d.fixbug();

    return 0;
}