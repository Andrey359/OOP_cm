
#include <iostream>

using namespace std;

class User
{
public:
    int id;
    char name[16];
    int birth_year;
    User(int id, const char name[], int birth_year) {
        this->id = id;
        strcpy_s(this->name, name);
        this->birth_year = birth_year;
    }

    int years() {
        return 2023 - birth_year;
    };
    void show() {
        for (int i = 0; name[i]; i++) {
            cout << name[i];
        }
        cout << " ";
        cout << birth_year << endl;
    }
    const char* getName() const {
        return name;
    }
    int getBirth_year() {
        return birth_year;
    }
    
    void setName(const char name[]) {
        strcpy_s(this->name, name);
    }
    void setBirth_year(int birth_year) {
        this->birth_year = birth_year;
    }
    int ageDifference(const User& user) {
        return user.birth_year - birth_year;
    }
    bool aquls(const User& user){
        return id == user.id;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    User a(1, "Andrey", 1999);
    User b(1, "Olya", 2000);
    b.setBirth_year(2010);
    a.show();
    b.show();
    cout << "Разница в возрасте: " << a.ageDifference(b) << endl;
    cout << a.aquls(b);

}
