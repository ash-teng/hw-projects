  package se320hw6_body is
    type Point is record
      X,Y : Float;
    end record;

    type Triangle is array(1..3) of Point;
    Some_Triangle : Triangle;

    function Centroid(Some_Triangle : Triangle) return Point;
    procedure get(Some_Triangle : out Triangle);
    procedure put(Good_Point : Point);
  end se320hw6_body;