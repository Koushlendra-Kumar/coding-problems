/**
 * @param {number[]} seats
 * @param {number[]} students
 * @return {number}
 */
var minMovesToSeat = function(seats, students) {
    let moves = 0;
    seats.sort((a,b) => b-a);
    students.sort((a,b) => b-a);
    for(let i = 0; i< seats.length; i++){
        moves += Math.abs(seats[i] - students[i])
    }
    return moves;
};
