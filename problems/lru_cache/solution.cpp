class LRUCache {
    
private:
    int time = 0;
    int cur = 0;
    int cap;
    map<int, pair<int, int> > dic;
    
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        
        if (cur == 0) 
            return -1;
        
        if (!dic.count(key))
            return -1;
        
        // contain the key
        
        dic[key].second = ++time;
        return dic[key].first;   
    }
    
    void put(int key, int value) {
        
        if (dic.count(key))
        {
            dic[key] = {value, ++time};
            return;
        }
        
        if (cur >= cap) 
        {
            int key = 0;
            int minTime = INT_MAX;
            for(auto kv : dic)
            {
                if (minTime > kv.second.second)
                {
                    minTime = kv.second.second;
                    key  = kv.first;
                }
            }
            
            //cout << "erase: " << key;
            dic.erase(key);
            
            //cur = cap;
        }
        
        dic[key] = {value, ++time};
        cur++;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */