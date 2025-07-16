#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> studentIds;
    int action;

    while (1)
    {
        cout << "\n\n\n1. Add students to a list.\n";
        cout << "2. Display the list of students.\n";
        cout << "3. Remove a student from the list by ID.\n";
        cout << "4. Search for a student by ID.\n";
        cout << "Enter your choice (press CTRL+C to exit): ";
        cin >> action;
        switch (action)
        {
        case 1:
            int id;
            cout << "Enter student ID to add: ";
            cin >> id;
            studentIds.push_back(id);
            break;

        case 2:
            cout << "\n\n==== List of student IDs: ";
            for (int i = 0; i < studentIds.size(); i++)
            {
                cout << studentIds[i] << ", ";
            }
            cout << " ====" << endl;
            break;
        case 3:
            int removeId;
            cout << "Enter student ID to remove: ";
            cin >> removeId;
            for (int i = 0; i < studentIds.size(); i++)
            {
                if (removeId == studentIds[i])
                {
                    studentIds.erase(studentIds.begin() + i);
                    cout << "==== Student with ID " << removeId << " removed. ====" << endl;
                    break;
                }
            }
            break;
        case 4:
            int searchId;
            cout << "Enter student ID to search: ";
            cin >> searchId;
            for (int i = 0; i < studentIds.size(); i++)
                if (searchId == studentIds[i])
                {
                    cout << "==== Student with ID " << searchId << " found. ====" << endl;
                    break;
                }
                else
                    cout << "==== Student with ID " << searchId << " not found. ====" << endl;

            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    return 0;
}