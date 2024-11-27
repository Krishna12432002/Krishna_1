Git Workflow Summary:

1. Initializing a Git Repository
git init: This command initializes a new Git repository in the current directory. It creates a .git/ folder that tracks all Git operations for the project.

2. Checking Status
git status: Displays the current state of the working directory. After running git init, no commits are made yet, and all files are untracked.
Files listed under "Untracked files" have not yet been added to version control (Task.cpp).

4. Adding Files
git add <file>: Adds a specific file to the staging area, marking it for inclusion in the next commit.
Example: git add Task.cpp
git add .: Adds all files in the directory to the staging area.

5. Committing Changes
git commit -m "<message>": Saves the staged changes to the repository with a descriptive message.
Example: git commit -m "Initial commit"
For the first commit, you may need to set up user details with:
git config --global user.email "<email>"
git config --global user.name "<name>"

6. Adding a Remote Repository
git remote add origin <url>: Adds a remote repository (such as GitHub) to push changes to.
Example: git remote add origin https://github.com/Krishna12432002/Krishna_1.git.

7. Pushing Changes to Remote
git push -u origin master: Pushes the local changes to the remote repository on the master branch.
git push --set-upstream origin <branch_name>: Pushes changes to a newly created branch and sets up tracking for that remote branch.

