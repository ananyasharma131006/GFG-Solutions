class Solution {
  public:
  void sortedInsert(stack<int> &st,int num){
      if(st.empty()|| st.top()<num){
          st.push(num);
          return;
      }
      int x=st.top();
      st.pop();
      
      sortedInsert(st,num);
      st.push(x);
  }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int num=st.top();
        st.pop();
        sortStack(st);
        sortedInsert(st,num);
    }
};
