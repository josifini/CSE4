#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class ToDoList {
    private:
    std::vector<std::string> tasks;

    public:
    void loadTasks();
    void saveTasks();
    void addTask(const std::string& task);
    void removeTask(int index);
    void viewTasks()const;
};

void ToDoList::loadTasks(){
    std::ifstream file("tasks.txt");
    std::string task;
    while (std::getline(file, task)) {
        if (!task.empty()) {
            tasks.push_back(task);
        }
    }
    file.close();
}

void ToDoList::saveTasks(){
    std::ofstream file("tasks.txt");
    for(const auto& task : tasks) {
        file << task << std::endl;
    }
    file.close();
}

void ToDoList::addTask(const std::string& task) {
    tasks.push_back(task);
}

void ToDoList::removeTask(int index) {
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + (index - 1));
    }
}

void ToDoList::viewTasks() const {
    for (int i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << std::endl;
    }
}

int main() {
    ToDoList list;
    list.loadTasks();

    bool isRunning = true;
    while (isRunning) {
        std::cout << "\nToDo List Manager\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Remove Task\n";
        std::cout << "3. View Tasks\n";
        std::cout << "4 Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;
        std::cin.ignore(); // To ignore newline left in the stream

        std::string task;
        int index;

        switch (choice) {
            case 1:
                std::cout << "Enter a task: ";
                std::getline(std::cin, task);
                list.addTask(task);
                break;
            case 2:   
                std::cout << "Enter task number to remove: ";
                std::cin >> index;
                list.removeTask(index);
                break;
            case 3: 
                list.viewTasks();
                break;
            case 4: 
                isRunning = false;
                break;
            default:
                std::cout << "Invalid option. Please try again.\n";   
        }
        list.saveTasks();
    }
    return 0;
}