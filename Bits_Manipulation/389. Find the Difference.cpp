char findTheDifference(string s, string t) {
        if (s.empty()) {
            return t[0];
        }
        char res=0;
        for(char i:s){
            res=res^i;
        }
        for(char i:t){
            res=res^i;
        }
        return res;
    }
