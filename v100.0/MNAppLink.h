/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNAppLink : FBValueObject <NSCopying> {

	BOOL _appLinkSupported;
	BOOL _appInstalled;
	BOOL _siteIntegrityApproved;
	NSString* _title;
	NSURL* _href;
	NSURL* _url;
	long long _appStoreId;
	NSURL* _appStoreUrl;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSURL * href;                       //@synthesize href=_href - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL appLinkSupported;                   //@synthesize appLinkSupported=_appLinkSupported - In the implementation block
@property (nonatomic,readonly) BOOL appInstalled;                       //@synthesize appInstalled=_appInstalled - In the implementation block
@property (nonatomic,readonly) BOOL siteIntegrityApproved;              //@synthesize siteIntegrityApproved=_siteIntegrityApproved - In the implementation block
@property (nonatomic,readonly) long long appStoreId;                    //@synthesize appStoreId=_appStoreId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appStoreUrl;                //@synthesize appStoreUrl=_appStoreUrl - In the implementation block
-(BOOL)appLinkSupported;
-(BOOL)siteIntegrityApproved;
-(long long)appStoreId;
-(NSURL *)appStoreUrl;
-(id)initWithTitle:(id)arg1 href:(id)arg2 url:(id)arg3 appLinkSupported:(BOOL)arg4 appInstalled:(BOOL)arg5 siteIntegrityApproved:(BOOL)arg6 appStoreId:(long long)arg7 appStoreUrl:(id)arg8 ;
-(NSURL *)url;
-(NSString *)title;
-(NSURL *)href;
-(BOOL)appInstalled;
@end

