<h2><a href="https://www.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-increasing-subsequence">Longest Increasing Subsequence</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong><code>arr[]</code></strong> of integers, the task is to find the <strong>length</strong> of the <strong>Longest Strictly Increasing Subsequence (LIS)</strong>.</span></p>
<blockquote>
<p><span style="font-size: 14pt;">A subsequence is considered <strong>strictly increasing</strong> if each element in the subsequence is strictly less than the next element.</span></p>
</blockquote>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr<span class="hljs-selector-attr">[]</span> = <span class="hljs-selector-attr">[5, 8, 3, 7, 9, 1]</span>
<strong>Output: </strong>3<strong>
Explanation: </strong>The longest strictly increasing subsequence could be <code>[5, 7, 9]</code><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">, which has a length of 3.</span></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
<strong>Output: </strong>6<strong>
Explanation: </strong>One of the possible longest strictly increasing subsequences is <code>[0, 2, 6, 9, 13, 15]</code><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">, which has a length of 6.</span></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [3, 10, 2, 1, 20]
<strong>Output: </strong>3<strong>
Explanation: </strong>The longest strictly increasing subsequence could be <code>[3, 10, 20]</code><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">, which has a length of 3.</span></span></pre>
<pre><span style="font-size: 14pt;"><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Input: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, Segoe UI, Roboto, Oxygen, Ubuntu, Cantarell, Open Sans, Helvetica Neue, sans-serif;">arr[] = [3, 2]
</span><strong>Output: </strong>1<strong>
Explanation: </strong>Since there is no strictly increasing subsequence, the longest subsequence is any single element, thus the length is 1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ arr.size() ≤ 10<sup>4</sup><br>0 ≤ arr[i] ≤ 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Samsung</code>&nbsp;<code>BankBazaar</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Algorithms</code>&nbsp;