public class count_pali {

	static int countPS(String str)
	{
		int N = str.length();


		int[][] cps = new int[N][N];


		for (int i = 0; i < N; i++)
			cps[i][i] = 1;


		for (int L = 2; L <= N; L++) {
			for (int i = 0; i <= N-L; i++) {
				int k = L + i - 1;
			if (str.charAt(i) == str.charAt(k)) {
				cps[i][k] = cps[i][k - 1]
									+ cps[i + 1][k] + 1;
			}else{
				cps[i][k] = cps[i][k - 1]
									+ cps[i + 1][k]
									- cps[i + 1][k - 1];
			}
			}
		}


		return cps[0][N - 1];
	}


	public static void main(String args[])
	{
		String str = "abcb";
		System.out.println("Total palindromic "
						+ "subsequence are : "
						+ countPS(str));
	}
}

