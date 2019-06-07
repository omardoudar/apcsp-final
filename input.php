<!DOCTYPE html>
<html>
  <head>
    <title>Calculator made from C</title>
  </head>

  <body>

    <h1>Eugene and Omar's Project</h1>

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

	<h1> Use + for addition, - for subtraction, x for multiplication, / for division, and ^ for power </h1>
	<h2> type in 1x1 for a full multiplication table up to 100 </h2>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      1st Value: <input type="text" name="arg1"><br>
      2nd Value: <input type="text" name="arg2"><br>
      Operation: <input type="text" name="arg3"><br>
      <br>
      <input type="submit" value="GOO">
    </form>

    <?php
    
       if (is_numeric($retc)) {
         echo "<h2>Your Input:</h2>";
         echo $arg1;
         echo "<br>";
         echo $arg2;
         echo "<br>";
         echo $arg3;
         echo "<br>";
       
         echo "<h2>Program Output </h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";

         }
       }
    ?>
    
  </body>
</html>
