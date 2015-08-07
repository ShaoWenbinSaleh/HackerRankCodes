main = do
   n <- readLn :: IO Integer
   putStrLn $ show $ product[1..n]
