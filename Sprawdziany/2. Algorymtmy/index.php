<!DOCTYPE html>
<html>
 <head>
    <meta charset="utf-8"> 
    <title>Zadania</title>
</head>
<body>


<ul>
    <?php
        for($i = 1; $i <= 40; $i++) {
            echo "<li><a href='Zadanie{$i}'>Zadanie ", $i, "</a></li>";
        } 
    ?>
</ul>

</body>
</html>
