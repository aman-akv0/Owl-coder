vector <int> search(string pat, string txt)
        {
            int n=pat.size();
            int m=txt.size();
            vector<int> v;
            for(int i=0; i<(m-n+1);i++){
                string str="";
                if(pat[0]==txt[i]){
                    str=txt.substr(i,n);
                }
                if(str==pat){
                    v.push_back(i+1);
                }
            }return v;
        }
