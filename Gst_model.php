<?php
// class Gst_model extends CI_Model {

// 	public function __construct()  {
// 		parent::__construct();
// 	}

// 	function RSAencrypt($string) {
// 		$public_key = file_get_contents('PublicKey/einv_sandbox.pem');
// 		openssl_public_encrypt($string, $crypted,$public_key);
// 		return base64_encode($crypted);
// 	}

// 	function token(){
// 		$key = 'aaaaafghijklmnopqrstuvwxyz125478';
// 		$appkey = base64_encode($key);
// 		//$password = $this->RSAencrypt('Kumar@11');
// 		//$appkey  = $this->RSAencrypt($key);
// 		$bData = array(
// 			"UserName" => "MAGADHTMT1A",
// 			"Password" => "Kumar@11",
// 			"AppKey" => $appkey,
// 			"ForceRefreshAccessToken" => false
// 		);
// 		$ency = base64_encode(json_encode($bData));
// 		$data = $this->RSAencrypt($ency);
// 		//echo $data; die;
// 		$curl = curl_init();
// 		curl_setopt_array($curl, array(
// 				CURLOPT_URL => "https://einv-apisandbox.nic.in/eivital/v1.04/auth",
// 				CURLOPT_RETURNTRANSFER => true,
// 				CURLOPT_ENCODING => "",
// 				CURLOPT_MAXREDIRS => 10,
// 				CURLOPT_TIMEOUT => 0,
// 				CURLOPT_FOLLOWLOCATION => true,
// 				CURLOPT_HTTP_VERSION => CURL_HTTP_VERSION_1_1,
// 				CURLOPT_CUSTOMREQUEST => "POST",
// 				CURLOPT_POSTFIELDS =>json_encode($data),
// 				CURLOPT_POSTFIELDS =>"{\r\n\"Data\": \"".$data."\"}",
// 				CURLOPT_HTTPHEADER => array(
// 						"client_id: AABCM10TXP4R28N",
// 						"client_secret: zn42HhVvA0PDd3r7WKkZ",
//     					"Gstin: 10AABCM8648L1ZB",
// 						"Content-Type: application/json"
// 				),
// 		));
// 		$response = curl_exec($curl);
// 		curl_close($curl);
// 		$array =  json_decode($response,true);
// 		//print_r($array); die();
// 				$encsek = ($array['Data']['Sek']);
// 				$token = ($array['Data']['AuthToken']);
// 				$expiry_time = ($array['Data']['TokenExpiry']);
// 		//$sek= openssl_decrypt(base64_decode($encsek),"AES-256-ECB",$key, OPENSSL_RAW_DATA);
// 		$tok["token"]=$token; $tok["sek"]=$encsek; $tok["key"]=$key;
// 		date_default_timezone_set('Asia/Kolkata');
// 		$ctime = date('Y-m-d H:i:s');
// 		$this->db->where('id','1')->update('gst_token',array('token'=>$token,'sek'=>$encsek,'key'=>$key,'time'=>$ctime,'expiry_time'=>$expiry_time));
// 		return ($tok);
// 	}

// 	function token_check($type) {
// 		if($type=='gst') {
// 			$result = $this->db->get_where('setting',array('id'=>'6'))->row_array();
// 			if($result['status']=='true') {
// 				$id=2;
// 			}else {
// 				$id=1;
// 			}
// 		}

// 		if($type=='bill') {
// 			$result = $this->db->get_where('setting',array('id'=>'7'))->row_array();
// 			if($result['status']=='true') {
// 				$id=2;
// 			}else {
// 				$id=1;
// 			}
// 		}

// 		$check = $this->db->get_where('gst_token',array('id'=>$id))->row_array();
//         date_default_timezone_set('Asia/Kolkata');
//         $expire = strtotime($check['expiry_time']);
// 		$current = strtotime(date('Y-m-d H:i:s'));
// 		//die;
//         if ($expire >= $current) {
//             $row['token']=$check['token'];
//             $row['sek']=$check['sek'];
//             $row['key']=$check['key'];
//         }
//         else {
// 			if($id==2) {
// 				$tok = $this->p_token();
// 			}
// 			else {
// 				$tok = $this->token();
// 			}
//             $row['token']=$tok["token"];
//             $row['sek']=$tok["sek"];
//             $row['key']=$tok["key"];
//         }
// 		$row['url'] = $check['url'];
// 		$row['client_id'] = $check['client_id'];
// 		$row['client_secret'] = $check['client_secret'];
// 		$row['Gstin'] = $check['Gstin'];
// 		$row['user_name'] = $check['user_name'];
// 		return $row;
// 	}

// 	function gst($gst) {
// 		$row = $this->token_check('gst');
// 		//print_r($row); die;
//         $curl = curl_init();
//         curl_setopt_array($curl, array(
//             CURLOPT_URL => $row['url']."eivital/v1.04/Master/gstin/".$gst, 
//             CURLOPT_RETURNTRANSFER => true,
//             CURLOPT_ENCODING => "",
//             CURLOPT_MAXREDIRS => 10,
//             CURLOPT_TIMEOUT => 0,
//             CURLOPT_FOLLOWLOCATION => true,
//             CURLOPT_HTTP_VERSION => CURL_HTTP_VERSION_1_1,
//             CURLOPT_CUSTOMREQUEST => "GET",
//             CURLOPT_HTTPHEADER => array(
//                 "client_id: ".$row['client_id']."",
//                 "client_secret: ".$row['client_secret']."",
//                 "Gstin: ".$row['Gstin']."",
//                 "user_name: ".$row['user_name']."",
//                 "AuthToken: ".$row['token']."",
//                 "Content-Type: application/json"
//             ),
//         ));
//         $response = curl_exec($curl);
//         curl_close($curl);
// 		//echo $response; die;
//         $core =  json_decode($response,true);
//         $gst =  $core['Data'];
//         $sek= openssl_decrypt(base64_decode($row['sek']),"AES-256-ECB",$row['key'], OPENSSL_RAW_DATA);
//         $d_gst= openssl_decrypt(base64_decode($gst),"AES-256-ECB",$sek, OPENSSL_RAW_DATA);
//         //print_r($d_gst); die;
//         return $d_gst;
// 	}

// }

function RSAencrypt($string)
{
	$public_key = file_get_contents('PublicKey/einv_sandbox.pem');
	openssl_public_encrypt($string, $crypted, $public_key);
	return base64_encode($crypted);
}

function token()
{
	$key = 'aaaaafghijklmnopqrstuvwxyz125478';
	$appkey = base64_encode($key);

	//$password = $this->RSAencrypt('Kumar@11');
	//$appkey  = $this->RSAencrypt($key);
	$bData = array(
		"UserName" => "MAGADHTMT1A",
		"Password" => "Kumar@11",
		"AppKey" => $appkey,
		"ForceRefreshAccessToken" => false
	);
	

	$ency = base64_encode(json_encode($bData));
	// echo $ency; die();ececho $data; die()ho $data; die()
	$data = RSAencrypt("eyJVc2VyTmFtZSI6Ik1BR0FESFRNVDFBIiwiUGFzc3dvcmQiOiJLdW1hckAxMSIsIkFwcEtleSI6IllXRmhZV0ZtWjJocGFtdHNiVzV2Y0hGeWMzUjFkbmQ0ZVhveE1qVTBOemc9IiwiRm9yY2VSZWZyZXNoQWNjZXNzVG9rZW4iOmZhbHNlfQ==");
	// echo $data; die();
	$curl = curl_init();
	curl_setopt_array($curl, array(
		CURLOPT_URL => "https://einv-apisandbox.nic.in/eivital/v1.04/auth",
		CURLOPT_RETURNTRANSFER => true,
		CURLOPT_ENCODING => "",
		CURLOPT_MAXREDIRS => 10,
		CURLOPT_TIMEOUT => 0,
		CURLOPT_FOLLOWLOCATION => true,
		CURLOPT_HTTP_VERSION => CURL_HTTP_VERSION_1_1,
		CURLOPT_CUSTOMREQUEST => "POST",
		CURLOPT_POSTFIELDS => json_encode($data),
		CURLOPT_POSTFIELDS => "{\r\n\"Data\": \"" . $data . "\"}",
		CURLOPT_HTTPHEADER => array(
			"client_id: AABCM10TXP4R28N",
			"client_secret: zn42HhVvA0PDd3r7WKkZ",
			"Gstin: 10AABCM8648L1ZB",
			"Content-Type: application/json"
		),
	));
	$response = curl_exec($curl);
	curl_close($curl);
	$array =  json_decode($response, true);
	print_r($array); die();
	$encsek = ($array['Data']['Sek']);
	$token = ($array['Data']['AuthToken']);
	
	$expiry_time = ($array['Data']['TokenExpiry']);
	//$sek= openssl_decrypt(base64_decode($encsek),"AES-256-ECB",$key, OPENSSL_RAW_DATA);
	$tok["token"] = $token;
	$tok["sek"] = $encsek;
	$tok["key"] = $key;
	print($token);
	date_default_timezone_set('Asia/Kolkata');
	$ctime = date('Y-m-d H:i:s');
	// $this->db->where('id','1')->update('gst_token',array('token'=>$token,'sek'=>$encsek,'key'=>$key,'time'=>$ctime,'expiry_time'=>$expiry_time));
	return ($tok);
}

echo token();
