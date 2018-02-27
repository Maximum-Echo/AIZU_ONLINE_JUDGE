#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_N = 999999; // �����܂Œ��ׂ邩 
bool prime[MAX_N + 1]; // �Y�����f���Ȃ� true�A����ȊO�� false

void sieve()
{
  prime[0] = prime[1] = false; // ��O����
  // �z�� prime �̏�����
  for(int i = 2; i <= MAX_N; ++i)
    prime[i] = true;
  // �f���łȂ����̂𒲂ׂ�
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

  while(cin >> n){ // ���̂悤�ɏ����� EOF �܂œ��͂�ǂݍ���
    sieve();
    for(i=1,ans=0;i<=n;i++)
      if(is_prime(i)) ans++;
    cout<<ans<<endl;
  }
}
