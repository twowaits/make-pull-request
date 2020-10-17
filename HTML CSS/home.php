<?php

session_start();
if(!isset($_SESSION['username'])){
header('location:login.php');
}
?>

<!DOCTYPE html>
<html>
<head>
	<title></title>

	<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
</head>
<body>
<div class="container">
	<h2 class="text-center text-sucess">Welcome <?php echo $_SESSION['username'];?></h2>

	<a href="logout.php">LOGOUT</a>

</div>
</body>
</html>