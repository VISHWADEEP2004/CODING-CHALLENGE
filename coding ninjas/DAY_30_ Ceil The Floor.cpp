 Ceil The Floor:

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor = -1, ceil = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
    
            return {x, x};
        } else if (a[i] < x) {
            floor = a[i];
        } else {
          
            ceil = a[i];
            break; 
        }
    }

    return {floor, ceil};
}
