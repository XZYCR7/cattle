˼·����ȡһ�߲����ϣ��һ��Ѱ��һ�����Ѿ�����Ĺ�ϣ����Ѱ�ҵķ�ʽ��
    ÿ�ζ����ż��������ϣ�������Ȼ���ڹ�ϣ�������Ƿ����ʣ�µ��Ǹ�������
    ���˿��ܻ��ʣ���ѭ��������ҵĻ�ʱ�临�ӶȲ��ͱ�����
    ���ǹ�ϣ�����ʱ�����˵��o(1)�ǳ����������ͻ���㷨��������ַ���ܲ�Ϊo(1)����һ�㲻������ַ�������ͻ����
    �����ܵ�ʱ�临�ӶȾ�Ϊo(n)����ϣ�����һ���ÿռ任ȡʱ����㷨��
class Solution {
public:  
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> hash;//����unorder_map�ٶ�Ҫ��map������ѡ�������ϣ��  
        for(int i=0; i < nums.size();++i){
            int another = target - nums[i];
            if(hash.count(another)){  
                res = vector<int>({hash[another], i});
                return res;
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};