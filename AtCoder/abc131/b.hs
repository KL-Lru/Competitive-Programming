import Data.List

makeList :: Int -> Int -> [Int]
makeList 0 _ = []
makeList n l = [l] ++ makeList (n-1) (l+1)

minAbs :: [Int] -> Int
minAbs x = head (sortOn abs x)

main = do
    [n, l] <- map read . words <$> getLine
    let ml = makeList n l
    print $ (sum ml) - (minAbs ml)