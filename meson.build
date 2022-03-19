project('mpaint', 'c')

deps = [
    dependency('sdl2')
]

src = [
    'src/main.c',
    'src/app.c',

    'src/chunk.c',
    'src/canvas.c',

    'src/app/state.c',
    'src/app/paint.c'
]

executable('mpaint', src, include_directories : 'src', dependencies : deps)