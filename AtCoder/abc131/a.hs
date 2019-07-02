check :: [Char] -> Bool
check [] = False
check (x:y:[]) = x == y
check (x:y:xs) = x == y || check(y:xs)

out :: Bool -> String
out True = "Bad"
out False = "Good"

main = do
    number <- getLine
    putStrLn $ out $ check number