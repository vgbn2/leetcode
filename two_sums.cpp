include<vector>
include<unordered_map>
int main(){
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup_table;
    
    for (int i = 0; i < nums.size(); i++) {
        int x = target - nums[i];
        
        if (lookup_table.count(x)) {
            return {lookup_table[x], i};
        }
        
        lookup_table[nums[i]] = i;
    }
    
    return {};
    }
};
}
