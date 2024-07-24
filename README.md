# Parking Lot Design

A parking lot or car park is a dedicated cleared area intended for parking vehicles.

## Use Case

### Main Actors
- **Admin**: Responsible for adding and modifying parking floors, parking spots, entrance and exit panels, and adding/removing parking attendants.
- **Customer**: Can get a parking ticket and pay for it.
- **Parking Attendant**: Can perform all customer activities on their behalf and accept cash for ticket payment.
- **System**: Displays messages on info panels and manages vehicle assignments to parking spots.

### Top Use Cases

1. **Add/Remove/Edit Parking Floor**: Add, remove, or modify a parking floor. Each floor can have its own display board to show available parking spots.
2. **Add/Remove/Edit Parking Spot**: Add, remove, or modify a parking spot on a parking floor.
3. **Add/Remove a Parking Attendant**: Add or remove a parking attendant from the system.
4. **Take Ticket**: Provide customers with a new parking ticket upon entry.
5. **Scan Ticket**: Scan a ticket to determine the total charge.
6. **Credit Card Payment**: Pay the ticket fee with a credit card.
7. **Cash Payment**: Pay the parking ticket with cash.
8. **Add/Modify Parking Rate**: Allow admin to add or modify the hourly parking rate.

## System Requirements

1. **Multiple Floors**: The parking lot should have multiple floors where customers can park their vehicles.
2. **Multiple Entry and Exit Points**: The parking lot should have several entry and exit points.
3. **Ticket Collection and Payment**: 
   - Customers can collect a parking ticket at the entry points.
   - Customers can pay the parking fee at the exit points, either at automated panels or with a parking attendant.
   - Payment can be made via cash or credit card.
4. **Customer Info Portal**: 
   - Customers can pay the parking fee at the info portal on each floor.
   - If paid at the info portal, they don't need to pay at the exit.
5. **Capacity Management**: 
   - The system should not allow more vehicles than the maximum capacity.
   - If full, the system should display a message at the entrance panel and on the parking display board on the ground floor.
6. **Parking Spot Types**: 
   - Each floor will have various parking spots, supporting multiple types such as Compact, Large, Handicapped, Motorcycle, etc.
   - Some spots should be designated for electric cars with charging panels.
7. **Vehicle Types**: The system should support parking for different vehicle types, including cars, trucks, vans, motorcycles, etc.
8. **Display Boards**: Each floor should have a display board showing available parking spots for each type.
9. **Parking Fee Model**: The system should support a per-hour parking fee model:
   - $4 for the first hour.
   - $3.5 for the second and third hours.
   - $2.5 for all remaining hours.

