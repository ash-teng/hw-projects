with Ada.Text_IO, Ada.Integer_Text_IO;
use Ada.Text_IO, Ada.Integer_Text_IO;

procedure se320hw3 is
   function Is_Prime (N : Integer) return Boolean is
      Prime : Boolean := True;
   begin
      for I in 2 .. N - 1 loop
         if N mod I = 0 then
            Prime := False;
            exit;
         end if;
      end loop;
      return Prime;
   end Is_Prime;

   procedure Print_All_Prime_Factors (N : Integer) is
      I           : Integer := 2;
      Factor      : Integer := N;
      Firstfactor : Boolean := True;
   begin
      Put ("The factorization of ");
      Put (N, 0);
      Put (" is ");

      while Factor > 1 loop
         if Factor mod I = 0 and then Is_Prime (I) then
            if not Firstfactor then
               Put (" * ");
            else
               Firstfactor := False;
            end if;
            Put (I, 0);
            Factor := Factor / I;
         else
            I := I + 1;
         end if;
      end loop;

      New_Line;
   end Print_All_Prime_Factors;

begin
   for Num in 3 .. 50 loop
      if Is_Prime (Num) then
         Put (Num, 0);
         Put (" is prime.");
      else
         Print_All_Prime_Factors (Num);
      end if;
      New_Line;
   end loop;
end se320hw3;

