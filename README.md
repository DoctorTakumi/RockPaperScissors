// adding various git commands: 

echo "# RockPaperScissors" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/DoctorTakumi/RockPaperScissors.git
git push -u origin main

git remote add origin https://github.com/DoctorTakumi/RockPaperScissors.git
git branch -M main
git push -u origin main


git init
git status
git add main.py (or any other...)
git commit -m "what did I change"
git push
git status
git log


git checkout main (za pozicioniranje na latest)
git reflog (history of changes)
git reflog --date=iso


git checkout HEAD~1 (broj commitova)
git log --oneline
git log --oneline --graph
git bisect bad / git bisect start
git bisect good
(depends on good & bad)
