with Ada.Text_IO,Ada.Integer_Text_IO; 
use Ada.Text_IO,Ada.Integer_Text_IO;

procedure se320hw7 is 

package Factorization is 
  type Fraction is private;
  function Add(First, Second : Fraction) return Fraction;
  function Multiple(First, Second : Fraction) return Fraction;
  function GCD(First, Second : Integer) return Integer;
  function Reduce(Factor : Fraction) return Fraction;
  procedure Get(Parts: out Fraction; MainExit: out Boolean);
  procedure Put(Fac : Fraction);
  
  private 
    type Fraction is record
      Numerator : Integer;
      Denominator: Integer;
  end record; 
end Factorization;

package body Factorization is

function Add(First, Second : Fraction) return Fraction is 
    Sum : Fraction;
  begin
    Sum.Numerator := First.Numerator * Second.Denominator + Second.Numerator * First.Denominator;
    Sum.Denominator := First.Denominator * Second.Denominator;
    return Sum;
  end Add;
  
function Multiple(First, Second : Fraction) return Fraction is
    Product : Fraction;
  begin
    Product.Numerator := First.Numerator * Second.Numerator;
    Product.Denominator := First.Denominator * Second.Denominator;
    return Product;
  end Multiple; 
  
function GCD(First, Second : Integer) return Integer is 
    Temp : Integer;
    FirstTemp, SecondTemp : Integer;
  begin 
    FirstTemp := First;
    SecondTemp := Second;
    while SecondTemp /= 0 loop 
      Temp := SecondTemp;
      SecondTemp := FirstTemp mod SecondTemp;
      FirstTemp := Temp;
    end loop;
    return FirstTemp;
end GCD;

function Reduce(Factor : Fraction) return Fraction is 
    Common : Integer;
    Reduction: Fraction;
  begin
  Common := GCD(Factor.Numerator, Factor.Denominator);
  Reduction.Numerator := Factor.Numerator / Common;
  Reduction.Denominator := Factor.Denominator / Common;
  return Reduction;
end Reduce;

procedure Put(Fac : Fraction) is
begin
Put(Fac.Numerator, 0);
Put("/");
Put(Fac.Denominator, 0);
end Put;

procedure Get(Parts: out Fraction; MainExit: out Boolean) is
  C : Character;
begin
    Get(Parts.Numerator);
    Get(C);
    Get(Parts.Denominator);
    if Parts.Numerator = 0 and Parts.Denominator = 0 then
      MainExit := True;
    else
      MainExit := False;
    end if;
end Get;
end Factorization; 

use Factorization;
Operator : Character;
Fraction1, Fraction2, Result : Fraction;
MainExit : Boolean := False;
Choice : Character;
begin
    Put("Input should look like: 1/4*1/4");
    New_Line;
   loop
      Put(" Enter a line: ");
      Get(Fraction1, MainExit);
      exit when MainExit;
      Get(Operator);
      --Checks the operator, to see if the 
      if Operator = '+' then
         Get(Fraction2, Mainexit);
         Result := Add(Fraction1, Fraction2);
      elsif Operator = '*' then
         Get(Fraction2, Mainexit);
         Result := Multiple(Fraction1, Fraction2);
      else
         Put("Wrong Operator");
         New_Line;
      end if;
      Put("    ");
      Put(Fraction1);
      Put(Operator);
      Put(Fraction2);
      Put("=");
      Put(Reduce(Result));
      New_Line;
      Put(" Again? [y/n]: " );
      Get(Choice);
      exit when (Choice = 'n') or (Choice = 'N');
   end loop;
end se320hw7;

