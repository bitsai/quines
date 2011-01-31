(println (let [a "(println (let [a %s] (format a (str (char 34) a (char 34)))))"] (format a (str (char 34) a (char 34)))))
