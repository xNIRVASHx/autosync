Action()
{
	//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Tue May 24 10:33:14 2022
//"                       
//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

function Action()
{
	//05/31/2022 10:52am
	//05/31/2022 10:59am
	//05/31/2022 11:15am
	//05/31/2022 11:16am
	//05/31/2022 12:27pm
	//05/31/2022 12:31pm
	//05/31/2022 12:33pm///
	//test of auto sync
	//test of auto sync2
	//test of auto sync3
	
	web.setSocketsOption('SSL_VERSION', 'AUTO');

	web.addAutoHeader('Sec-Fetch-Site', 
		'none');

	web.addAutoHeader('Sec-Fetch-Mode', 
		'navigate');

	web.addAutoHeader('Sec-Fetch-Dest', 
		'document');

	web.addHeader('Sec-Fetch-User', 
		'?1');

	web.addHeader('Upgrade-Insecure-Requests', 
		'1');

	web.addAutoHeader('sec-ch-ua', 
		'\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"101\", \"Google Chrome\";v=\"101\"');

	web.addAutoHeader('sec-ch-ua-mobile', 
		'?0');

	web.addAutoHeader('sec-ch-ua-platform', 
		'\"Windows\"');

lr.startTransaction('Launch');

	web.url(
		{
			name : 'advantageonlineshopping.com', 
			url : 'https://advantageonlineshopping.com/', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : '', 
			snapshot : 't1.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : '/main.min.js'},
				{url : '/services.properties'},
				{url : '/css/images/logo.png'},
				{url : '/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff', referer : 'https://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff', referer : 'https://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff', referer : 'https://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/images/closeDark.png'},
				{url : '/css/images/arrow_right.png', referer : 'https://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff', referer : 'https://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff', referer : 'https://advantageonlineshopping.com/css/main.min.css'},
				{url : '/css/images/Special-offer.jpg'},
				{url : '/catalog/fetchImage?image_id=tablets'},
				{url : '/catalog/fetchImage?image_id=speakers'},
				{url : '/catalog/fetchImage?image_id=laptops'},
				{url : '/css/images/Banner1.jpg'},
				{url : '/catalog/fetchImage?image_id=mice'},
				{url : '/catalog/fetchImage?image_id=headphones'},
				{url : '/css/images/GoUp.png'},
				{url : '/css/images/facebook.png'},
				{url : '/css/images/twitter.png'},
				{url : '/css/images/linkedin.png'},
				{url : '/css/images/Banner2.jpg'},
				{url : '/css/images/Banner3.jpg'},
				{url : '/css/images/Popular-item3.jpg'},
				{url : '/css/images/Popular-item2.jpg'},
				{url : '/css/images/Popular-item1.jpg'},
				{url : '/css/images/Filter.png'},
				{url : '/catalog/fetchImage?image_id=4200'},
				{url : '/catalog/fetchImage?image_id=4700'},
				{url : '/css/images/category_banner_4.png'},
				{url : '/catalog/fetchImage?image_id=4600'},
				{url : '/catalog/fetchImage?image_id=4300'},
				{url : '/catalog/fetchImage?image_id=4400'},
				{url : '/catalog/fetchImage?image_id=4100'},
				{url : '/catalog/fetchImage?image_id=4500'}
			]
		}
	);

	web.addAutoHeader('Sec-Fetch-Dest', 
		'empty');

	web.addAutoHeader('Sec-Fetch-Mode', 
		'cors');

	web.addAutoHeader('Sec-Fetch-Site', 
		'same-origin');

	web.url(
		{
			name : 'ALL', 
			url : 'https://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't2.inf', 
			mode : 'HTML'
		}
	);

	web.addHeader('Origin', 
		'https://advantageonlineshopping.com');

	web.addHeader('SOAPAction', 
		'com.advantage.online.store.accountserviceGetAccountConfigurationRequest');

	web.addHeader('X-Requested-With', 
		'XMLHttpRequest');

	web.customRequest(
		{
			name : 'GetAccountConfigurationRequest', 
			url : 'https://advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'text/xml', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't3.inf', 
			mode : 'HTML', 
			encType : 'text/xml; charset=UTF-8', 
			body : '<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>'
		}
	);

	web.url(
		{
			name : 'categories', 
			url : 'https://advantageonlineshopping.com/catalog/api/v1/categories', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't4.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'search', 
			url : 'https://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't5.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'popularProducts.json', 
			url : 'https://advantageonlineshopping.com/app/tempFiles/popularProducts.json', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't6.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'home-page.html', 
			url : 'https://advantageonlineshopping.com/app/views/home-page.html', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't7.inf', 
			mode : 'HTML'
		}
	);

lr.endTransaction('Launch', lr.AUTO);

lr.thinkTime(5);

lr.startTransaction('Speaker');

	web.url(
		{
			name : 'products', 
			url : 'https://advantageonlineshopping.com/catalog/api/v1/categories/4/products', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't8.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'attributes', 
			url : 'https://advantageonlineshopping.com/catalog/api/v1/categories/attributes', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't9.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'category-page.html', 
			url : 'https://advantageonlineshopping.com/app/views/category-page.html', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'https://advantageonlineshopping.com/', 
			snapshot : 't10.inf', 
			mode : 'HTML'
		}
	);

lr.endTransaction('Speaker', lr.AUTO);

	return 0;
}
