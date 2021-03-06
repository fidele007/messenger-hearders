/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSyncObjectPublisherInfo : FBValueObject <FBObjectShallowCopyProtocol, NSCopying> {

	NSString* _syncObjectUUID;
	NSString* _caption;

}

@property (nonatomic,copy,readonly) NSString * syncObjectUUID;              //@synthesize syncObjectUUID=_syncObjectUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;                     //@synthesize caption=_caption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSyncObjectUUID:(id)arg1 caption:(id)arg2 ;
-(NSString *)syncObjectUUID;
-(NSString *)caption;
-(id)shallowCopy;
@end

