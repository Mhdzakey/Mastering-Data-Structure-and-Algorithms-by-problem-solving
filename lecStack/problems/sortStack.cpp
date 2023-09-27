void sortedInserted(stack<int> &stack, int num){

    //base case
    if(stack.empty() || (!stack.empty() && stack.top < num)){
        stack.push(num);
        return ;
    }
    int n = stack.top();

    //recursive call
    sortedInserted(stack, num);
    stack.push(n);
}



void sortStack(stack<int> &stack){


        // Base Case
        if(stack.empty){
            return;
        }
        int num = stack.top();
                stack.pop();
        // recursive call
        sortStack(stack);

        sortedInserted(sort, num);    

    }