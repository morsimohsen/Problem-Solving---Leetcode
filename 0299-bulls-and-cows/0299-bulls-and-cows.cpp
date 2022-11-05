class Solution {
public:
    
    string getHint(string secret, string guess) {
        map<int, int> bulls, cows;
        int b = 0, c = 0;
        for(int i = 0; i < guess.size(); i++) {
            if(secret[i] == guess[i]) {
                b++;
            }
            else{
                bulls[secret[i] - '0']++;
                cows[guess[i] - '0']++;
            }
        }
        
        for(int i = 0; i < 10; i++) {
            c += min(bulls[i], cows[i]);
        }
        
        return to_string(b) + "A" + to_string(c) + "B";
        
    }
};