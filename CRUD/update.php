<?php
include "db.php";

$id = $_GET['id'];
$data = mysqli_fetch_assoc(mysqli_query($con, "SELECT * FROM users WHERE id=$id"));

if (isset($_POST['update'])) {
    $name = $_POST['name'];
    $email = $_POST['email'];

    mysqli_query($con, "UPDATE users SET name='$name', email='$email' WHERE id=$id");
    header("Location: display.php");
}
?>

<h2>Edit User</h2>
<form method="POST">
  Name: <input type="text" name="name" value="<?= $data['name'] ?>" required><br><br>
  Email: <input type="email" name="email" value="<?= $data['email'] ?>" required><br><br>
  <input type="submit" name="update" value="Update">
</form>
