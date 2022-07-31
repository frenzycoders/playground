<?php 
    $data = $argv[1];
    $public_key = file_get_contents('PublicKey/einv_sandbox.pem');
	openssl_public_encrypt($data, $crypted, $public_key);
	echo base64_encode($crypted);
?>