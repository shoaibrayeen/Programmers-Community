## About Git And Git Cheat Sheet

```sh
  # Install
  $ sudo apt install git (Ubantu)
  $ sudo pip install git (Mac)

  # Login 
  $ git config --global user.name "USERNAME"
  $ git config --global user.email "USER Email"
  
  # Clone
  $ git clone URL

  # Initialize
  $ git init
  
  # Adding A File
  $ git add fileName

  # Adding All File to the current repository
  $ git add .
  
  # Commiting to the Current Branch
  $ git commit -m "Related Text"

  # Checking the Log
  $ git log
  
  # Checking status
  $ git status
```
- [For All Commands](https://www.atlassian.com/git/tutorials/atlassian-git-cheatsheet)

## Creating Pull Request Using Git Command
```
  # Clone the Repository
  >>> git clone https://github.com/shoaibrayeen/Programmers-Community
  
  # Go to Directory
  >>> cd /Programmers-Community
  
  # Make A Branch to Create Your Pull Request
  >>> git checkout -b your_branch_name
  
  # Add your code to the respective file
  # [ say for factorial code by person A,file name should be SolutionByA.cpp ]
  >>> git add .
  
  # Commit Your Change
  >>> git commit -m "Add A Related Message"
  
  # Push Files to your new Branch
  >>> git push origin your_branch_name
  
  # Now Go to the repository and Create PR with Your branch
```

## Updating your local with Remote Machine
```
  # Go to master branch
  >>> git checkout master
  
  # Pull New Changes
  >>> git pull origin master
  
  # Rebase your branch with update master branch
  >>> git rebase master

```

## Delete your branch after merging your file
```
  # Delete Your branch
  >>> git branch -D your_branch_name
  
```

## List All Branches of your repository
```
  # List All branches
  >>> git branch
  
```
