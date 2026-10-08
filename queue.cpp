#include <iostream>
#include <string>
using namespace std;
string queue[5];
int current_size=0;
void addPerson(string name){
    if(current_size >=5 ){
    cout << "The Queue is full!!"<< name <<"Can't join right now!"<< endl;
} else {
    queue[current_size]= name;
    current_size++;
    cout << name <<"Added in the queue"<< endl;
}
}
void enterRide(){
    if(current_size == 0) {
            cout << "The Queue is now empty!" << endl;
    } else {
        cout << queue[0] << "has entered the ride!" << endl;
        for (int i = 0;i < current_size - 1;i++) {
            queue[i] = queue[i + 1];
        }
        current_size--;
    }
}
void displayQueue(){
    if(current_size == 0){
        cout << "The Queue is currentlt empty" << endl;
} else {
    cout << "Current Queue:";
    for (int i=0;i < current_size; i++){
            cout << queue[i];
    if(i < current_size - 1){
            cout << " -> ";
    }
    }
    cout << endl;
}
}
int main(){
    addPerson("Abirami");
    addPerson("Gopinath");
    addPerson("Arun Siro");
    addPerson("Aadharshan");
    addPerson("Dharani");
    addPerson("Sam");
    cout << "\n****Current Status****" << endl;
    displayQueue();
    cout << "\n****Letting People on ride****" << endl;
    enterRide();
    cout << "\n****Status after ride entry****" << endl;
    displayQueue();
    return 0;
}
