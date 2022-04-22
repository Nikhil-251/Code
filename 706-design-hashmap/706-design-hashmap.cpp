class MyHashMap {

public:
     int flag[1000001];
    MyHashMap() {
       fill(flag,flag+1000001,-1);
    }
    
    void put(int key, int value) {
        flag[key] = value;
    }
    
    int get(int key) {
        return flag[key];
    }
    
    void remove(int key) {
        flag[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */