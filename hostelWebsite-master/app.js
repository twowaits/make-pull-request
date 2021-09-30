const express = require("express");
const path = require("path");
const fs = require("fs");
const app = express();
const port = process.env.PORT || 8080;

app.use(express.static(path.join(__dirname, "frontend")));
app.use(express.urlencoded({ extended: true }));
app.use(express.json());

app.get("/", (req, res) => {
    res.sendFile(path.join(__dirname, "index"));
})

app.post("/", (req, res) => {
    txt = fs.readFileSync("query.txt");
    fs.writeFileSync("query.txt", txt + "\nname: " + req.body.name + " message: " + req.body.message + " number: " + req.body.number, {
        encoding: "utf-8",
    });
    res.redirect("/");
})

app.listen(port, () => {
    console.log("Server is up!");
})