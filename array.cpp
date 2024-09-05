#include <iostream>
using namespace std;

class MenuDriven {
public:
    int arr[5];

    void record() {
        cout << "Enter 5 values:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
        cout << "You entered: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void update() {
        int index, value;
        cout << "Enter the index to update  ";
        cin >> index;
             if (index < 0 || index >= 5) {
            cout << "Invalid " << endl;
            return;
        }

        cout << "Enter the new value: ";
        cin >> value;

        arr[index] = value;

        cout << "Updated values: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void menu() {
        int ch;
        do {
            cout << "Menu "<<endl;
            cout<< "Record"<<endl;
            cout<< "Values "<<endl;
            cout<<"Update" <<endl;
            cout<<"Value"<<endl;
            cout<<"Enter your choice: ";
            cin >> ch;

            switch (ch) {
                case 1:
                    record();
                    break;
                case 2:
                    update();
                    break;
                case 3:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    break;
            }
        } while (ch != 3);
    }
    int statics()
    {
int l = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<=l;i++){
        int mean=0;
        mean=(i+mean)/l;
        cout<<mean<<endl;

    }
    return 0;
};

int main() {
    MenuDriven md;
    md.menu();
    md.statics();
    return 0;
}
