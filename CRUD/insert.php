<?php
include "db.php";

if (isset($_POST['save'])) {
    $name = $_POST['name'];
    $email = $_POST['email'];

    mysqli_query($con, "INSERT INTO users (name, email) VALUES ('$name', '$email')");
    header("Location: display.php");
}
?>

<h2>Add New User</h2>
<form method="POST">
  Name: <input type="text" name="name" required><br><br>
  Email: <input type="email" name="email" required><br><br>
  <input type="submit" name="save" value="Save">
</form>
