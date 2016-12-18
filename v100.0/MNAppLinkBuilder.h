/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface MNAppLinkBuilder : NSObject {

	NSString* _title;
	NSURL* _href;
	NSURL* _url;
	BOOL _appLinkSupported;
	BOOL _appInstalled;
	BOOL _siteIntegrityApproved;
	long long _appStoreId;
	NSURL* _appStoreUrl;

}
+(id)appLinkFromExistingAppLink:(id)arg1 ;
+(id)appLink;
-(id)withHref:(id)arg1 ;
-(id)withUrl:(id)arg1 ;
-(id)withAppLinkSupported:(BOOL)arg1 ;
-(id)withAppInstalled:(BOOL)arg1 ;
-(id)withSiteIntegrityApproved:(BOOL)arg1 ;
-(id)withAppStoreId:(long long)arg1 ;
-(id)withAppStoreUrl:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

