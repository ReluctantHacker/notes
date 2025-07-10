Git common commands
-------------------
- **Initialization**: for initialization git repositories (it would create 'master' branch automatically)
```
git init
```

- **Add file**: for adding file into git repository, if you don't do this, git won't do anyting version control
```
git add filename
```

- **Commit**: would commit filename in git repository
```
git commit -m someFilename
```

- **Show Repo**: it would show the git repository Over command line screen
```
git show master:filename
```

- **Show managed by git**: it would show all the files that is managed by the git repository
```
git ls-files
```

- **Remove file from Repo**: this would remove file on repository only
```
git rm file.txt
git commit -m 'remove file.txt'
```

- **Remove file from Repo And System**: this would remove from both repository and filesystem
```
git rm --cached file.txt 
git commit -m 'remove file.txt'
```

- **Show a file's edited log**: this would show the file's edited log, including which line creatd or deleted.
```
git log -p filename
```

- **Show log in gui?**:
```
gitk [filename]
```

- **Show difference**: to get just the diff for a specific commit.
```
git show HEAD
```

- **Create branch**:
```
git branch branchName
```

- **Create branch method 2: This would create branch and go that branch
```
git check -b branchName
```

- **Switch branch**:
```
git checkout branchName
```

- **Visualizing branch topology**: Here's a [reference](https://stackoverflow.com/questions/1838873/visualizing-branch-topology-in-git) talk about this.
```
git log --graph --decorate --oneline
```

- **Show uncommited/untracked files**:
```
git status
```

- **Add remote repo url as origin**: 
```
git remote add origin remoteGitRepo_URL
```

- **Push to a remote branch as name origin**:
```
git push -u origin branchName
```

- **Push forcely**: don't use this command unless there's no other way to solve problem
```
git push -u -f origin branchName
```

- **Add user config globally**: before you can actually commit something you have to add your name and email to the git configuration.   the <config> file is on the route: "c:\Users\<username>\.gitconfig"  the global config can be used without setting config user.name and user.email everytime.
```
git config --global user.email "UserName@example.com"
git config --global user.name "username"
```

- **Add user config locally**: add user config to the local and you would have to set the config user.name and user.email everytimes you create repo.  the config file route: "git repo's .git folder"
```
git config --local user.email "UserName@example.com"
git config --local user.name "username"
```

- **Merge branch**: First checkout to the master branch and then use merge then you can merge branch to the master.
```
git merge branchName
```

- **Clone remote repo to local machine**: This would copy whole repo to the local, you should use this once, unless you want to many clones in your local or something.
```
git clone https://github.com/githubAccount/repoName.git
```

- **Updates local repo**: Git fetch would create local remote master branch "origin/master"(if you fetch master). It means in your local git repo, there would be two branches "local/master" and "origin/master"(remote one). Your current state would still be in local/master. That's why you won't see any change in your files after fetch. When you done the change of your files, you can merge local/master between remote/master. If you using "pull" to get remote commits and find some error about "branch divergent", it's highly because your local has been committed without pull firsts so the local branch would diverge with remote one. In this situation pull won't merge itself, you need to use fetch first, and then merge.
```
git fetch origin
git merge origin/branchName (mostly master)
```

- **Updates local and merge**: You should definitely understand the difference between "clone", "fetch" and "pull", here's some reference you have to check it out: [reference_1](https://stackoverflow.com/questions/3620633/what-is-the-difference-between-pull-and-clone-in-git), [reference_2](https://stackoverflow.com/questions/292357/what-is-the-difference-between-git-pull-and-git-fetch), [refernece_3](https://www.theserverside.com/blog/Coffee-Talk-Java-News-Stories-and-Opinions/Git-pull-vs-fetch-Whats-the-difference). Basically, "pull" is basically "fetch + merge". However, "pull" doesn't work, when the local/master and origin/master(remote one) are divergent with each others. In this time, you should use "git fetch origin" instead.
```
git pull origin branName
```

- **show history**: this command would show the history that you modified before that can be checkout. very useful. Here's a [reference](https://www.atlassian.com/git/tutorials/rewriting-history/git-reflog)
```
git reflog
```

- **Add github token to origin**: when you want to push or pull something, github now doesn't support username and password to push or pull, you have to use **token** to get authorized when you want to push or pull something. This command would make thing done. Here's a [reference](https://stackoverflow.com/questions/68775869/message-support-for-password-authentication-was-removed-please-use-a-personal). Or you can got to .git file to change [remote "origin"] setting, for example like below:
```config 
[core]
	repositoryformatversion = 0
	filemode = true
	bare = false
	logallrefupdates = true
[remote "origin"]
	url = https://<token>@github.com/ReluctantHacker/notes.git
	fetch = +refs/heads/*:refs/remotes/origin/*
[branch "master"]
	remote = origin
	merge = refs/heads/master
```
or use command 
```
git remote set-url origin https://<token>@github.com/<username>/<repoName>.git
```
you can also directly add token when you clone the repo
```
git clone https://<username>:<token>@github.com/<username>/<repoName>.git
```

- **Change current branch name**:
```
git branch -m newBranchName
```

- **Clean up unnecessary files**: This would optimize the local repository. It's useful when you find you can't pull or fetch from remote repo
```
git gc --prune=now
```

- **Here's a website that can analysis and count the lines of code in a project in github call "ghloc", it is also a free project in github
```
https://ghloc.vercel.app/
```
```
https://github.com/subtle-byte/ghloc
```
