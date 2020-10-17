<!DOCTYPE html>
<html>
<head>
	<title></title>

	<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
</head>

<body>
	<div class="container">
		<div class="row">
			<div class="col-lg-6">
				<h2>Login Form</h2>
				<form action="validation.php" method="post">
					
			<div class="form-group">
						
						<label>User Name</label>
						<input type="text" name="user" class="form-control">
					</div>

					<div class="form-group">
						
						<label>Password</label>
						<input type="password" name="password" class="form-control">
					</div>

					<button type="submit" class="btn btn-primary">Login</button>

				</form>

		
		
		</div>

			<div class="col-lg-6">
				<h2>Sing up</h2>
				<form action="registration.php" method="post">
					
					<div class="form-group">
						
						<label>User Name</label>
						<input type="text" name="user" class="form-control">
					</div>

					<div class="form-group">
						
						<label>Password</label>
						<input type="password" name="password" class="form-control">
					</div>

					<button type="submit" class="btn btn-primary">Login</button>

				</form>
			</div>
			
		</div>


	</div>






<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
</body>
</html>