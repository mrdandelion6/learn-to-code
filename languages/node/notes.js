// welcome to my notes on node.js. i use js as short for javascript.
// as per usual , to see a section , you can jump to the function defintions for
// the below:

function contents() {
    what_is_node();
    why_use_node();
    using_node();
    using_packages();
    what_is_express();
    making_an_express_backend();
}

// call the function you want to run:
using_node();

function what_is_node() {
    // node.js is a javascript runtime.

    // browsers run javascript code in their own "javascript engine". many
    // browsers such as chrome , edge , brave all use google's javascript engine
    // , known as V8. firefox uses spidermonkey , mozilla's js engine. to learn
    // more about how js runs and how js engines work , see my javascript notes
    // in /languages/javascript/notes.js.

    // you can install node.js:
    //      pacman -S nodejs npm
    // npm is known as 'node package manager' , which is used for installing and
    // managing js modules.

    // then you can use node on your computer through cli by entering the `node`
    // into terminal. it is like a repl , you can think of it as an interpreter.
    // but remember , it is more exactly a js engine.
}

function why_use_node() {
    // if you want to run javascript off a browser , then you need node. for
    // example , if you want to have a backend server written in js , you will
    // need node on that server.
}

function using_node() {
    // after you install node , you can use it in terminal like you use python.
    // you can either run it directly or run files with it.

    // USING DIRECTLY
    // run it in terminal by entering `node` to enter
    // a repl like interface. then you can run js code in there directly:
    //      console.log('greatest estate developer is a good manhwa!');
    //      const a = 1;
    //      const b = 5;
    //      console.log(`${a} + ${b} = ${a + b}`)
    //      .exit
    // the .exit will exit out of node.

    // USING TO RUN FILES
    // run files in node like so:
    //      node notes.js
    // if you set this function to be called at the top , the above command will
    // print the following:
    console.log('running notes.js!');
}

function what_is_express() {
    // express.js is a
}
