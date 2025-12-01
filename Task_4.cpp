//// =============================================
//// QUESTION 4 – GROUP ANAGRAMS USING HASHING
//// =============================================
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//vector<vector<string>> groupAnagrams(vector<string>& words) {
//    unordered_map<string, vector<string>> mp;
//
//    for (string w : words) {
//        string sortedWord = w;
//        sort(sortedWord.begin(), sortedWord.end());
//        mp[sortedWord].push_back(w);
//    }
//
//    vector<vector<string>> result;
//    for (auto& x : mp)
//        result.push_back(x.second);
//
//    return result;
//}
//
//int main() {
//    vector<string> words = { "eat","tea","tan","ate","nat","bat" };
//
//    auto groups = groupAnagrams(words);
//
//    cout << "Grouped Anagrams:\n";
//    for (auto& group : groups) {
//        cout << "[ ";
//        for (auto& w : group)
//            cout << w << " ";
//        cout << "]\n";
//    }
//}
