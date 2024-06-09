uses math;
var n,i,j,k:longint;
    a:ARRAY[0..1000000] of int64;
    f:ARRAY[0..100050,0..100] of int64;
begin
        readln(n,k);
        for i:=1 to n do
                begin
                        read(a[i]);
                        a[i]:=a[i] mod k;
                end;
        for i:=1 to k-1 do f[1,i]:=-1000000007;
        f[1,a[1]]:=1;
        for i:=2 to n do
                for j:=0 to k-1 do
                        f[i,j]:=max(f[i-1,j],f[i-1,(j-a[i]+k) mod k]+1);
        write(f[n,0]);
end.