<?php
include "db.php";

$id = $_GET['id'];
mysqli_query($con, "DELETE FROM users WHERE id=$id");

header("Location: display.php");
?>
