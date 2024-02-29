Action()
{

	/* Click on Enter the Store */

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(29);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/* Search Input */

	lr_think_time(26);
	
	web_image_check("JPetStore","Src=../images/logo-topbar.gif",LAST);

	web_submit_form("Catalog.action;jsessionid=7036C49D7EEA6AD8351144C7679B0D92", 
		"Snapshot=t9.inf", 
		ITEMDATA, 
		"Name=keyword", "Value={Searchtextt}", ENDITEM, 
		"Name=searchProducts", "Value=Search", ENDITEM, 
		LAST);

	/* Click on Fresh Water fish from China */

	web_reg_find("Text=Goldfish", 
		LAST);

	lr_think_time(74);

/*Correlation comment - Do not change!  Original value='EST-20' Name ='workingItemId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=workingItemId",
		"RegExp=itemId=(.*?)\">EST-20",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_link("Fresh Water fish from China", 
		"Text=Fresh Water fish from China", 
		"Snapshot=t10.inf", 
		LAST);

	/* Click on Add to Cart */

	web_reg_find("Text=Shopping Cart", 
		LAST);

	web_reg_find("Text=FI-FW-02", 
		LAST);

	lr_think_time(32);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t11.inf", 
		LAST);

	return 0;
}
