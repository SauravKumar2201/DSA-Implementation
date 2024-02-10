int cl(vector<int> &a, int n, int x){
	int low= 0, high = n-1;
	int res= -1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(a[mid]>=x) res= a[mid], high = mid-1;
		else low= mid+1;
	}
	return res;
}
int fl(vector<int> &a, int n, int x){
	int low= 0, high= n-1;
	int ans = -1;
	while(low<=high){
		int mid= low+(high-low)/2;
		if(a[mid]<=x) ans= a[mid], low= mid+1;
		else high = mid-1;
	}
	return ans;

}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floorValue= fl(a,n, x);
	int ceilValue=  cl(a, n, x);
	return {floorValue, ceilValue};
}
