// create class

/*
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int Roll_No;
    string Branch;

};

int main(){
    Student obj;
    obj.name = "Kuntal";
    obj.Roll_No = 122066;
    obj.Branch = "CSE";
    cout<< obj.name << endl;
}

*/

// obj propreties

/*
#include <iostream>
using namespace std;
class Bank{
    public:
    string name;
    int Balance;
    void check_balance(){
        cout << Balance <<endl;
    }
    void withdraw(){
        Balance -= 100;
        cout << "100 rupee debited" <<endl;
    }

};

int main(){
    Bank obj;
    obj.name = "Kuntal";
    obj.Balance = 122066;
    obj.check_balance();
    obj.withdraw();
    cout<< obj.Balance << endl;
    return 0;

}

*/

// getter & setter

/*
#include <iostream>
using namespace std;
class Bank{
    private:
    string name;
    int balance;
    public:
    void setvalue(string person, int amount){
        name = person;
        balance = amount;

    }
    void check_balance(){
        cout<< balance<<endl;
    }
    void print_name(){
        cout<< name << endl;
    }
};

int main(){
    Bank obj;
    obj.setvalue("Kuntal", 122066);
    obj.check_balance();
    obj.print_name();

}

*/

// constructor

/*
#include <iostream>
using namespace std;
class employee{
    private:
    int id;
    int salary;

    public:
    employee(){


        id = 123;
        salary = 122066;
        cout << "hello Constructor" << endl;

    }

    void print(){
        cout<< "id = " << id <<endl << "salary = " << salary << endl;
    }
};

int main(){
    employee Kuntal;
    Kuntal.print();
    return 0;

}

*/

// parameterized contructor

/*
#include <iostream>
using namespace std;
class employee{
    private:
    int id;
    int salary;

    public:
    employee(int num, int amount){


        id = num;
        salary = amount;
        cout << "hello Constructor" << endl;

    }

    void print(){
        cout<< "id = " << id <<endl << "salary = " << salary << endl;
    }
};

int main(){
    employee Kuntal(123, 122066);
    Kuntal.print();
    return 0;

}
*/

// using this

/*
#include <iostream>
using namespace std;
class employee{
    private:
    int id;
    int salary;

    public:
    employee(int id, int salary){


        this -> id = id;
        this -> salary = salary;
        cout << "hello Constructor" << endl;

    }

    void print(){
        cout<< "id = " << id <<endl << "salary = " << salary << endl;
    }
};

int main(){
    employee Kuntal(123, 122066);
    Kuntal.print();
    return 0;

}
*/

// using pointer

/*
#include <iostream>
using namespace std;
class man{
    public:
    int weight;
    string name;
};

int main(){
    man *p = new man;
    p -> weight = 70;
    p -> name = "Kuntal";
    cout<< p -> weight << endl << p -> name << endl;
    return 0;

}
*/

//destructor

/*
#include <iostream>
using namespace std;
class phone{
    public:
    int cost;
    int brand;

    phone(){
        cout << "Constructor Executer" << endl;
    }

    ~phone(){
        cout << "destructor Executed";
    }
};
int main(){
    phone nokia;
    return 0;
}
*/

//destructor using pointer

/*
#include <iostream>
using namespace std;
class phone{
    public:
    int cost;
    int brand;

    phone(){
        cout << "Constructor Executer" << endl;
    }

    ~phone(){
        cout << "destructor Executed";
    }
};
int main(){
    phone *nokia = new phone;
    delete nokia;
    return 0;
}
*/



