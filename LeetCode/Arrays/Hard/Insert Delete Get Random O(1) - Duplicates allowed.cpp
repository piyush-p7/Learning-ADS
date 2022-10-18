// 381. Insert Delete GetRandom O(1) - Duplicates allowed
// RandomizedCollection is a data structure that contains a collection of numbers, possibly duplicates (i.e., a multiset). It should support inserting and removing specific elements and also removing a random element.
// Implement the RandomizedCollection class:
// RandomizedCollection() Initializes the empty RandomizedCollection object.
// bool insert(int val) Inserts an item val into the multiset, even if the item is already present. Returns true if the item is not present, false otherwise.
// bool remove(int val) Removes an item val from the multiset if present. Returns true if the item is present, false otherwise. Note that if val has multiple occurrences in the multiset, we only remove one of them.
// int getRandom() Returns a random element from the current multiset of elements. The probability of each element being returned is linearly related to the number of same values the multiset contains.
// You must implement the functions of the class such that each function works on average O(1) time complexity.
// Note: The test cases are generated such that getRandom will only be called if there is at least one item in the RandomizedCollection.

// Example 1:

// Input
// ["RandomizedCollection", "insert", "insert", "insert", "getRandom", "remove", "getRandom"]
// [[], [1], [1], [2], [], [1], []]
// Output
// [null, true, false, true, 2, true, 1]

// Explanation
// RandomizedCollection randomizedCollection = new RandomizedCollection();
// randomizedCollection.insert(1);   // return true since the collection does not contain 1.
//                                   // Inserts 1 into the collection.
// randomizedCollection.insert(1);   // return false since the collection contains 1.
//                                   // Inserts another 1 into the collection. Collection now contains [1,1].
// randomizedCollection.insert(2);   // return true since the collection does not contain 2.
//                                   // Inserts 2 into the collection. Collection now contains [1,1,2].
// randomizedCollection.getRandom(); // getRandom should:
//                                   // - return 1 with probability 2/3, or
//                                   // - return 2 with probability 1/3.
// randomizedCollection.remove(1);   // return true since the collection contains 1.
//                                   // Removes 1 from the collection. Collection now contains [1,2].
// randomizedCollection.getRandom(); // getRandom should return 1 or 2, both equally likely.
Code Below:
class RandomizedCollection {
public:
    map <int, set<int>> m;                          //used to map element with the indices where it is present in vector v
    vector <int> v;                                 //used to store all the elements (contains duplicate as well)
    RandomizedCollection() {}                       //constructor (no such initialisation needed)
    
    bool insert(int val) {
        v.push_back(val);                           //inserting element into vector
        m[val].insert(v.size()-1);                  //insering the index of newly inserted element into map 
        return m[val].size() == 1;                  
    }
    
    bool remove(int val) {
        auto it = m.find(val);                      //used to find if element is present in map
        if(it != m.end()){                          //if it is present,
            auto pos = *it->second.begin();         //pos is an integer and not pointer
            it->second.erase(it->second.begin());   //erases integer from the set stored in map corresponding to the element val
            v[pos] = v.back();                      //element from the back is brought at the index pos
            m[v.back()].insert(pos);                //new index of that element is stored in map
            m[v.back()].erase(v.size()-1);          //erasing the old index from the map
            v.pop_back();                           //erasing the element from vector 
            if (it->second.size() == 0)             //if no indices are present in map corresponding to val in map, it means it was present only once 
                m.erase(it);                        //so erase from map itself
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];                //rand() is used to get a random number and it is % by v.size() so that the result is within the size of vector v
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */