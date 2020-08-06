# reference: https://opensource.com/article/19/6/python-virtual-environments-mac

# make a new virtual env
mkvirtualenv "name" # ie mkvirtualenv "$(basename $(pwd))"

# list current available virtual environments
workon

# start virtual env
workon "name" # ie workon . if current directory is name

# deactivate virtual env
deactivate

# remove a virtual environment
rmvirtualenv "name"
