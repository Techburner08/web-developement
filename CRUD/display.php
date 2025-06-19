<?php
include "db.php";

$result = mysqli_query($con, "SELECT * FROM users");
?>

<h2>All Users</h2>
<a href="insert.php">Add New</a><br><br>
<table border="1" cellpadding="10">
  <tr><th>ID</th><th>Name</th><th>Email</th><th>Actions</th></tr>
  <?php while($row = mysqli_fetch_assoc($result)) { ?>
  <tr>
    <td><?= $row['id'] ?></td>
    <td><?= $row['name'] ?></td>
    <td><?= $row['email'] ?></td>
    <td>
      <a href="update.php?id=<?= $row['id'] ?>">Edit</a> |
      <a href="delete.php?id=<?= $row['id'] ?>">Delete</a>
    </td>
  </tr>
  <?php } ?>
</table>
