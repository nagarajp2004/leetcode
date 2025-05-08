class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxwid)
     {
      vector<string>res;
      vector<string>cur;
     int no_words=0;
    for(string& word :words)
    {
      if(word.size()+cur.size()+no_words >maxwid)
      {
         for(int i=0;i<maxwid-no_words;i++){
            cur[i%(cur.size()-1? cur.size()-1:1)]+=' ';
         }
         res.push_back("");
         for(string& s:cur){
            res.back()+=s;
         }
         cur.clear();
         no_words=0;
      }

      cur.push_back(word);
      no_words+=word.size();
    }
    string last_line="";
    for(string x:cur){
        last_line+=x+' ';
    }
         last_line = last_line.substr(0, last_line.size()-1); 
    while(last_line.size()<maxwid){
        last_line+=' ';
    }
     
    res.push_back(last_line);
    return res;
    }
};