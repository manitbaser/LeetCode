class Solution {
public:
    string sortString(string s) 
{
	map<char, int> freqs;

	for(auto c : s)
	{
		freqs[c]++;
	}

	string res = "";

	while(res.size() < s.size()){
		for(auto& [let, freq] : freqs)
		{
			if(freq > 0)
			{
				res += let;
				--freq;
			}
		}

		for(auto it = freqs.rbegin(); it != freqs.rend(); ++it)
		{
			auto& [let, freq] = *it;

			if(freq > 0)
			{
				 res += let;
				--freq;
			}
		}
	}

	return res;
}};