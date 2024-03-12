with Ada.Text_IO; use Ada.Text_IO;
with Ada.Float_Text_IO; use Ada.Float_Text_IO;



package body se320hw6_body is
    function Centroid (Some_Triangle : Triangle) return Point is
      Central_Point : Point;
    begin
      Central_Point.X := (Some_Triangle(1).X + Some_Triangle(2).X + Some_Triangle(3).X) / 3.0;
      Central_Point.Y := (Some_Triangle(1).Y + Some_Triangle(2).Y + Some_Triangle(3).Y) / 3.0;
      return Central_Point;
    end Centroid;

    procedure get (Some_Triangle : out Triangle) is
      C : Character;
    begin
      Put_Line("Enter vertices as [x.x, y.y]");
      for I in 1..3 loop
        Put("   Enter vertex #" & Integer'Image(I) & ": ");
        Get(C); 
        Get(Some_Triangle(I).X);
        Get(C);
        Get(Some_Triangle(I).Y);
        Get(C);
      end loop;
    end get;

    procedure put (Good_Point : Point) is
    begin
      Put("[");
      Put(Item => Good_Point.X, Fore => 1, Aft => 2, Exp => 0);
      Put(", ");
      Put(Item => Good_Point.Y, Fore => 1, Aft => 2, Exp => 0); 
      Ada.Text_IO.Put("]");
    end put;
  end se320hw6_body;

