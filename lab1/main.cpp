#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
const int maxlen = 255;

#pragma pack(push, 1)
struct dishes {
    char name[maxlen];
    char type[maxlen];
    int cal;
    int weight;
};
#pragma pack(pop)

dishes arr[maxlen];
int dishes_index = 0;

int menu();
void readFromFile(const char* fileName, ofstream& logFile);
void saveToFile(const char* fileName, ofstream& logFile);
void addNew(ofstream& logFile);
void del(ofstream& logFile);
void sort(ofstream& logFile);

int main() {
    ofstream logFile("log.txt", ios::app);
    if (!logFile) {
        cerr << "Error opening log file." << endl;
        return 1;
    }

    while (true) {
        switch (menu()) {
        case 1:
            readFromFile("file.dat", logFile);
            break;
        case 2:
            saveToFile("file.dat", logFile);
            break;
        case 3:
            addNew(logFile);
            break;
        case 4:
            del(logFile);
            break;
        case 5:
            sort(logFile);
            break;
        case 6:
            logFile.close();
            return 0;
        default:
            cout << "Error" << endl;
        }
    }
}

int menu() {
    cout << "\n";
    int ans;
    cout << "Select:\n";
    cout << "1-read from file\n";
    cout << "2-save to file\n";
    cout << "3-add record\n";
    cout << "4-delete record\n";
    cout << "5-sort\n";
    cout << "6-exit\n";
    cout << "\n";
    cout << "Enter number: ";
    cin >> ans;
    cout << "\n";
    return ans;
}

void addNew(ofstream& logFile) {
    logFile << "Adding new record...\n\n";

    cout << "Adding new record...\n\n";
    cout << "Record number: " << dishes_index + 1 << "\n";
    cin.ignore();
    cout << "Enter name: ";
    cin.getline(arr[dishes_index].name, maxlen);
    logFile << "Name: " << arr[dishes_index].name << endl;

    cout << "Enter type: ";
    cin.getline(arr[dishes_index].type, maxlen);
    logFile << "Type: " << arr[dishes_index].type << endl;

    cout << "Enter cal: ";
    cin >> arr[dishes_index].cal;
    logFile << "Calories: " << arr[dishes_index].cal << endl;

    cout << "Enter weight: ";
    cin >> arr[dishes_index].weight;
    logFile << "Weight: " << arr[dishes_index].weight << endl;

    dishes_index++;

    cout << "\n";
    logFile << "\n";
    for (int i = 0; i < dishes_index; i++) {
        cout << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
        logFile << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
    }
}

void saveToFile(const char* fileName, ofstream& logFile) {
    logFile << "Saving records to file...\n";

    cout << "Saving records to file...\n";
    ofstream f(fileName, ios::binary);
    f.write((char*)arr, sizeof(dishes) * dishes_index);
    f.close();

    logFile << "Records saved to file.\n";
    cout << "Records saved to file.\n";
}

void readFromFile(const char* fileName, ofstream& logFile) {
    logFile << "Reading records from file...\n";

    cout << "Reading records from file...\n";
    ifstream f(fileName, ios::binary);
    if (!f) {
        logFile << "File doesn't exist.\n";
        cout << "File doesn't exist.\n";
    }
    else {
        dishes dish;
        dishes_index = 0;
        while (true) {
            f.read((char*)&dish, sizeof(dish));
            if (f.eof())
                break;
            arr[dishes_index] = dish;
            dishes_index++;
        }
        f.close();

        logFile << "Records from file:\n";
        cout << "Records from file:\n";
        for (int i = 0; i < dishes_index; i++) {
            logFile << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
            cout << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
        }
    }
}

void del(ofstream& logFile) {
    logFile << "Deleting a record...\n";

    cout << "Deleting a record...\n";
    int d;
    cout << "Enter the record number to delete: ";
    cin >> d;

    logFile << "Deleted record: " << arr[d - 1].name << "\t" << arr[d - 1].type << "\t" << arr[d - 1].cal << "\t" << arr[d - 1].weight << endl;

    for (int i = d - 1; i < dishes_index; i++)
        arr[i] = arr[i + 1];
    dishes_index--;

    cout << "\n";
    logFile << "\n";
    for (int i = 0; i < dishes_index; i++) {
        cout << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
        logFile << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
    }
}

void sort(ofstream& logFile) {
    logFile << "Sorting records by name...\n";

    cout << "Sorting records by name...\n";
    for (int i = 0; i < dishes_index - 1; i++) {
        for (int j = 0; j < dishes_index - i - 1; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                dishes temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    logFile << "Records sorted by name:\n";
    cout << "Records sorted by name:\n";
    for (int i = 0; i < dishes_index; i++) {
        logFile << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
        cout << i + 1 << "\t" << arr[i].name << "\t" << arr[i].type << "\t" << arr[i].cal << "\t" << arr[i].weight << endl;
    }
}
