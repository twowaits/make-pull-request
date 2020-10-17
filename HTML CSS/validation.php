<?php
	
	session_start();
	header('location:login.php');

	$con = mysqli_connect('localhost','root');
	if($con){

		echo "connection sucessfull";
	}
	else{
		echo "no connection";
	}

	mysqli_select_db($con,'sessionpractical');

	$name = $_POST['user'];
	$pass = $_POST['password'];

	$q = "select * from signin where name = '$name' && password = '$pass'";
	$result = mysqli_query($con,$q);

	$num = mysqli_num_rows($result);

	if($num == 1){

		$_SESSION['username'] = $name;
		header('location:home.php');
	}
	else{

		header('location:login.php');
	}
?>