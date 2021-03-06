/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(MNThreadMontageAddAudienceButtonViewModel *)addAudienceButton;
-(MNMontageSeenHeadsViewModel *)otherParticipantSeenHead;
-(id)initWithViewerStatusHead:(id)arg1 viewerOpenComposerStatusHead:(id)arg2 otherParticipantStatusHead:(id)arg3 otherParticipantSeenHead:(id)arg4 addAudienceButton:(id)arg5 customizationInfo:(id)arg6 ;
@end

