public class ABCPath {



	public static int length(String [] grid){
		/**
    	*	max_length = 0 
    	*	for each row in the String array
    	* 	 while there is still an "A"
    	*		   cur_len = extend_path()		
    	*		   if cur_len > max_length
    	*		   		max_length = cur_len;
    	*/

		int max_len = 0;
		int cur_len = 0;
		for (int i = 0; i < grid.length; i ++ ){ 
			for (int j = 0; j < grid[0].length(); j++){
				if (grid[i].charAt(j) == ('A')){
					System.out.println("Found an A");
					cur_len = extend_path(grid, i, j, "A");
					if (cur_len > max_len) {
						max_len = cur_len;
					}
				}
			}
		}
		return max_len;
	}

	public static int extend_path(String [] grid, int cur_row, int cur_col, String cur_path_str ) {
        
        /**
        *	longest = 0
        *	for each direction
        *   	if cannot proceed
        * 			len_cur_dir = the current length
        * 			if len_cur_dir > longest:
        *				longest = len_cur_dir
        *		else 
        *			extend_path(grid, cur_row, cur_col, cur_path_str)
        *
        *	return longest
        *
        */
        int max_len = 0;
        int cur_len = 0;
        int n_row = grid.length;
        int n_col = grid[0].length();
        char cur_char = cur_path_str.charAt(cur_path_str.length()-1);
        char next_char = (char)((int) cur_char + 1);
        
        int next_char_row;
        int next_char_col;
        boolean extended = false;

        // get upper left char
        if (cur_row != 0) {
        	if (cur_col != 0) {
        		if (grid[cur_row -1].charAt(cur_col - 1) == next_char) {
        			extended = true;
        			cur_len = extend_path(grid, cur_row - 1, cur_col - 1, cur_path_str + next_char);
        			if (cur_len > max_len) {
        				max_len = cur_len;
        			}
        		}
        	}
        }
        // get upper char
        if (cur_row != 0) {
        	if (grid[cur_row - 1].charAt(cur_col) == next_char) {
        		extended = true;
        		cur_len = extend_path(grid, cur_row - 1, cur_col, cur_path_str + next_char);
        		if (cur_len > max_len) {
        				max_len = cur_len;
        			}
        	}
        }

        // get upper right char
         if (cur_row != 0) {
         	if (cur_col != n_col -1)
	        	if (grid[cur_row - 1].charAt(cur_col + 1) == next_char) {
	        		extended = true;
	        		cur_len = extend_path(grid, cur_row - 1, cur_col + 1, cur_path_str + next_char);
	        		if (cur_len > max_len) {
	        				max_len = cur_len;
	        			}
	        	}
        }

        // get left char 
         if (cur_col > 0) {
        	if (grid[cur_row].charAt(cur_col -1 ) == next_char) {
        		extended = true;
        		cur_len = extend_path(grid, cur_row, cur_col - 1, cur_path_str + next_char);
        		if (cur_len > max_len) {
        				max_len = cur_len;
        			}
        	}
        }

        // get right char
         if (cur_col < n_col - 1) {
        	if (grid[cur_row].charAt(cur_col + 1) == next_char) {
        		extended = true;
        		cur_len = extend_path(grid, cur_row, cur_col + 1, cur_path_str + next_char);
        		if (cur_len > max_len) {
        				max_len = cur_len;
        			}
        	}
        }

        // get lower left char
         if (cur_row != n_row -1) {
         	if (cur_col != 0){
	        	if (grid[cur_row + 1].charAt(cur_col - 1) == next_char) {
	        		extended = true;
	        		cur_len = extend_path(grid, cur_row + 1, cur_col - 1, cur_path_str + next_char);
	        		if (cur_len > max_len) {
	        				max_len = cur_len;
	        			}
	        	}
        	}
        }
        // get lower char
         if (cur_row != n_row - 1) {
        	if (grid[cur_row + 1].charAt(cur_col) == next_char) {
        		extended = true;
        		cur_len = extend_path(grid, cur_row + 1, cur_col, cur_path_str + next_char);
        		if (cur_len > max_len) {
        				max_len = cur_len;
        			}
        	}
        }
        // get lower right char
         if (cur_row < n_row - 1) {
         	if (cur_col <  n_col - 1) {
	        	if (grid[cur_row + 1].charAt(cur_col + 1) == next_char) {
	        		extended = true;
	        		cur_len = extend_path(grid, cur_row + 1, cur_col + 1, cur_path_str + next_char);
	        		if (cur_len > max_len) {
	        				max_len = cur_len;
	        			}
	        	}
	        }
        }
        if (extended == false) {
        	max_len = cur_path_str.length();
        }


        return max_len;
    }

    public static void main(String [] args) {
    	
    	// String [] grid = {"ABE", "CFG", "BDH", "ABC"};
    	String [] grid = { "KCBVNRXSPVEGUEUFCODMOAXZYWEEWNYAAXRBKGACSLKYRVRKIO", "DIMCZDMFLAKUUEPMPGRKXSUUDFYETKYQGQHNFFEXFPXNYEFYEX", "DMFRPZCBOWGGHYAPRMXKZPYCSLMWVGMINAVRYUHJKBBRONQEXX", "ORGCBHXWMTIKYNLFHYBVHLZFYRPOLLAMBOPMNODWZUBLSQSDZQ", "QQXUAIPSCEXZTTINEOFTJDAOBVLXZJLYOQREADUWWSRSSJXDBV", "PEDHBZOVMFQQDUCOWVXZELSEBAMBRIKBTJSVMLCAABHAQGBWRP", "FUSMGCSCDLYQNIXTSTPJGZKDIAZGHXIOVGAZHYTMIWAIKPMHTJ", "QMUEDLXSREWNSMEWWRAUBFANSTOOJGFECBIROYCQTVEYGWPMTU", "FFATSKGRQJRIQXGAPLTSXELIHXOPUXIDWZHWNYUMXQEOJIAJDH", "LPUTCFHYQIWIYCVOEYHGQGAYRBTRZINKBOJULGYCULRMEOAOFP", "YOBMTVIKVJOSGRLKTBHEJPKVYNLJQEWNWARPRMZLDPTAVFIDTE", "OOBFZFOXIOZFWNIMLKOTFHGKQAXFCRZHPMPKGZIDFNBGMEAXIJ", "VQQFYCNJDQGJPYBVGESDIAJOBOLFPAOVXKPOVODGPFIYGEWITS", "AGVBSRLBUYOULWGFOFFYAAONJTLUWRGTYWDIXDXTMDTUYESDPK", "AAJOYGCBYTMXQSYSPTBWCSVUMNPRGPOEAVVBGMNHBXCVIQQINJ", "SPEDOAHYIDYUJXGLWGVEBGQSNKCURWYDPNXBZCDKVNRVEMRRXC", "DVESXKXPJBPSJFSZTGTWGAGCXINUXTICUCWLIBCVYDYUPBUKTS", "LPOWAPFNDRJLBUZTHYVFHVUIPOMMPUZFYTVUVDQREFKVWBPQFS", "QEASCLDOHJFTWMUODRKVCOTMUJUNNUYXZEPRHYOPUIKNGXYGBF", "XQUPBSNYOXBPTLOYUJIHFUICVQNAWFMZAQZLTXKBPIAKXGBHXX" };
    	int len = length(grid);
    	System.out.println(len);
    	

    	 

    	
    	
    }
}