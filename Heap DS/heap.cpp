#include <iostream>
#include <queue>
using namespace std;

class Heap{
    public:
        int arr[100];
        int index;
        
        Heap () {
            arr[0] = -1;
            index = 0;
        }

        // Max Heap
        void insert(int data) {    // O(logn)
            index += 1;
            int pos = index;
            arr[pos] = data;
            while (pos > 1) {
                int parent = pos / 2;
                if (arr[parent] < arr[pos]) {
                    swap(arr[parent], arr[pos]);
                    pos = parent;
                }
                else
                    return;
            } 
        }
        // Replacing root with last element and then heapify
        void deleteFromHeap() {
            if (index == 0) {
                cout << "Heap is Empty" << endl;
                return;
            }
            // Put the last element to root
            arr[1] = arr[index];
            // Remove the last element
            index -= 1;
            // heapify - take the new root to it's correct position - O(logn)
            int pos = 1;
            while (pos <= index) {
                int leftChildIndex = 2*pos;
                int rightChildIndex = 2*pos + 1;
                if (arr[leftChildIndex] > arr[pos] and leftChildIndex <= index) {
                    swap(arr[leftChildIndex], arr[pos]);
                    pos = leftChildIndex;
                }

                else if (arr[rightChildIndex] > arr[pos] and rightChildIndex <= index) {
                    swap(arr[rightChildIndex], arr[pos]);
                    pos = rightChildIndex;
                }

                else return;
            }
        }

        void print() {
            if (index == 0) {
                cout << "Heap is empty" << endl;
                return;
            }
            cout << "Heap: ";
            for (int i = 1; i <= index; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
};

void heapify(int arr[], int n, int i) {
    int correct_position = i;
    int left = 2*i;
    int right = 2*i + 1;
    
    if (left <= n and arr[left] > arr[correct_position]) 
        correct_position = left;
    
    if (right <= n and arr[right] > arr[correct_position]) 
        correct_position = right;

    if (correct_position != i) {
        swap(arr[i], arr[correct_position]);
        heapify(arr, n, correct_position);
    }
}

void heapSort(int arr[], int n) {
    int t = n;
    while (t > 1) {
        // Step 1: Swap the first and last element
        swap(arr[1], arr[t]);
        t -= 1;

        // Step 2: Heapify the remaining elements (t-1 elements)
        heapify(arr, t, 1);  // Put this root element to it's correct position
    }
}

int main() {

    Heap hp;
    hp.print();
    hp.insert(50);
    hp.insert(55);
    hp.insert(53);
    hp.insert(52);
    hp.insert(54);
    hp.print();
    hp.deleteFromHeap();
    hp.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 6;
    n -= 1;
    for (int i = n/2; i >= 1; i--) {
        heapify(arr, n, i);    // For each node, heapify
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    heapSort(arr, n);

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    // Using Prirty Queue
    priority_queue<int> pq;  // MaxHeap by default

    pq.push(1);
    pq.push(5);
    pq.push(3);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl; 
    cout << "Size: " << pq.size() << endl;
    cout << endl;

    // priority_queue for min heap
    priority_queue<int, vector<int>, greater<int> > pq1;
    pq1.push(1);
    pq1.push(5);
    pq1.push(3);
    cout << pq1.top() << endl;
    pq1.pop();
    cout << pq1.top() << endl;
    cout << "Size: " << pq1.size() << endl;


    return 0;
}
