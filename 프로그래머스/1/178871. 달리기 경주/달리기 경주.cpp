#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> player_indices;
    
    for (int i=0; i<players.size(); i++) {
        player_indices[players[i]] = i;
    }
    
    for (const string& name : callings) {
        int current_idx = player_indices[name];
        int front_idx = current_idx-1;
        string front_player = players[front_idx];
        
        swap(players[current_idx], players[front_idx]);
        
        player_indices[name] = front_idx;
        player_indices[front_player] = current_idx;
    }
    
    
    return players;
}