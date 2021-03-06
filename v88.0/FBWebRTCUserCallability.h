/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FBWebRTCUserCallability : NSObject {

	BOOL _canCall;
	BOOL _isOnline;
	NSString* _disableReason;
	NSString* _disableReasonId;
	NSDate* _updatedAt;

}

@property (nonatomic,readonly) BOOL canCall;                                 //@synthesize canCall=_canCall - In the implementation block
@property (nonatomic,readonly) BOOL isOnline;                                //@synthesize isOnline=_isOnline - In the implementation block
@property (nonatomic,copy,readonly) NSString * disableReason;                //@synthesize disableReason=_disableReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * disableReasonId;              //@synthesize disableReasonId=_disableReasonId - In the implementation block
@property (nonatomic,readonly) NSDate * updatedAt;                           //@synthesize updatedAt=_updatedAt - In the implementation block
-(BOOL)canCall;
-(NSDate *)updatedAt;
-(id)callabilityStatus;
-(NSString *)disableReasonId;
-(id)initWithCanCall:(BOOL)arg1 isOnline:(BOOL)arg2 disabledReason:(id)arg3 disabledReasonId:(id)arg4 updatedAt:(id)arg5 ;
-(id)initWithCanCall:(BOOL)arg1 isOnline:(BOOL)arg2 disabledReason:(id)arg3 disabledReasonId:(id)arg4 ;
-(NSString *)disableReason;
-(BOOL)isOnline;
@end

