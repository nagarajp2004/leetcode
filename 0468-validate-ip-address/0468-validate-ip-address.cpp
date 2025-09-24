#include<bits/stdc++.h>

class Solution {
public:
    string validIPAddress(string qip) {
        stringstream ss(qip);
        int n=qip.size();
        vector<string>st;

        regex ip4_match(
    
    "^((25[0-5]|2[0-4]\\d|1\\d\\d|[1-9]?\\d)\\.){3}(25[0-5]|2[0-4]\\d|1\\d\\d|[1-9]?\\d)$"
);


        regex ip6_match(
            "([0-9a-fA-F]{1,4}:){7}[0-9a-fA-F]{1,4}"
        );

        int ip4=regex_match(qip,ip4_match);
        int ip6=regex_match(qip,ip6_match);

        if(ip4 ){
            return "IPv4";
        }else if(ip6){
            return "IPv6";
        }
        return "Neither";
    }
};