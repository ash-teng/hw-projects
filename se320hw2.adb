with Ada.Text_IO, Ada.Integer_Text_IO;

use Ada.Text_IO, Ada.Integer_Text_IO;

procedure se320hw2 is
   X : Integer;
   Count : Integer := 0;
   Largest : Integer;
   Smallest : Integer;
   Tot_Pos : Integer := 0;
   Tot_Neg : Integer := 0;
   Largest_Pos : Integer := 0;
   Smallest_Pos : Integer;
   Largest_Neg : Integer;
   Smallest_Neg : Integer;
begin
   loop
      Put("Enter an integer: ");
      Get(X);
      Put(X);
      New_Line;
      exit when X = 0; 
      Count := Count + 1;
      if Count = 1 or X > Largest then
         Largest := X;
      end if;
      if Count = 1 or X < Smallest then
         Smallest := X;
      end if;
      if X > 0 then
         Tot_Pos := Tot_Pos + 1;
         if Count = 1 or X > Largest_Pos then
            Largest_Pos := X;
         end if;
         if Tot_Pos = 1 or X < Smallest_Pos then
            Smallest_Pos := X;
         end if;
      elsif X < 0 then
         Tot_Neg := Tot_Neg + 1;
         if Count = 1 or X > Largest_Neg then
            Largest_Neg := X;
         end if;
         if Tot_Neg = 1 or X < Smallest_Neg then
            Smallest_Neg := X;
         end if;
      end if;
   end loop;
   New_Line;
   Put("In total, you entered ");
   Put(Count);
   Put(" numbers.");
   New_Line;
   Put("The largest was ");
   Put(Largest);
   New_Line;
   Put("The smallest was ");
   Put(Smallest);
   New_Line;
   Put("Total positive numbers entered: ");
   Put(Tot_Pos);
   New_Line;
   if Tot_Pos > 0 then
      Put("The largest positive was: ");
      Put(Largest_Pos);
      New_Line;
      Put("The smallest positive was: ");
      Put(Smallest_Pos);
      New_Line;
   end if;
   Put("Total negative numbers entered: ");
   Put(Tot_Neg);
   New_Line;
   if Tot_Neg > 0 then
      Put("The largest negative was: ");
      Put(Largest_Neg);
      New_Line;
      Put("The smallest negative was: ");
      Put(Smallest_Neg);
      New_Line;
   end if;
   Put("Program finished");
   New_Line;
end se320hw2;
