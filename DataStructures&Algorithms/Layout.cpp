#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the array

// Function to initialize an array with user input
void initializeArray(int arr[], int size)
{
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int size)
{
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find the sum of elements in an array
int findSum(const int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

// Function to find the maximum element in an array
int findMax(const int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Function to search for an element in the array
int searchElement(const int arr[], int size, int target)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

// Function to delete an element from the array
void deleteElement(int arr[], int &size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index. Deletion failed.\n";
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = index; i < size - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    --size;

    cout << "Element at index " << index << " deleted successfully.\n";
}

int main()
{
    int size;
    int myArray[MAX_SIZE];
    int choice;

    // Get the size of the array from the user
    cout << "Enter the size of the array (up to " << MAX_SIZE << "): ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE)
    {
        cerr << "Invalid array size.\n";
        return 1; // Exit with an error code
    }

    // Initialize the array with user input
    initializeArray(myArray, size);

    do
    {
        // Display menu options
        cout << "\nMenu:\n";
        cout << "1. Print Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Maximum\n";
        cout << "4. Search Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Print the array
            printArray(myArray, size);
            break;
        case 2:
            // Find and print the sum of array elements
            cout << "Sum of array elements: " << findSum(myArray, size) << endl;
            break;
        case 3:
            // Find and print the maximum element in the array
            cout << "Maximum element in the array: " << findMax(myArray, size) << endl;
            break;
        case 4:
        {
            // Search for an element in the array
            int target;
            cout << "Enter the element to search: ";
            cin >> target;
            int index = searchElement(myArray, size, target);
            if (index != -1)
            {
                cout << "Element " << target << " found at index " << index << ".\n";
            }
            else
            {
                cout << "Element " << target << " not found in the array.\n";
            }
            break;
        }
        case 5:
        {
            // Delete an element from the array
            int index;
            cout << "Enter the index of the element to delete: ";
            cin >> index;
            deleteElement(myArray, size, index);
            break;
        }
        case 6:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 6);

    return 0; // Exit successfully
}
