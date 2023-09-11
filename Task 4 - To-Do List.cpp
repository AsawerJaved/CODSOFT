#include "ToDoList.h"

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
