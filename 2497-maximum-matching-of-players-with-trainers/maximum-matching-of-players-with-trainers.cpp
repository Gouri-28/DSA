class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int plac=0;
        int trc=0;
        while(plac<players.size() && trc<trainers.size()){
            if((players[plac]<=trainers[trc])){
                plac++;
            }
            trc++;
        }
        return plac;
    }
};