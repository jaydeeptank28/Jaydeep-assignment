function updateForm() {
    const bookingChoice = document.getElementById('booking').value;
    const dateDiv = document.getElementById('date-div');
    const slotDiv = document.getElementById('slot-div');
    const timeDiv = document.getElementById('time-div');

    // Hide all divs initially
    dateDiv.classList.add('hidden');
    slotDiv.classList.add('hidden');
    timeDiv.classList.add('hidden');

    if (bookingChoice === 'full') {
        // Show only the date div for full day booking
        dateDiv.classList.remove('hidden');
    } else if (bookingChoice === 'half') {
        // Show date and slot div for half day booking
        dateDiv.classList.remove('hidden');
        slotDiv.classList.remove('hidden');
    } else if (bookingChoice === 'hourly') {
        // Show date and time div for hourly booking
        dateDiv.classList.remove('hidden');
        timeDiv.classList.remove('hidden');
    }
}

