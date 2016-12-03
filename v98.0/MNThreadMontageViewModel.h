/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMontageSingleStatusHeadViewModel, MNMontageSingleStatusHeadOpenComposerViewModel, MNMontageSeenHeadsViewModel, MNThreadMontageAddAudienceButtonViewModel, FBMThreadCustomizationInfo;

@interface MNThreadMontageViewModel : FBValueObject <NSCopying> {

	MNMontageSingleStatusHeadViewModel* _viewerStatusHead;
	MNMontageSingleStatusHeadOpenComposerViewModel* _viewerOpenComposerStatusHead;
	MNMontageSingleStatusHeadViewModel* _otherParticipantStatusHead;
	MNMontageSeenHeadsViewModel* _otherParticipantSeenHead;
	MNThreadMontageAddAudienceButtonViewModel* _addAudienceButton;
	FBMThreadCustomizationInfo* _customizationInfo;

}

@property (nonatomic,copy,readonly) MNMontageSingleStatusHeadViewModel * viewerStatusHead;                                      //@synthesize viewerStatusHead=_viewerStatusHead - In the implementation block
@property (nonatomic,copy,readonly) MNMontageSingleStatusHeadOpenComposerViewModel * viewerOpenComposerStatusHead;              //@synthesize viewerOpenComposerStatusHead=_viewerOpenComposerStatusHead - In the implementation block
@property (nonatomic,copy,readonly) MNMontageSingleStatusHeadViewModel * otherParticipantStatusHead;                            //@synthesize otherParticipantStatusHead=_otherParticipantStatusHead - In the implementation block
@property (nonatomic,copy,readonly) MNMontageSeenHeadsViewModel * otherParticipantSeenHead;                                     //@synthesize otherParticipantSeenHead=_otherParticipantSeenHead - In the implementation block
@property (nonatomic,copy,readonly) MNThreadMontageAddAudienceButtonViewModel * addAudienceButton;                              //@synthesize addAudienceButton=_addAudienceButton - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadCustomizationInfo * customizationInfo;                                             //@synthesize customizationInfo=_customizationInfo - In the implementation block
-(FBMThreadCustomizationInfo *)customizationInfo;
-(MNMontageSingleStatusHeadViewModel *)viewerStatusHead;
-(MNMontageSingleStatusHeadOpenComposerViewModel *)viewerOpenComposerStatusHead;
-(MNMontageSingleStatusHeadViewModel *)otherParticipantStatusHead;
-(id)initWithViewerStatusHead:(id)arg1 viewerOpenComposerStatusHead:(id)arg2 otherParticipantStatusHead:(id)arg3 otherParticipantSeenHead:(id)arg4 addAudienceButton:(id)arg5 customizationInfo:(id)arg6 ;
-(MNThreadMontageAddAudienceButtonViewModel *)addAudienceButton;
-(MNMontageSeenHeadsViewModel *)otherParticipantSeenHead;
@end
