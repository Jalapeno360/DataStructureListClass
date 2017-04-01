
#include "List.h"


using namespace std;

int main() {
    List a; // making an object of list.cpp to use functions;
    int choice;
    cout<<"Option 1: Insert-front pre-assigned pointers "<< endl;
    cout<<"Option 2: Insert-front 1 - 10 integers"<<endl;
    cout<<"Option 3: Insert-rear pre-assigned pointers"<<endl;
    cout<<"Option 4: Insert-rear 1 - 10 integers"<<endl;
    cout<<"Option 5: Exit Program"<<endl;
    cout<<"Please pick an option: ";

    cin >> choice;
    cout<<"\n"<<endl;
    switch (choice){
        case 1 : {
            cout << "Picked insert-front pre-assigned pointers\n" << endl;
            double i = 100.15;
            void * b = &i;
            a.insert_front(b);
            cout << "First pointer inserted front: " << b << endl;
            double y = 22.5;
            void * t = &y;
            a.insert_front(t);
            cout << "Second pointer inserted front: " << t << endl;
            break;
        }
        case 2 : {
            cout << "Picked insert-front 1 - 10 integers\n" << endl;
            for (int j = 1; j < 11; j++) {
                a.insert_front(j);
                cout << "Number: " << j << " inserted front " << endl;
            }
            break;
        }
        case 3 : {
            cout << "Picked insert-rear pre-assigned pointers\n" << endl;
            string name = "zebra";
            void * q = &name;

            a.insert_rear(q);

            cout << "First pointer inserted rear: " << q << endl;
            string name2 = "lion";
            void * t = &name2;
            a.insert_rear(t);
            cout << "Second pointer inserted rear: " << t << endl;
            break;
        }
        case 4 :{
            cout<<"Picked insert-rear 1 - 10 integers\n"<<endl;
            for (int j = 1; j < 11; j++) {
                a.insert_rear(j);
                cout<<"Number: "<< j<< " inserted rear "<<endl;
            }
            break;

        }
        case 5 : { exit(EXIT_SUCCESS);}


        default : cout<< "Please pick an option or exit of out the program: ";
                 cin>>choice;
            break;
    }



    cout<<"\n"<<endl;
    if(a.isEmpty()){
        cout<<"isEmpty function = True\n"<<endl;
    }else{
        cout<<"isEmpty fuction = False\n"<<endl;
    }
    cout<<""<<endl;
    cout<<"Print forward function"<<endl;
    a.print_forward();
    cout<<"\n"<<endl;

    cout<<"Print reverse function"<<endl;
    a.print_reverse();
    cout<<"\n"<<endl;


    cout<<"Empty List function\n"<<endl;
    a.empty();



    return 0;
}