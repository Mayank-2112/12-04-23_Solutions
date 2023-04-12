 stack<char>st;
        for(int i=0;i<x.size();i++)
        {
            if(st.empty())
            st.push(x[i]);
            
            else if(st.top()=='(' && x[i]==')') 
            st.pop();
            else if(st.top()=='[' && x[i]==']') 
            st.pop();
            else if(st.top()=='{' && x[i]=='}')
            st.pop();
            else
            st.push(x[i]);
        }
        if(st.empty())
        return true;
        return false;
