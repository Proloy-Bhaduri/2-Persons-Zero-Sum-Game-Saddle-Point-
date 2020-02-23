# Saddle-Point
Monolithic Program to find first saddle point or optimal strategy for <b>2-Persons-Zero-Sum Game</b>
Finding one optimal strategy or saddle point <br><br>
<b>Saddle point = (Ai,Bj)</b>=> saddle point is at (<b>i</b>-th Row,<b>j</b>-th Column) of the augmented pay-off matrix 
<br>
<b>Test Case 1<b><br>
<center><img src="https://github.com/Proloy-Bhaduri/Saddle-Point/blob/master/src/screenshot2.JPG"></center>
  <br>
  <b>Test Case 2<b><br>
<center><img src="https://github.com/Proloy-Bhaduri/Saddle-Point/blob/master/src/screenshot.JPG"></center><br>
    <b>Test Case 3<b><br>
<center><img src="https://github.com/Proloy-Bhaduri/Saddle-Point/blob/master/src/screenshot3.JPG"></center><br>
<br>
  <pre>
  Enter
1.)Number of rows
2.)Number of columns
3
3
0
1
1
-1
0
-1
-1
1
0
---------------------------------------The Pay-off Matrix that you entered is:---------------------------------------

                   0               1               1

                  -1               0              -1

                  -1               1               0

                Row-minimums are: 0 -1 -1
                Column-maximums are: 0 1 1
                Maximum of rowmins is : 0


                Minimum of colmax is : 0

                 Saddle point for this game is (A1,B1) and a(1,1) = 0


                 Saddle point exists for this Payoff matrix
                Value of Game = 0

                The match is draw
