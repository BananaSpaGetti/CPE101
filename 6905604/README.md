# Week 09 — Git command, GitHub and Stack Overflow

**Author:** Patimakorn Srinam-en &nbsp;|&nbsp; **Student ID:** 6905604
**Course:** CPE101 &nbsp;|&nbsp; **Instructor:** Jatuphon Sriwilas

## Files in this folder

| File | What it does | Git concept it demonstrates |
|------|--------------|-----------------------------|
| `test_01.c` | Prints a message to the screen with `printf` | `git rm` and pulling the file back |
| `test_02.c` | Reads two integers and prints their sum | `modified` state and `git restore` |
| `test_03.c` | Prints the multiplication table of 2 | `untracked` → `git add` |

## How to compile and run

```bash
gcc test_01.c -o test_01
./test_01
```

## Git commands used in this assignment

```bash
git init -b main                             # create a local repository
git config --global user.name "..."          # set the user name
git config --global user.email "..."         # set the email (must match GitHub)
git status                                   # check the state of the files
git add .                                    # move files into the staged state
git commit -m "Add week09 C source files"    # save a new version
git remote add origin <URL>                  # link to the remote repository
git push -u origin main                      # upload to GitHub
git clone <URL>                              # download and create a local repo
git pull origin main                         # fetch new commits
git rm <file>                                # stop tracking a file
git restore <file>                           # discard local changes
```

## File status life cycle in Git

```
Untracked ──git add──► Staged ──git commit──► Unmodified
                          ▲                       │
                          │                   edit file
                       git add                    ▼
                          └───────────────────  Modified
                                  └──git restore──► back to Unmodified
```
