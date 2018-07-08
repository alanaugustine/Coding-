vector<int> Solution::stepnum(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    queue<int> q;
    vector<int> ans;
    int front,a,b,lastdigit;
    for(int i=0;i<10;i++)
        q.push(i);
        
        while(q.size()!=0)
        {
            front=q.front();
            q.pop();
            if(front>=A && front<=B)
                ans.push_back(front);
            if(front>B || front==0)
                continue;
                
            lastdigit=front%10;
            a=front*10+lastdigit+1;
            b=front*10+lastdigit-1;
            if(lastdigit==0)
                q.push(a);
            else if(lastdigit==9)
                q.push(b);
            else
            {
                q.push(b);
                q.push(a);
                
            }
        }
        
        return ans;
    
}
