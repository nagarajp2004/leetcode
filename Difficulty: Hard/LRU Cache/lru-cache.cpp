class LRUCache {
public:
    deque<pair<int,int>> dq; // {key, value}
    int size;

    LRUCache(int cap) {
        size = cap;
    }

    int get(int key) {
        int val = -1;
        for (auto it = dq.begin(); it != dq.end(); it++) {
            if (it->first == key) {
                val = it->second;
                auto node = *it;
                dq.erase(it);            // erase old position
                dq.push_front(node);     // move to front (MRU)
                break;                   // stop loop (important!)
            }
        }
        return val;
    }

    void put(int key, int value) {
        // Check if key already exists
        for (auto it = dq.begin(); it != dq.end(); it++) {
            if (it->first == key) {
                auto node = *it;
                node.second = value;     // update value
                dq.erase(it);
                dq.push_front(node);
                return;                  // return after handling
            }
        }

        // If full, evict least recently used (back element)
        if ((int)dq.size() == size) {
            dq.pop_back();
        }

        // Insert new key-value at front
        dq.push_front({key, value});
    }
};
