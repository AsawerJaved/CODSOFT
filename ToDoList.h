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
