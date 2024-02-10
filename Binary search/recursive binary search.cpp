int bs(vector<int> &arr, int low, int high, int target){
    if(low>high) return -1;
    int mid = low+(high-low)/2;
    if(arr[mid]==target) return mid;
    else if(target> arr[mid]) return bs(arr, mid+1, high, target);
    else return bs(arr, low, high-1, target);
}
int search(vector<int> &arr, int target) {
    bs(arr, 0, arr.size()-1, target);
}
