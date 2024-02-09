#1/bin/bash

#cat /etc/passwd | sed '/^\#/d' | awk 'FNR%2==0' | rev | sort -r | 
FT_LINE1=1 
FT_LINE2=$(cat /etc/passwd | awk '!/^#/' | awk '(NR%2==0){print}' | wc -l )
echo $FT_LINE2
cat /etc/passwd | awk '!/^#/' | awk '(NR%2==0){print}' | cut -f 1 -d ":" | rev | sort -r | awk "NR==$FT_LINE1,NR==$FT_LINE2{print}" | tr "\n" "," | awk '{print substr($0, 1, length($0)-1)}' | sed -e 's/$/./'