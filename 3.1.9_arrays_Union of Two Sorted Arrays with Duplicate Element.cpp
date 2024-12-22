#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    // Function to return the union of two arrays
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> st;
        
        // Insert elements from both arrays into the set
        for (int i = 0; i < a.size(); i++) {
            st.insert(a[i]);
        }
        for (int i = 0; i < b.size(); i++) {
            st.insert(b[i]);
        }

        // Clear array 'a' and add elements from the set
        a.clear();
        for (int x : st) {
            a.push_back(x);
        }
        
        return a;
    }
};


// diff analogy of code

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    // Function to return the union of two arrays
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> st;
        
        // Insert elements from both arrays into the set
        st.insert(a.begin(), a.end());
        st.insert(b.begin(), b.end());

        // Convert the set back to a vector
        vector<int> result(st.begin(), st.end());
        
        return result;
    }
};

