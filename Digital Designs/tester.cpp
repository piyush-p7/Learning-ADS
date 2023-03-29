#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to build segment tree
void build_tree(vector<double>& values, vector<double>& tree, int start, int end, int node) {
    if (start == end) {
        tree[node] = values[start];
    } else {
        int mid = (start + end) / 2;
        build_tree(values, tree, start, mid, 2 * node);
        build_tree(values, tree, mid + 1, end, 2 * node + 1);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
}

// Function to query the segment tree
double query_tree(vector<double>& tree, int start, int end, int node, int left, int right) {
    if (right < start || end < left) {
        return numeric_limits<double>::infinity();
    } else if (left <= start && end <= right) {
        return tree[node];
    } else {
        int mid = (start + end) / 2;
        double left_val = query_tree(tree, start, mid, 2 * node, left, right);
        double right_val = query_tree(tree, mid + 1, end, 2 * node + 1, left, right);
        return min(left_val, right_val);
    }
}

// Function to compare two numbers
string compare_numbers(double num1, double num2) {
    if (num1 < num2) {
        return "Less than";
    } else if (num1 > num2) {
        return "Greater than";
    } else {
        return "Equal to";
    }
}

int main() {
    // Get the number of values from the user
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    // Get the values from the user and build the segment tree
    vector<double> values(n);
    vector<double> tree(4 * n);
    cout << "Enter " << n << " double precision floating point numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    build_tree(values, tree, 0, n - 1, 1);

    // Get the two numbers to compare from the user
    double num1, num2;
    cout << "Enter two double precision floating point numbers to compare:\n";
    cin >> num1 >> num2;

    // Check if the numbers are in the segment tree
    bool num1_found = find(values.begin(), values.end(), num1) != values.end();
    bool num2_found = find(values.begin(), values.end(), num2) != values.end();

    // Compare the numbers if both are found, otherwise return an error message
    if (num1_found && num2_found) {
        int left = find(values.begin(), values.end(), num1) - values.begin();
        int right = find(values.begin(), values.end(), num2) - values.begin();
        if (left > right) {
            swap(left, right);
        }
        double min_val = query_tree(tree, 0, n - 1, 1, left, right);
        if (min_val == num1) {
            cout << num1 << " is equal to the minimum value between " << num1 << " and " << num2 << endl;
        } else if (min_val == num2) {
            cout << num2 << " is equal to the minimum value between " << num1 << " and " << num2 << endl;
            }
    }
}
