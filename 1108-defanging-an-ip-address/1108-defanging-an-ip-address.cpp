class Solution {
public:
    string defangIPaddr(string address) {
        string final;
        for(int i=0; i<address.length(); i++)
        {
            if(address[i]=='.')
            {
                final.push_back('[');
                final.push_back('.');
                final.push_back(']');
            }
            else
            final.push_back(address[i]);
        }
        return final;
    }
};