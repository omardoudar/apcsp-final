<!DOCTYPE html>
<html>
  <head>
    <titlle>Calculator made using C</title>
  </head>


  <body>

    <h1>Omar and Eugene's Calculator</h1>
    <p>Some cool functions include being able to see every number squared up to 100 when typing 1x1, and a cool math proof for addition for typing 50+50</p>

    <?php
       $arg1 = $arg2 = $arg3 = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $arg2 = test_input($_POST["arg2"]);
         $arg3 = test_input($_POST["arg3"]);
         exec("/usr/lib/cgi-bin/sp1a/calculator " . $arg1 . " " . $arg2 . " " . $arg3, $output, $retc); 
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      1st value: <input type="text" name="arg1"><br>
      2nd Value: <input type="text" name="arg2"><br>
      Math operation: <input type="text" name="arg3"><br>
      <br>
      <input type="submit" value="Go">
    </form>
	  
    <?php
       if (is_numeric($retc)) {
         echo "<h2>User Input:</h2>";
         echo $arg1;
         echo "<br>";
         echo $arg2;
         echo "<br>";
         echo $arg3;
         echo "<br>";
       
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
         echo "<h2>Program Return Code:</h2>";
         echo $retc;
       }
    ?>
    
  </body>
</html>
