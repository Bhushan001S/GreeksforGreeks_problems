//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
	public static void main(String[] args) throws IOException
	{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine().trim());
        while(t-->0)
        {
            String S = br.readLine().trim();
            Solution obj = new Solution();
            List<String> ans = obj.find_permutation(S);
            for( int i = 0; i < ans.size(); i++)
            {
                out.print(ans.get(i)+" ");
            }
            out.println();
                        
        }
        out.close();
	}
}


// } Driver Code Ends


class Solution {
    public void solve(char[] s,Set<String>ans_set,int index){
        if(index==s.length){
            ans_set.add(new String(s));
            return ;
        }
        
        for(int i=index ;i<s.length;i++){
            swap(s,index,i);
            solve(s,ans_set,index+1);
            swap(s,index,i);
        }
    }
    private void swap(char[] s, int i, int j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    public List<String> find_permutation(String s) {
        
        Set<String> ans_set = new HashSet<>() ;
        solve(s.toCharArray(),ans_set,0);
        List<String> ans=new ArrayList<>(ans_set);
        Collections.sort(ans);
        return ans;
    }
    
    
    

    
}