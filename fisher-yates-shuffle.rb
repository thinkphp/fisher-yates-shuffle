def shuffle(arr)

    n = arr.length 

    (0..n-1).each do |i|

        r = Random.rand(i+1)

        arr[i], arr[r] = arr[r],arr[i]  

    end 
end

l = [1,2,3,4,5,6,7,8,9]

print l

shuffle(l)

puts ""

print l