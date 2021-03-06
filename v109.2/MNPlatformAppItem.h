/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface MNPlatformAppItem : FBValueObject <NSCopying, NSCoding> {

	BOOL _installed;
	NSString* _appID;
	NSString* _storeID;
	NSString* _name;
	NSString* _shortDescription;
	NSURL* _iconURL;

}

@property (nonatomic,copy,readonly) NSString * appID;                         //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                       //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortDescription;              //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,copy,readonly) NSURL * iconURL;                          //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,readonly) BOOL installed;                                //@synthesize installed=_installed - In the implementation block
-(id)initWithAppID:(id)arg1 storeID:(id)arg2 name:(id)arg3 shortDescription:(id)arg4 iconURL:(id)arg5 installed:(BOOL)arg6 ;
-(NSURL *)iconURL;
-(NSString *)name;
-(NSString *)shortDescription;
-(NSString *)storeID;
-(BOOL)installed;
-(NSString *)appID;
@end

