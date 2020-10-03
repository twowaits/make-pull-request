const prompt = require('prompt-sync')({sigint: true});
const moment = require('moment')

// Number of locations
const num_of_locations = prompt("Enter the number of Locations ? ");

const locations = [];

// Getting locations data
for (var i = 0; i < num_of_locations; i++) {
    const location = prompt(`Enter Location ${i + 1} Details ? `).split(" ");
    locations.push({
        city: location[0],
        // Parsing the date from string
        date: new Date(location[1].split("/").reverse().join("-"))
    });
}

// FOR TESTING -------------------------
// const locations = [];
// var temp = [
//     "Delhi 23/09/2019",
//     "Meerut 25/09/2019",
//     "Noida 28/09/2019",
//     "Kanpur 29/09/2019",
//     "Lucknow 1/10/2019",
//     "Delhi 1/10/2019",
// ]
// temp.forEach(item => {
//     const location = item.split(" ");
//     locations.push({
//         city: location[0],
//         // Parsing the date from string
//         date: new Date(location[1].split("/").reverse().join("-"))
//     });
// })
// ------------------------------------

var output = "";
if (locations.length > 0) {
    const first_location = locations[0];
    output += `Traveller itinerary in ${first_location.date.getFullYear()}, he visited ${first_location.city} on ${moment(first_location.date).format("Do MMM")},`
    for (var i = 0; i < locations.length - 1; i++) {
        // To calculate the time difference of two dates 
        var diff_in_time = locations[i + 1].date.getTime() - locations[i].date.getTime(); 
        // To calculate the no. of days between two dates 
        var diff_in_days = Math.round(diff_in_time / (1000 * 3600 * 24));
        // Checking if the person stayed or not
        if (diff_in_days > 0) {
            output += ` Stayed for ${diff_in_days} ${diff_in_days > 1 ? "days" : "day"} then left for ${locations[i + 1].city} on ${moment(locations[i+1].date).format("Do MMM")}.`
        } else {
            output += ` Didn't stay in ${locations[i].city} went directly to ${locations[i + 1].city}.`
        }
    }
    // Finally the computed string
    console.log(output)
}
