/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, NSSet, FBMThreadActiveBookingRequests;

@interface MNToastThreadContext : FBValueObject <NSCopying> {

	BOOL _isGroupThread;
	FBMThreadKey* _threadKey;
	NSSet* _otherParticipantIds;
	NSSet* _eventReminders;
	FBMThreadActiveBookingRequests* _activeBookingRequests;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                                            //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSSet * otherParticipantIds;                                         //@synthesize otherParticipantIds=_otherParticipantIds - In the implementation block
@property (nonatomic,readonly) BOOL isGroupThread;                                                       //@synthesize isGroupThread=_isGroupThread - In the implementation block
@property (nonatomic,copy,readonly) NSSet * eventReminders;                                              //@synthesize eventReminders=_eventReminders - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadActiveBookingRequests * activeBookingRequests;              //@synthesize activeBookingRequests=_activeBookingRequests - In the implementation block
-(NSSet *)otherParticipantIds;
-(NSSet *)eventReminders;
-(FBMThreadActiveBookingRequests *)activeBookingRequests;
-(id)initWithThreadKey:(id)arg1 otherParticipantIds:(id)arg2 isGroupThread:(BOOL)arg3 eventReminders:(id)arg4 activeBookingRequests:(id)arg5 ;
-(BOOL)isGroupThread;
-(FBMThreadKey *)threadKey;
@end
