// @ts-check
import j5 from "johnny-five";
const { Board, Led } = j5;
const board = new Board();

board.on("ready", () => {
	// Create an Led on pin 13
	const led = new Led(13);
	// Blink every half second
	led.blink(500);
});
