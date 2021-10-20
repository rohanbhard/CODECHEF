void solve(){
	ll n,m;
	cin>>n>>m;
	 vector<string>v(n),v1(m);
	 ll i;
	 map<string,ll>mp;
	 for(i=0;i<n;i++){
		 cin>>v[i];
		 sort(v[i].begin(),v[i].end());
		 mp[v[i]]++;
	 }
	 vector<ll>ans;
	 for(i=0;i<m;i++){
		 cin>>v1[i];
		 sort(v1[i].begin(),v1[i].end());
		 ans.push_back(mp[v1[i]]);
	 }
	 for(auto it:ans){
		 cout<<it<<" ";
     }
}



def solve(arr,query):
	dict={}
	for s in arr:
		i=str(sorted(s))
		if i in dict:
			dict[i]+=1
		else:
			dict[i]=1
	ans=[]
	for s in query:
		i=str(sorted(s))
		if i in dict:
			ans.append(dict[i])
		else:
			ans.append(0)
	return ans

arr=[i for i in input().split()]
query=[i for i in input().split()]

print(*solve(arr,query))
