now=$(date +'%m-%d-%Y')
todo_list=TODO_${now}.txt
if [[ ! -f $todo_list ]]; then 
	lastList=`ls -Art *txt | tail -n 1`
	cp $lastList $todo_list
	echo "Created ${todo_list}"
else 
	echo "This action would overwrite today's TODO list. Instead edit ${todo_list}."
fi

