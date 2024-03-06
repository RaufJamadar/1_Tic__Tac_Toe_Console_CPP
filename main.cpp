#include <bits/stdc++.h>
using namespace std;

void draw(char arr[][3]){
  cout << '\n';
  cout << "   |   |   " << '\n';
  cout << " " << arr[0][0] << " | " << arr[0][1] << " | " << arr[0][2] << '\n';
  cout << "___|___|___" << '\n';
  cout << "   |   |   " << '\n';
  cout << " " << arr[1][0] << " | " << arr[1][1] << " | " << arr[1][2] << '\n';
  cout << "___|___|___" << '\n';
  cout << "   |   |   " << '\n';
  cout << " " << arr[2][0] << " | " << arr[2][1] << " | " << arr[2][2] << '\n';
  cout << "   |   |   " << '\n';
  cout << '\n';
}

bool compare(char arr[][3]){
  for(int i=0; i<3;i++){
    if(arr[i][0]!=' ' && (arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2])){
      system("cls");
      draw(arr);
      if(arr[i][0]=='O'){
        cout << "Player-1 Won!!!" << endl;
      }else{
        cout << "Player-2 Won!!!" << endl;
      }
      cout << "Game Over!!!" << endl;
      return true;
    }

    if(arr[0][i]!=' ' && (arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i])){
      system("cls");
      draw(arr);
      if(arr[0][i]=='O'){
        cout << "Player-1 Won!!!" << endl;
      }else{
        cout << "Player-2 Won!!!" << endl;
      }
      cout << "Game Over!!!" << endl;
      return true;
    }
  }

  if(arr[0][2]!=' ' && (arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])){
    system("cls");
    draw(arr);
    if(arr[0][2]=='O'){
      cout << "Player-1 Won!!!" << endl;
    }else{
      cout << "Player-2 Won!!!" << endl;
    }
    cout << "Game Over!!!" << endl;
    return true;
  }

  if(arr[0][0]!=' ' && (arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])){
    system("cls");
    draw(arr);
    if(arr[0][0]=='O'){
      cout << "Player-1 Won!!!" << endl;
    }else{
      cout << "Player-2 Won!!!" << endl;
    }
    cout << "Game Over!!!" << endl;
    return true;
  }
  return false;
}

int main(){
  system("cls");
  char arr[][3]={{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
  int c=0;
  while(1){
    draw(arr);
    int n;
    cout << "Give position (1 to 9) as input!!!" << endl;
    if(c%2==0){
      cout << "Player-1 your turn ('O'): ";
      cin >> n;
    }else{
      cout << "Player-2 your turn ('X'): ";
      cin >> n;
    }
    int i=n/3;
    int j=(n-1)%3;
    if(n%3==0) i--;
    if(c%2==0){
      arr[i][j]='O';
    }else{
      arr[i][j]='X';
    }
    c++;
    if(compare(arr)){
      break;
    }else if(c==9){
      system("cls");
      draw(arr);
      cout << "Game Over!!!\nNo result." << endl;
      break;
    }
    system("cls");
  }
  return 0;
}