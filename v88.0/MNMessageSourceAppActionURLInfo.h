/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface MNMessageSourceAppActionURLInfo : FBValueObject <NSCopying> {

	NSString* _metadata;
	NSSet* _userAppScopedIds;
	NSString* _appInstallURLOverride;
	unsigned long long _context;

}

@property (nonatomic,copy,readonly) NSString * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSSet * userAppScopedIds;                      //@synthesize userAppScopedIds=_userAppScopedIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * appInstallURLOverride;              //@synthesize appInstallURLOverride=_appInstallURLOverride - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                         //@synthesize context=_context - In the implementation block
-(NSSet *)userAppScopedIds;
-(id)initWithMetadata:(id)arg1 userAppScopedIds:(id)arg2 appInstallURLOverride:(id)arg3 context:(unsigned long long)arg4 ;
-(NSString *)appInstallURLOverride;
-(unsigned long long)context;
-(NSString *)metadata;
@end

