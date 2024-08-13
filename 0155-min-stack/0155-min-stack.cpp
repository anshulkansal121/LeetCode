class MinStack {
public:
    vector<pair<int,int>> st;
    int tos;
    MinStack () {
        tos = -1;
    }
    
    void push(int val) {
        if(tos==-1)
            st.push_back({val,val});
        else
        {
            st.push_back({val, min(val,st[tos].second)});
        }
        tos++;
    }
    
    void pop() {
        // int val = st[tos].first;
        tos--;
        st.pop_back();
    }
    
    int top() {
        return st[tos].first;
    }
    
    int getMin() {
        return st[tos].second;
    }
};


auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */