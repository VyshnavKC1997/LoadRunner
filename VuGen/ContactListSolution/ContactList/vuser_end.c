vuser_end()
{

	/* Log Out */

	lr_think_time(31);
	
	//web_add_header("Authorization","Bearer {tokenParameter}");

	web_url("logout", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	//web_add_header("Authorization","Bearer {tokenParameter}");
	
	web_custom_request("logout_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/logout", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("thinking-tester-contact-list.herokuapp.com_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}