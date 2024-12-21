#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <numeric> // for accumulate
#include <string>
using namespace std;

int main() {
    // ===========================
    // 1. VECTORS (Dynamic Arrays)
    // ===========================
    vector<int> vec = {10, 20, 30};
    vec.push_back(40); // Add at the end
    vec.pop_back();    // Remove last element
    cout << "Vector size: " << vec.size() << endl;

    // Iterate through a vector
    for (int x : vec) cout << x << " "; // Output: 10 20 30
    cout << endl;

    // Sort vector
    sort(vec.begin(), vec.end()); // O(NlogN)

    // ========================
    // 2. DEQUE (Double-Ended Queue)
    // ========================
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);  // Add to front
    dq.push_back(40);  // Add to back
    dq.pop_front();    // Remove from front
    dq.pop_back();     // Remove from back

    cout << "Deque front: " << dq.front() << ", back: " << dq.back() << endl;

    // ====================
    // 3. STACK (LIFO)
    // ====================
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    cout << "Stack top: " << stk.top() << endl; // Output: 20
    stk.pop();

    // ==========================
    // 4. QUEUE (FIFO)
    // ==========================
    queue<int> q;
    q.push(10);
    q.push(20);
    cout << "Queue front: " << q.front() << endl; // Output: 10
    q.pop();

    // ===========================
    // 5. PRIORITY QUEUE (Heap)
    // ===========================
    priority_queue<int> maxHeap; // Max-Heap
    maxHeap.push(10);
    maxHeap.push(20);
    cout << "Max-Heap top: " << maxHeap.top() << endl; // Output: 20

    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-Heap
    minHeap.push(10);
    minHeap.push(5);
    cout << "Min-Heap top: " << minHeap.top() << endl; // Output: 5

    // ======================
    // 6. SET (Sorted Unique)
    // ======================
    set<int> s = {10, 20, 20, 30};
    s.insert(25);    // Insert 25
    s.erase(20);     // Remove 20
    cout << "Set size: " << s.size() << endl;

    for (int x : s) cout << x << " "; // Output: 10 25 30
    cout << endl;

    // ============================
    // 7. UNORDERED_SET (Hashing)
    // ============================
    unordered_set<int> us = {10, 20, 30};
    us.insert(25);
    us.erase(20);

    // ==========================
    // 8. MAP (Key-Value Pairs)
    // ==========================
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";
    m.erase(2); // Remove key 2

    for (auto [key, value] : m)
        cout << key << ": " << value << endl; // Output: 1: One, 3: Three

    // ================================
    // 9. UNORDERED_MAP (Hash Table)
    // ================================
    unordered_map<string, int> um;
    um["apple"] = 1;
    um["banana"] = 2;

    cout << "Banana count: " << um["banana"] << endl;

    // =================================
    // 10. ALGORITHMS (Sorting, Searching)
    // =================================
    vector<int> arr = {5, 3, 8, 1};
    sort(arr.begin(), arr.end()); // O(NlogN)
    cout << "Sorted: ";
    for (int x : arr) cout << x << " "; // Output: 1 3 5 8
    cout << endl;

    reverse(arr.begin(), arr.end()); // Reverse vector
    cout << "Reversed: ";
    for (int x : arr) cout << x << " "; // Output: 8 5 3 1
    cout << endl;

    // Binary search
    if (binary_search(arr.begin(), arr.end(), 3))
        cout << "3 found" << endl;

    // ======================
    // 11. ACCUMULATE (Sum)
    // ======================
    int sum = accumulate(arr.begin(), arr.end(), 0); // Sum of elements
    cout << "Sum: " << sum << endl;

    // ==================================
    // 12. PAIRS and TUPLES
    // ==================================
    pair<int, string> p = {1, "One"};
    cout << "Pair: " << p.first << ", " << p.second << endl;

    tuple<int, string, double> t = {1, "One", 1.5};
    cout << "Tuple: " << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << endl;

    return 0;
}