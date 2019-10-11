set term pdf
set out '1.pdf'
set xlabel 'n'
set ylabel 'Delta'
set logscale y
show logscale
plot 'datos.txt' w lp
