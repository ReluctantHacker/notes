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

- **Switch branch**:
```
git checkout branchName
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

- **Updates local repo**: updates your local repo with all of the latest changes from a remote repo but doesn’t make any changes to your local workspace. The benefit of the git fetch vs git pull is that a fetch enables you to continue editing files in your local working directory without having to merge your code with updates from the remote repo. With a git fetch, you can finish editing files locally, commit your files and then do a git merge to synchronize your updates with the fetched files. This brings you up to date with the updates the fetch pulled down from the remote machine.
```
git fetch -all
```

- **Updates local and merge**: You should definitely understand the difference between "clone", "fetch" and "pull", here's some reference you have to check it out: [reference_1](https://stackoverflow.com/questions/3620633/what-is-the-difference-between-pull-and-clone-in-git), [reference_2](https://stackoverflow.com/questions/292357/what-is-the-difference-between-git-pull-and-git-fetch), [refernece_3](https://www.theserverside.com/blog/Coffee-Talk-Java-News-Stories-and-Opinions/Git-pull-vs-fetch-Whats-the-difference)
```
git pull origin branName
```

- **show history**: this command would show the history that you modified before that can be checkout. very useful. Here's some reference: https://www.atlassian.com/git/tutorials/rewriting-history/git-reflog 
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

- **Change current branch name**:
```
git branch -m newBranchName
```

- **Clean up unnecessary files**: This would optimize the local repository. It's useful when you find you can't pull or fetch from remote repo
```
git gc --prune=now
```
