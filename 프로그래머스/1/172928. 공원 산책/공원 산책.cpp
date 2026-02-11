#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    //W , H 값 구하기
    int W = park[0].length();
    int H = park.size();
    //S의 좌표 구하기
    int S_X, S_Y;
    for(int i = 0; i < W; i++)
        for(int j = 0; j < H; j++)
            if(park[i][j] == 'S')
            {
                S_X = j;
                S_Y = i;
            }
    //반복문 하기
    char op;
    int n;
    int i = 0;
    while(i < routes.size())
    {
        op = routes[i][0];
        n = routes[i][2] - '0';
        if(op == 'N')
        {
            if(S_Y - n >= 0)
            {
                bool x = false;
                for(int i = S_Y; i >= S_Y - n; i--)
                {
                    if(park[i][S_X] == 'X')
                    {
                        x = true;
                        break;
                    }
                }
                if(!x)
                    S_Y -= n;
            }
        }
        else if(op == 'S')
        {
            if(S_Y + n < H)
            {
                bool x = false;
                for(int i = S_Y; i <= S_Y + n; i++)
                {
                    if(park[i][S_X] == 'X')
                    {
                        x = true;
                        break;
                    }
                }
                if(!x)
                    S_Y += n;
            }
        }
        else if(op == 'W')
        {
            if(S_X - n >= 0)
            {
                bool x = false;
                for(int i = S_X; i >= S_X - n; i--)
                {
                    if(park[S_Y][i] == 'X')
                    {
                        x = true;
                        break;
                    }
                }
                if(!x)
                    S_X -= n;
            }
        }
        else if(op == 'E')
        {
            if(S_X + n < W)
            {
                bool x = false;
                for(int i = S_X; i <= S_X + n; i++)
                {
                    if(park[S_Y][i] == 'X')
                    {
                        x = true;
                        break;
                    }
                }
                if(!x)
                    S_X += n;
            }
        }
        i++;
    }
    answer.emplace_back(S_Y);
    answer.emplace_back(S_X);
    return answer;
}