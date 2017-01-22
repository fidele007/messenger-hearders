/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, FBMRoomAssociatedObjectType;

@interface FBMJoinableGroupInfoBuilder : NSObject {

	unsigned long long _joinableMode;
	NSString* _joinableLink;
	unsigned long long _approvalMode;
	unsigned long long _approvalModeToggleable;
	NSDictionary* _joinRequestQueue;
	unsigned long long _discoverableMode;
	unsigned long long _privacyMode;
	FBMRoomAssociatedObjectType* _associatedObject;

}
+(id)joinableGroupInfo;
+(id)joinableGroupInfoFromExistingJoinableGroupInfo:(id)arg1 ;
-(id)withJoinableLink:(id)arg1 ;
-(id)withJoinableMode:(unsigned long long)arg1 ;
-(id)withApprovalMode:(unsigned long long)arg1 ;
-(id)withApprovalModeToggleable:(unsigned long long)arg1 ;
-(id)withJoinRequestQueue:(id)arg1 ;
-(id)withDiscoverableMode:(unsigned long long)arg1 ;
-(id)withPrivacyMode:(unsigned long long)arg1 ;
-(id)withAssociatedObject:(id)arg1 ;
-(id)build;
@end
