class KthLargest {
private: 
    vector<int> arr;
    int k;    
public:
    KthLargest(int k, vector<int>& nums) {
        this->arr = nums;
        this->k = k;
    }
    
    int add(int val) {
        arr.push_back(val);
        sort(arr.begin(), arr.end());
        return arr[arr.size() - k];
    }
};
