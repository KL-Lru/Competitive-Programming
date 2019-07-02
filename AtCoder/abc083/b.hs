main :: IO ()
main = do
    [n, a, b] <- map read . words <$> getLine :: IO [Int]
    print $ solve 1 n a b
    
solve :: Int -> Int -> Int -> Int -> Int
solve c n a b = if n >= c then (cal c a b) + (solve (c + 1) n a b) else 0

digitSum :: Int -> Int
digitSum 0 = 0
digitSum x = (mod x 10) + (digitSum (div x 10))  

cal :: Int -> Int -> Int -> Int
cal c a b
    | res >= a && res <= b = c
    | otherwise = 0
  where 
    res = digitSum c
    