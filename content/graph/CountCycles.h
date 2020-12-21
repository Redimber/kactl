int n;
vvi adj;
vb start, finish;
int cycles = 0;

void dfs(int node) {
	start[node] = true;
    for(int child: adj[node]) 
		if (!start[child])	
			dfs(child);
		else 
			if(!finish[child]) anyCycle++;

	finish[node] = true;
}

