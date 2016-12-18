/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAppDefaults;

@interface FBAPISessionHTTPCookiesManager : NSObject {

	/*^block*/id _httpCookieStorageFetchBlock;
	FBAppDefaults* _appDefaults;

}
-(id)initWithHTTPCookieStorageFetchBlock:(/*^block*/id)arg1 appDefaults:(id)arg2 ;
-(id)fetchedHTTPCookies;
-(id)cookieExpiration;
-(void)persistHTTPCookies:(id)arg1 ;
-(void)deletePersistedHTTPCookies;
-(id)init;
@end

