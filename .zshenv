# Environment Variables
export EDITOR='nvim'
export VISUAL='nvim'
export MANPAGER="sh -c 'col -bx | bat -l man -p'"
export MANROFFOPT="-c"

# PATH Settings
typeset -U PATH path
path=("$HOME/.local/bin" "$HOME/.cabal/bin" "$HOME/.emacs.d/bin" "$path[@]")
export PATH

alias emacs='emacsclient -c -a "emacs"'
