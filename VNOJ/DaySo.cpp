uses crt;	
const MaN = 100002;

var n, i, cnt:longint;
    a, Pre, MinL, MinR:array[0..MaN] of Int64;

function Min (a, b: longint):longint;
begin 
    if a > b then 
        Min:= b 
    else
        Min:= a;
end;
begin 
    Read (n);
    for i:= 1 to n do
        Read (a[i]);

    Pre[0]:= 0;
    for i:= 1 to n do
        Pre[i]:= Pre[i - 1] + a[i];
 
    MinR[n]:= Pre[n];
    MinR[0]:= 0;
    for i:= n - 1 downto 1 do 
        MinR[i]:= Min(MinR[i + 1], Pre[i]);
 
    MinL[0]:= 0;
    MinL[1]:= Pre[1];
    for i:= 2 to n do 
    MinL[i]:= Min(MinL[i - 1], Pre[i]);

    cnt:= 0;
    for i:= 1 to n do  
        if (a[i] > 0) and (MinR[i] - Pre[i - 1] > 0) and (Pre[n] - Pre[i - 1] + MinL[i - 1] >0) then 
            Inc(cnt);
        
    Write(cnt);         
end.
