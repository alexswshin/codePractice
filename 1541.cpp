//1541
//http://yukari-ko.blogspot.kr/2014/08/1541.html
//https://www.acmicpc.net/problem/1541
// 2016-08-21

int main()
{
  char cmd;
  int n,s,m=0;
  for(scanf("%d",&s);scanf("%c",&cmd),cmd!=10;)
  {
    if(cmd=='-')m=1;
    scanf("%d",&n);
    if(m)s-=n;
    else s+=n;
  }
  printf("%d",s);
}
