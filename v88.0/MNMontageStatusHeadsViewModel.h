/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMontageSingleStatusHeadViewModel, MNMontageSeenHeadsViewModel;

@interface MNMontageStatusHeadsViewModel : FBValueObject <NSCopying> {

	MNMontageSingleStatusHeadViewModel* _viewerStatusHead;
	MNMontageSingleStatusHeadViewModel* _otherParticipantStatusHead;
	MNMontageSeenHeadsViewModel* _seenHeads;

}

@property (nonatomic,copy,readonly) MNMontageSingleStatusHeadViewModel * viewerStatusHead;                        //@synthesize viewerStatusHead=_viewerStatusHead - In the implementation block
@property (nonatomic,copy,readonly) MNMontageSingleStatusHeadViewModel * otherParticipantStatusHead;              //@synthesize otherParticipantStatusHead=_otherParticipantStatusHead - In the implementation block
@property (nonatomic,copy,readonly) MNMontageSeenHeadsViewModel * seenHeads;                                      //@synthesize seenHeads=_seenHeads - In the implementation block
-(MNMontageSeenHeadsViewModel *)seenHeads;
-(MNMontageSingleStatusHeadViewModel *)viewerStatusHead;
-(MNMontageSingleStatusHeadViewModel *)otherParticipantStatusHead;
-(id)initWithViewerStatusHead:(id)arg1 otherParticipantStatusHead:(id)arg2 seenHeads:(id)arg3 ;
@end

