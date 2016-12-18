/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface FBWebAppLinkBuilder : NSObject {

	NSString* _appName;
	NSURL* _url;
	BOOL _appInstalled;

}
+(id)webAppLink;
+(id)webAppLinkFromExistingWebAppLink:(id)arg1 ;
-(id)withUrl:(id)arg1 ;
-(id)withAppInstalled:(BOOL)arg1 ;
-(id)withAppName:(id)arg1 ;
-(id)build;
@end

