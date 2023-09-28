#include <iostream>
#include <vector>
using namespace std;

class ToDoList
{
private:
    vector<string> task;
    vector<string> status;

public:
    void AddTask()
    {
    	// add a new task into the list
        string t;
        cout << "Enter Task: ";
        cin >> t;
        task.push_back(t);
        status.push_back("Pending");  // by default every task is pending
    }

    void ViewTasks()
    {
    	// display all tasks and their status
        cout << "Task\t\tStatus" << endl;
        for (size_t i = 0; i < task.size(); i++)
        {
            cout << task[i] << "\t\t" << status[i] << endl;
        }
    }

    void MarkAsCompleted()
    {
    	// marks the user given task as completed
        string t;
        cout << "Enter Task: ";
        cin >> t;
        for (size_t i = 0; i < task.size(); i++)
        {
            if (t == task[i])
            {
                status[i] = "Completed";
                cout << "Marked as Completed!" << endl;
                return;
            }
        }
        cout << "Task Not Found!" << endl;
    }

    void RemoveTask()
    {
    	// Deletes the task given by the user from the list
        string t;
        cout << "Enter Task: ";
        cin >> t;
        for (size_t i = 0; i < task.size(); i++)
        {
            if (t == task[i])
            {
                task.erase(task.begin() + i);
                status.erase(status.begin() + i);
                cout << "Task Removed!" << endl;
                return;
            }
        }
        cout << "Task Not Found!" << endl;
    }
};

int main()
{
    ToDoList mylist;
    
    // menu
    cout << "1 - To add a Task in the list." << endl;
    cout << "2 - To view Tasks in the list." << endl;
    cout << "3 - To mark a Task as completed." << endl;
    cout << "4 - To delete a Task from the list." << endl;
    cout << "Any other key - To exit" << endl << endl;
    
    while(1)
    {
        int input;
        cout << "Enter Your Choice: ";
        cin >> input;
        
        // add a new task
        if(input == 1)
            mylist.AddTask();
        
        // display tasks in the list
        else if(input == 2)
            mylist.ViewTasks();
        
        // mark a task as completed
        else if(input == 3)
            mylist.MarkAsCompleted();
        
        // deletes a task from the list
        else if(input == 4)
            mylist.RemoveTask();
        
        // exit 
        else
            break;
        cout << "----------------------------------------" << endl;
    }
    cout << "Exited Successfully!" << endl;
    
    return 0;
}
