#!/bin/bash
FT_NBR1_5=$(echo $FT_NBR1 | tr \' 0 | tr \\ 1 | tr \" 2 | tr ? 3 | tr ! 4 )
FT_NBR1_10=$(echo $(echo "obase=10; ibase=5; $FT_NBR1_5" | bc))
FT_NBR2_5=$(echo $FT_NBR2 | tr 'mrdoc' '01234')
FT_NBR2_10=$(echo $(echo "obase=10; ibase=5; $FT_NBR2_5" | bc))
SUM_10=$(( $FT_NBR1_10 + $FT_NBR2_10 ))
SUM_13=$(echo $(echo "obase=13; ibase=10; $(( $SUM_10 ))" | bc))
echo $SUM_13 | tr '0123456789ABC' 'gtaio luSnemf'