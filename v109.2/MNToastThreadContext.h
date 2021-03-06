/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, NSSet, FBMThreadActiveBookingRequests, FBMMarketplaceThreadData;

@interface MNToastThreadContext : FBValueObject <NSCopying> {

	BOOL _isGroupThread;
	FBMThreadKey* _threadKey;
	NSSet* _otherParticipantIds;
	NSSet* _eventReminders;
	FBMThreadActiveBookingRequests* _activeBookingRequests;
	FBMMarketplaceThreadData* _marketplaceData;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                                            //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSSet * otherParticipantIds;                                         //@synthesize otherParticipantIds=_otherParticipantIds - In the implementation block
@property (nonatomic,readonly) BOOL isGroupThread;                                                       //@synthesize isGroupThread=_isGroupThread - In the implementation block
@property (nonatomic,copy,readonly) NSSet * eventReminders;                                              //@synthesize eventReminders=_eventReminders - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadActiveBookingRequests * activeBookingRequests;              //@synthesize activeBookingRequests=_activeBookingRequests - In the implementation block
@property (nonatomic,copy,readonly) FBMMarketplaceThreadData * marketplaceData;                          //@synthesize marketplaceData=_marketplaceData - In the implementation block
-(FBMMarketplaceThreadData *)marketplaceData;
-(id)initWithThreadKey:(id)arg1 otherParticipantIds:(id)arg2 isGroupThread:(BOOL)arg3 eventReminders:(id)arg4 activeBookingRequests:(id)arg5 marketplaceData:(id)arg6 ;
-(BOOL)isGroupThread;
-(NSSet *)eventReminders;
-(NSSet *)otherParticipantIds;
-(FBMThreadActiveBookingRequests *)activeBookingRequests;
-(FBMThreadKey *)threadKey;
@end

