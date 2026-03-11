```text
---- Airplane objects after construction ----
Vehicle | Plate: NO-PLATE | Speed: 0 | Altitude: 0
Vehicle | Plate: AC901 | Speed: 650 | Altitude: 30000
Vehicle | Plate: ZX777 | Speed: 120 | Altitude: 0

---- Using inherited base class function accelerate ----
Vehicle | Plate: AC901 | Speed: 700 | Altitude: 30000
Vehicle | Plate: AC901 | Speed: 0 | Altitude: 30000

---- Overridden move() without using Vehicle::move() ----
Airplane NO-PLATE is flying at 0 feet.
Airplane AC901 is flying at 30000 feet.
Airplane ZX777 is flying at 0 feet.

---- Overridden display() using Vehicle::display() ----
Vehicle | Plate: NO-PLATE | Speed: 0 | Altitude: 0
Vehicle | Plate: AC901 | Speed: 0 | Altitude: 30000
Vehicle | Plate: ZX777 | Speed: 120 | Altitude: 0

```