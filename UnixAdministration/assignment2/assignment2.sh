# Sample shell programming
# Display this month calendar
cal
# Display June 1925
cal 6 1925
# Display 2017
cal 2017
# Sample for loop
for i in `ls / | sort | tail -4`
do
 echo $i
done
# Sample if statement
if test -f shell
then
 echo file shell exists
else
 echo file shell does not exist
fi
