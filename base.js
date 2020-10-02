// function to check whether string is an email or not.

function checkEmail(email) {
    var re = /\S+@\S+\.\S+/;
    return re.test(email);
}
console.log(checkEmail('example@example.com'));

// function to remove all slashes, empty spaces in beginning and end.

function removeSlash(string) {
    var slash = true;
    while (slash) {
        string = string.trim().replace(/^\/+|\/+$/g, "");
        if (!(string[0] === '/' || string[0] === " " || string.slice(-1) === '/' || string.slice(-1) === " ")) {
            slash = false;
        }
    }
    return string;
}
console.log(removeSlash("/ /// / hello/world/ / //  /"));

// function make alternative chars as lowercase and UPPERCASE.

function toOppositeCase(string) {
    return string.split('').map(function (c, i) {
        return i & 1 ? c.toUpperCase() : c.toLowerCase();
    }).join('');
}
console.log(toOppositeCase("soMeStrinG"));
