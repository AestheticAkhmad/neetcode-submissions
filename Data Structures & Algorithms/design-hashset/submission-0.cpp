class MyHashSet {
    vector<int*> hs;
public:
    MyHashSet() {
        this->hs = vector<int*>(1000001, nullptr);
    }
    
    void add(int key) {
        hs[key] = new int(key);
    }
    
    void remove(int key) {
        if (hs[key]) {
            hs[key] = nullptr;
        }
    }
    
    bool contains(int key) {
        if (hs[key]) {
            return true;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */










