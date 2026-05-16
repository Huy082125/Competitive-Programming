class Twitter {
private:
    long long timeStamp;
    vector<vector<pair<long long,int>>> tweets;
    vector<unordered_set<int>> following;

public:
    Twitter() {
        // write your code here 
        timeStamp = 0;
        tweets.resize(501);
        following.resize(501);
    }

    void postTweet(int userId, int tweetId) {
        // write your code here 
        timeStamp++;
        tweets[userId].push_back({timeStamp, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        // write your code here 
        vector<int> re;
        priority_queue<tuple<long long, int, int, int>> q;
        if (!tweets[userId].empty()) {
            int idx=tweets[userId].size()-1;
            q.push({tweets[userId][idx].first, tweets[userId][idx].second, userId, idx});
        }
        for (auto followee: following[userId]) {
            if (!tweets[followee].empty()) {
                int idx=tweets[followee].size()-1;
                q.push({tweets[followee][idx].first, tweets[followee][idx].second, followee, idx});
            }
        }
        while (!q.empty()&&re.size()<10) {
            auto [time, tweetId, user, idx]=q.top();
            q.pop();
            re.push_back(tweetId);
            if (idx>0) {
                int newidx=idx-1;
                q.push({tweets[user][newidx].first, tweets[user][newidx].second, user, newidx});
            }
        }
        return re;
    }

    void follow(int followerId, int followeeId) {
        // write your code here 
        if (followerId == followeeId) return;
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        // write your code here 
        following[followerId].erase(followeeId);
    }
};