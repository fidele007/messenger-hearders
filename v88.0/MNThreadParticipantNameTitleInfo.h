/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, FBMThreadCustomizationInfo;

@interface MNThreadParticipantNameTitleInfo : FBValueObject <NSCopying> {

	NSOrderedSet* _participantIdsInSendingOrder;
	FBMThreadCustomizationInfo* _customizationInfo;

}

@property (nonatomic,copy,readonly) NSOrderedSet * participantIdsInSendingOrder;                 //@synthesize participantIdsInSendingOrder=_participantIdsInSendingOrder - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadCustomizationInfo * customizationInfo;              //@synthesize customizationInfo=_customizationInfo - In the implementation block
-(FBMThreadCustomizationInfo *)customizationInfo;
-(id)initWithParticipantIdsInSendingOrder:(id)arg1 customizationInfo:(id)arg2 ;
-(NSOrderedSet *)participantIdsInSendingOrder;
@end

