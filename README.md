# Bus Ticket Reservation (C)

Console application for selling and cancelling bus tickets. Seat occupancy for three buses (A, B, C — 20 seats each) is stored in text files so that state persists between runs.

## Features

- Login screen (demo credentials: `afra` / `1234`)
- Buy a ticket (name, surname, bus, seat number) with occupied-seat check
- Cancel a ticket
- View seat status for each bus

## Build & run

```bash
gcc main.c -o bus
./bus
```

Run from this folder so the program can find `denemea.txt`, `denemeb.txt` and `denemec.txt` (seat states: `0` = free, `1` = taken).

## Tech stack

C · file I/O

UI text is in Turkish.
