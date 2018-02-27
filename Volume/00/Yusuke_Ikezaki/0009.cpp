#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_N = 999999; // いくつまで調べるか 
bool prime[MAX_N + 1]; // 添字が素数なら true、それ以外は false

void sieve()
{
  prime[0] = prime[1] = false; // 例外処理
  // 配列 prime の初期化
  for(int i = 2; i <= MAX_N; ++i)
    prime[i] = true;
  // 素数でないものを調べる
  for(int i = 2; i <= MAX_N; ++i)
    if(prime[i])
      for(int j = i * 2; j <= MAX_N; j += i)
	prime[j] = false;
}

int is_prime(int n)
{
  return prime[n];
}

int main()
{
  int n,i,ans; 

  while(cin >> n){ // このように書くと EOF まで入力を読み込む
    sieve();
    for(i=1,ans=0;i<=n;i++)
      if(is_prime(i)) ans++;
    cout<<ans<<endl;
  }
}
