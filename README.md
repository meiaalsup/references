# References
An assortment of code snippets and references I found useful and don't want to
forget.

## Favorite tools
* tldr
* ag - the_silver_searcher
* ncdu
* wdiff
* tig
* shellcheck

## Tool Reference
* [Vim Cheatsheet](https://www.internalpointers.com/post/humble-vim-cheat-sheet)


## find
Find example
* `find . -type f -name "*.out" | xargs grep -n -F "FAIL"`
    * `find <dir> -type <f=file> -name <string to match>`
    * grep <flags> "Search-String"
        * grep -n: prints the line number and file name
        * grep -F: doesn't use regex, makes find faster if nothing to match
st ello
Find example excluding anything not of type file
* `find . \( ! -type f \) | wc -l`

## list size of subdirectories recursively
`ls | xargs -I {} sh -c "ls {} | wc -l"`


## wdiff - word diff
`wdiff <(grep -n -F -A 3 "get wrong value" out.txt | grep "\-x " | head -n 1) <(grep -n -F -A 3 "get wrong value" out.txt | grep "\-x " | tail -n 1)` - useful in 6.824

## Go stuff
Test Profiler:
* `go test -cpuprofile=profile.out -run TestName`
* `go tool pprof -web profile.out`
Run all the tests in a file:
* `alias testcases="sed -n 's/func.*\(Test.*\)(.*/\1/p' | xargs | sed 's/ /|/g'"
go test -v -run $(cat test_file_name.go | testcases)`


## watch but on MacOS
`while :; do clear; {command, ie ls *| wc -l}; sleep {SECONDS}; done`


## Machine Learning
* batch size - really `mini-batch` size - smaller than data set usually
    * if this is 1 - stochastic gradient descent
* epoch - refers to going through full data set. (enough iters with batch size
  to "see" every point). - rounding is unclear

### Regularization
* L2 (ridge) - penalizes large edge weights, sum of squares of weights
    * Bayesian Prior: weights should be centered around zero and mormally dist.
    * TotalLoss = Loss(Data|Model) + $\lambda(w_1^2 + ... w_m^2)$

## Shell stuff
* source vs ./
    * source runs in current session (ie sets environment variables in your 
      current session)
    * ./ runs in new session

## Tmux stuff
* `swap-window -s 1 -t 2` swaps window 1 and window 2
* `C-q z` makes a pane full screen
* `C-q ?` brings up shortcut definitions
* `C-q r` reloads tmux definition


## Shortcuts
* command-tab : switches between applications
* command-\` : cycles through windows
* command-. : close dialog
* command-h : hide window
* control-tab : switch between tabs in chrome, between conversations in whatsapp
* option-command-0 : remove formatting (ie dropbox paper)
* command-0: reset zoom (ie. fix google maps)

## [Repl.it](https://repl.it)
repl.it - online code sandbox - great for C++
