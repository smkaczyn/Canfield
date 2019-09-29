# Canfield
A simplified C++ console version of the game Canfield.

This code is C++ style written in Emacs on Linux. To compile it, open a terminal. If g++ is already installed, type the command make to compile the program.

Rules for Canfield:

Cards in the Tableau are built down by alternating color. Groups of cards can be moved. An empty slot in the Tableau is filled automatically from the Reserve. If the Reserve is empty, an empty slot can be filled by any card or group of cards in sequence.

Cards are flipped from the Stock to the Waste by three. If the last flip has less than three cards, that many cards are flipped for that move only. When Stock is empty, move all cards in Waste back to the Stock, maintaining order. You can go through the deck three times.

Foundations are built up in suit from the base card (first card dealt to first Foundation) New Foundations are started when a card of the same rank as the first card placed during the dealing period are placed on empty Foundation piles. Aces are placed on Kings, and twos on Aces. Cards in Foundations are still in play. Double clicking on a card will move it to the appropriate Foundation pile if such a move is possible.
Source for rules: https://www.cs.iusb.edu/~dvrajito/teach/c243/can_rules.html
