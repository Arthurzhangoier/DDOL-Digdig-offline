/*echo "# DDOL-Digdig-offline" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/Arthurzhangoier/DDOL-Digdig-offline.git
git push -u origin main
*/
#include<bits/stdc++.h>
using namespace std;
void dfs(mine_kind mine,int x,int y){
  m[x][y]=mine.type;
  srand(time(NULL));
  int r=rand()%100+1;
  if(r<mine.gl/4){
    dfs(mine,x+1,y);
    dfs(mine,x,y+1);
    dfs(mine,x-1,y);
    dfs(mine,x,y-1);
  }
}
int main(){
   
  
