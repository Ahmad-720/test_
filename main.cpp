#include <iostream>
using namespace std;

class student{
    private:
    int id;
    public:
    string name;
    int age;
    char grade;
    /*student(string Name,int Age,char G,int ID){
        name = Name;
        age = Age;
        grade = G;
        id = ID;
    }*/
    void set_id(int x){
        id = x;
    }
    int get_id(){
        return id;
    }
};

student create_student(){
    string name;
    int age;
    int id;
    char grade;
    cout << "Enter your name: ";
    cin.ignore(1,'\n');
    getline(cin,name);
    cout << "Enter your age: ";
    cin >> age;
    cout  << "your grade last year: ";
    cin >> grade;
    cout << "Enter your id: ";
    cin >> id;
    student s;
    s.name = name;
    s.age = age;
    s.grade = grade;
    s.set_id(id);
    return s;
}

struct node{
    student s;
    struct node *link;
};

typedef struct node node;



node *create_list(){
    int n;
    cout << "Enter how many students you want: ";
    cin >> n;
    node *head = new node;
    node *ptr = head;
    node *pre;
    for(int i = 0; i < n ;i++){
        student SS = create_student();
        ptr->s.name = SS.name;
        ptr->s.age = SS.age;
        ptr->s.grade = SS.grade;
        ptr->s.set_id(SS.get_id());
        ptr->link = new node;
        pre = ptr;
        ptr = ptr->link;
    }
    pre->link = NULL;
    return head;
}

void print_list(node *head){
    while(head != NULL){
        cout << "Name: " << head->s.name <<" Age: " << head->s.age << " Grade: " << head->s.grade << " id: " << head->s.get_id() << endl;
        head = head->link;
    }
}

int main(){
    node *head = create_list();
    print_list(head);
}