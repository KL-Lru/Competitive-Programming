calc :: Int -> Int -> Int -> Int
calc a b c = (div b c) - (div (a-1) c)

main = do
    [a, b, c, d] <- map read . words <$> getLine :: IO [Int]
    print $ (b - a + 1) - (calc a b c) - (calc a b d) + (calc a b (lcm c d))
