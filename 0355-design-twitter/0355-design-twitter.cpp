class Twitter {
public:
    int time_stamp;
     unordered_map<int ,unordered_set<int>>follwers;
     unordered_map<int,vector<pair<int,int>>>users;

    Twitter() {
        time_stamp=0;
    }
    
    void postTweet(int userId, int tweetId) {
        time_stamp++;
        users[userId].push_back({time_stamp,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>>pq;

        for(auto i : users[userId]){
          pq.push(i);
        }
       
       for(auto& i :follwers[userId]){
        for(auto& j : users[i]){
            pq.push(j);
        }
       }

       vector<int>ans;
   int n=pq.size();
   int i=0;
    while(i<n && i<10)
     {
        ans.push_back(pq.top().second);
        pq.pop();
        i++;
     
     }
       return ans;
    }
    
    void follow(int followerId, int followeeId) {
        follwers[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        follwers[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */