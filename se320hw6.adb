with Ada.Text_IO; use Ada.Text_IO;
with Ada.Float_Text_IO; use Ada.Float_Text_IO;
with se320hw6_body; use se320hw6_body;
procedure se320hw6 is
   Some_Triangle : Triangle;
begin
  get(Some_Triangle);
  Put("The centroid is ");
  put(Centroid(Some_Triangle));
end se320hw6;
