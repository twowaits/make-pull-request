function ValidateEmail()
{

let mail = prompt("Enter an email address");
let mailformat = /^w+([.-]?w+)*@w+([.-]?w+)*(.w{2,3})+$/;
if(mail.match(mailformat))
{
alert("You have entered a valid email address!");    //The pop up alert for a valid email address

return true;
}
else
{
alert("You have entered an invalid email address!");    //The pop up alert for an invalid email address

return false;
}
}


function editString() {


    let str = prompt("Enter a string");
    str = str.trim();

    str.replace(/^\/|\/$/g, '');

    return str;
}


function altCaseChange() {
   let str = prompt("Enter a string");

   let res = '';

    for ( i = 0; i < str.length; i++) {
        if ( i % 2 == 0){
            res += str.charAt(i).toLowerCase();
        }

        else {
            res += str.charAt(i).toUpperCase();
        }
    }

    return res;

}
