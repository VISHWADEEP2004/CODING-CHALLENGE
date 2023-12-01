Sort a Stack:

OUTPUT:

#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	vector<int> tempVector;
	while (!stack.empty()) {
        tempVector.push_back(stack.top());
        stack.pop();
    }
	sort(tempVector.begin(), tempVector.end());
	for (const int& num : tempVector) {
        stack.push(num);
	}
}
