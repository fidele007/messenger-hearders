/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPlatformAppRequestParameters : FBValueObject <NSCopying> {

	NSString* _appID;
	NSString* _bundleID;
	unsigned long long _requestType;

}

@property (nonatomic,copy,readonly) NSString * appID;                       //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
-(id)initWithAppID:(id)arg1 bundleID:(id)arg2 requestType:(unsigned long long)arg3 ;
-(NSString *)bundleID;
-(unsigned long long)requestType;
-(NSString *)appID;
@end

