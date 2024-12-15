/*
Solution to 1108. Defanging an IP Address(https://leetcode.com/problems/defanging-an-ip-address/description/)
*/


class Solution {
    public String defangIPaddr(String address) {
        
        return address.replace(".","[.]"); //please dont use '' wasted 10 whole minutes :(
    }
}