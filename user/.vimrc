set number  " numbers on the left margin
syntax on   " syntax highlighting

" Colorscheme and vimdiff color settings "
colorscheme elflord
hi DiffAdd    ctermfg=black ctermbg=green
hi DiffChange ctermfg=black ctermbg=yellow
hi DiffDelete ctermfg=black ctermbg=red
hi DiffText   ctermfg=black ctermbg=blue
""""""""""""""""""""""""""""""""""""""""""

set expandtab     " insert spaces instead of a hard tab
set autoindent    " keep the indent of the previous line
set shiftwidth=4  " how many spaces to use when tabbing
set softtabstop=4 " how far apart tab stops are. I think this does the same as
                  "     shiftwidth, but I leave it just in case.
