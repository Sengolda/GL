def render(string: str):
    string = string.strip().replace("0", " ").replace("1", "#")
    return string

def render_to_file(file, string: str):
    string = string.strip().replace("0", " ").replace("1", "#")
    with open(file, "a") as f:
        f.write(string)
        f.close()
        return string