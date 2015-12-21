## init
git config --global user.name "Firstname Lastname"  
git config --global user.email "hoge@example.com"

## touch README.md
git init  
git add README.md  
git commit -m "first commit"  
git remote add origin git@github.com:osnibe/sample.git  
git push -u origin master  
  
## Push an existing repository from the command line   
  
git remote add origin git@github.com:osnibe/sample.git  
git push -u origin master  
