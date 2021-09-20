const fs = require("fs")

function render(to_render) {
    to_render = to_render.replace("0", " ")
    to_render = to_render.replace("1", "#")
    return to_render
}

function render_to_file(to_render, file) {
    to_render = to_render.replace("0", " ")
    to_render = to_render.replace("1", "#")
    fs.writeFile(file, to_render, (err) => {
        if (err) throw err;
    }
    )
}