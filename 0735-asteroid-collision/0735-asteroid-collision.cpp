class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> collision;
        for(int i = 0; i<asteroids.size();i++)
        {
            if(asteroids[i]>0)
                collision.push_back(asteroids[i]);
            else
            {
                while(!collision.empty() && collision.back()>0 && collision.back()<abs(asteroids[i]))
                    collision.pop_back();
                if(!collision.empty() && collision.back()==abs(asteroids[i]))
                    collision.pop_back();
                else if(collision.empty() || collision.back()<0)
                    collision.push_back(asteroids[i]);
            }
        }
        return collision;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();