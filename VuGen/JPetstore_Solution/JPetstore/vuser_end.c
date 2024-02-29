vuser_end()
{

	/* Click on Return to Main Menu */

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(64);

	web_url("Catalog.action_2",
		"URL=https://petstore.octoperf.com/actions/Catalog.action",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={workingItemId}",
		"Snapshot=t12.inf",
		"Mode=HTML",
		LAST);

	return 0;
}