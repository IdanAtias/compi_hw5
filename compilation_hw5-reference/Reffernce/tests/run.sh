#!/bin/tcsh

make
@ i = 1
while ($i <= 8)
  ./ex5.exe < test$i.in >! test$i.il
  ./bvm.pl test$i.il >! test$i.res
  echo "test " $i " diff:"
  diff test$i.res test$i.out
  @ i += 1
end
