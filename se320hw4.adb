with Ada.Text_IO, Ada.Integer_Text_IO, Ada.Float_Text_IO;
use Ada.Text_IO, Ada.Integer_Text_IO, Ada.Float_Text_IO;

procedure Se320hw4 is
   subtype My_Integer is Integer range 0 .. 50;
   X        : My_Integer;
   Sum      : Float   := 0.0;
   Good_Val : Integer := 0;
   Mistake  : Integer := 0;
begin
   loop
      Put ("Enter an integer between 0 and 50: ");
      begin
         Get (X);
         exit when X = 0;
         Sum      := Sum + Float (X);
         Good_Val := Good_Val + 1;
      exception
         when Constraint_Error =>
            Put ("  Invalid input value; try again.");
            New_Line;
            Mistake := Mistake + 1;
      end;
   end loop;
   Put ("While making ");
   Put (Mistake, 0);
   Put (" mistakes, you ultimately entered ");
   Put (Good_Val, 0);
   Put (" good values; their average is ");
   Put (Sum / Float (Good_Val), 0, Aft => 0, Exp => 0);
end Se320hw4;
