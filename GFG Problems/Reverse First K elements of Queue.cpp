// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> st;
    for(int i=0; i<k; i++){
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
    int count = q.size()-k;
    while(count--){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return q;
}