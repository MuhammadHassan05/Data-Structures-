#include <iostream>
#include <string>
#include <conio.h>   // for getch()
#include <windows.h> // for Sleep() and system("cls")
using namespace std;

// STRUCT: PROCESS NODE
struct Process {
    string name;
    int priority;
    int duration;
    Process* next;
};

// QUEUE CLASS (FIFO)
class Queue {
private:
    Process* front;
    Process* rear;
public:
    Queue() {
        front = rear = NULL;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(string name, int priority, int duration) {
        Process* temp = new Process;
        temp->name = name;
        temp->priority = priority;
        temp->duration = duration;
        temp->next = NULL;

        if (rear == NULL) {
            front = rear = temp;
        }
        else {
            rear->next = temp;
            rear = temp;
        }
    }

    Process* dequeue() {
        if (isEmpty()) return NULL;
        Process* temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        return temp;
    }

    void display() {
        if (isEmpty()) {
            cout << "[Queue Empty]"<<endl;
            return;
        }
        Process* temp = front;
        cout << "Ready Queue: ";
        while (temp != NULL) {
            cout << "[" << temp->name << " (P" << temp->priority
                << ", D" << temp->duration << "s)] ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// STACK CLASS (LIFO)
class Stack {
private:
    Process* top;
public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(Process* p) {
        Process* temp = new Process;
        temp->name = p->name;
        temp->priority = p->priority;
        temp->duration = p->duration;
        temp->next = top;
        top = temp;
    }

    Process* pop() {
        if (isEmpty()) return NULL;
        Process* temp = top;
        top = top->next;
        return temp;
    }

    void displayTop3() {
        if (isEmpty()) {
            cout << "No completed tasks"<<endl;
            return;
        }
        cout << "Last 3 Completed Tasks: ";
        Process* temp = top;
        int count = 0;
        while (temp != NULL && count < 3) {
            cout << "[" << temp->name << "] ";
            temp = temp->next;
            count++;
        }
        cout << endl;
    }
};

int main() {
    Queue readyQueue;
    Stack completedStack;
    Stack killedStack;

    bool running = true;
    int choice;

    while (running) {
        cout << endl;
        cout << "============================="<<endl;
        cout << "   PROCESS MANAGER SIMULATOR"<<endl;
        cout << "============================="<<endl;
        cout << "1. Add New Task"<<endl;
        cout << "2. Execute Next Task (Round Robin)"<<endl;
        cout << "3. Undo Last Completed Task"<<endl;
        cout << "4. Kill Current Running Task"<<endl;
        cout << "5. Restore Last Killed Task"<<endl;
        cout << "6. Display All Queues"<<endl;
        cout << "7. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1: {
            string name;
            int priority, duration;
            cout << "Enter Task Name: ";
            cin >> name;
            cout << "Enter Priority: ";
            cin >> priority;
            cout << "Enter Duration (in seconds): ";
            cin >> duration;
            readyQueue.enqueue(name, priority, duration);
            cout << "Task Added Successfully!"<<endl;
            break;
        }

        case 2: {
            if (readyQueue.isEmpty()) {
                cout << "No tasks available to execute!"<<endl;
                break;
            }

            Process* current = readyQueue.dequeue();
            cout << "Running Task: " << current->name
                << " (Priority: " << current->priority
                << ", Duration: " << current->duration << "s)"<<endl;

            int timeSlice = 2;
            Sleep(timeSlice * 1000); // wait for 2 seconds (simulate running)

            current->duration -= timeSlice;

            if (current->duration > 0) {
                cout << "Time slice complete. Re-enqueuing " << current->name << "..."<<endl;
                readyQueue.enqueue(current->name, current->priority, current->duration);
            }
            else {
                cout << "Task " << current->name << " completed!"<<endl;
                completedStack.push(current);
            }
            delete current;
            break;
        }

        case 3: {
            Process* undone = completedStack.pop();
            if (undone == NULL)
                cout << "No completed task to undo!"<<endl;
            else {
                cout << "Undo: Restoring " << undone->name << " to ready queue"<<endl;
                readyQueue.enqueue(undone->name, undone->priority, undone->duration);
            }
            break;
        }

        case 4: {
            if (readyQueue.isEmpty()) {
                cout << "No running task to kill! "<<endl;
                break;
            }
            Process* killed = readyQueue.dequeue();
            cout << "Task " << killed->name << " has been killed!"<<endl;
            killedStack.push(killed);
            delete killed;
            break;
        }

        case 5: {
            Process* restored = killedStack.pop();
            if (restored == NULL)
                cout << "No killed task to restore!"<<endl;
            else {
                cout << "Restoring task " << restored->name << " to ready queue "<<endl;
                readyQueue.enqueue(restored->name, restored->priority, restored->duration);
            }
            break;
        }

        case 6: {
            readyQueue.display();
            completedStack.displayTop3();
            break;
        }

        case 7:
            running = false;
            cout << "Exiting simulation..."<<endl;
            break;

        default:
            cout << "Invalid option! Try again "<<endl;
        }
        cout << endl;

        cout << "Press any key to continue...";
        _getch();
        system("cls"); // clears screen for clean menu
    }

    return 0;
}
