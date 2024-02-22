#/bin/bash
read -p "Do you want to add all programs(all/0-9):" des
if [[ $des == "all" ]]; then
    git add -A
#if [[ $des == "0-9" ]]; then
else
    echo "invaild input"
fi
read -p "Enter any msg: " msg
git commit -m "$msg"
git push