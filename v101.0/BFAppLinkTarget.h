/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BFAppLinkTarget : NSObject {

	NSURL* _URL;
	NSString* _appStoreId;
	NSString* _appName;

}

@property (nonatomic,retain) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * appStoreId;              //@synthesize appStoreId=_appStoreId - In the implementation block
@property (nonatomic,copy) NSString * appName;                 //@synthesize appName=_appName - In the implementation block
+(id)appLinkTargetWithURL:(id)arg1 appStoreId:(id)arg2 appName:(id)arg3 ;
-(NSString *)appStoreId;
-(void)setAppStoreId:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end
