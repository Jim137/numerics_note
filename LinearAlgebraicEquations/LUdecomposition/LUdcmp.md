# LU decomposition

$$
L U = A\\
\begin{bmatrix}
\alpha_{00} & 0 & 0 \\
\alpha_{10} & \alpha_{11} & 0 \\
\alpha_{20} & \alpha_{21} & \alpha_{22}
\end{bmatrix}
\begin{bmatrix}
\beta_{00} & \beta_{01} & \beta_{02} \\
0 & \beta_{11} & \beta_{12} \\
0 & 0 & \beta_{22}
\end{bmatrix}
=
\begin{bmatrix}
a_{00} & a_{01} & a_{02} \\
a_{10} & a_{11} & a_{12} \\
a_{20} & a_{21} & a_{22}
\end{bmatrix}
$$

Solving for $Ax=b$:

$$
A x = (L U) x = L (U x) = b
$$

Then we have

$$
L y = b\\
U x = y
$$

The advantage of LU decomposition is that the solution of triangular matrix is trivial with forward and backward substitution.

The forward substitution is:

$$
y_0 = \frac{b_0}{\alpha_{00}}\\
y_i = \frac{1}{\alpha_{ii}}(b_i - \alpha_{ij} y_j)\\
$$

while the backward substitution is:

$$
x_n = \frac{y_n}{\beta_{nn}}\\
x_i = \frac{1}{\beta_{ii}}(y_i - \beta_{ij} x_j)\\
$$