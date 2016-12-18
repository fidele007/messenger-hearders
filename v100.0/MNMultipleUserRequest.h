/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, MNModelRequestConfiguration, MNMultipleUserRequestBehavior;

@interface MNMultipleUserRequest : FBValueObject <NSCopying> {

	BOOL _allowEmailUsers;
	NSSet* _requestedUserIds;
	MNModelRequestConfiguration* _configuration;
	MNMultipleUserRequestBehavior* _behavior;

}

@property (nonatomic,copy,readonly) NSSet * requestedUserIds;                                 //@synthesize requestedUserIds=_requestedUserIds - In the implementation block
@property (nonatomic,readonly) BOOL allowEmailUsers;                                          //@synthesize allowEmailUsers=_allowEmailUsers - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) MNMultipleUserRequestBehavior * behavior;                 //@synthesize behavior=_behavior - In the implementation block
-(id)initWithRequestedUserIds:(id)arg1 allowEmailUsers:(BOOL)arg2 configuration:(id)arg3 behavior:(id)arg4 ;
-(NSSet *)requestedUserIds;
-(BOOL)allowEmailUsers;
-(MNMultipleUserRequestBehavior *)behavior;
-(MNModelRequestConfiguration *)configuration;
@end

