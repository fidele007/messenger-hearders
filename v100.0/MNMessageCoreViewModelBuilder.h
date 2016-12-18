/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, FBStringWithRedactedDescription, NSArray, MNAudioAttachmentViewModel, MNVideoAttachmentViewModel, MNAttachmentViewModelWithStyle, FBMSticker, MNMessageProgressIndicatorConfiguration, NSDictionary, MNThreadCustomizationPromptViewModel, MNThreadJourneySetupViewModel, UIColor, FBMJoinableGroupInfo;

@interface MNMessageCoreViewModelBuilder : NSObject {

	unsigned long long _messageContentType;
	unsigned long long _messageRowType;
	NSString* _senderId;
	BOOL _isFromMe;
	unsigned long long _sendOrServerTimestamp;
	NSDate* _timestampDate;
	FBStringWithRedactedDescription* _messageBody;
	BOOL _isMessageBodyFiltered;
	NSArray* _photoViewModels;
	MNAudioAttachmentViewModel* _audioAttachmentViewModel;
	MNVideoAttachmentViewModel* _videoAttachmentViewModel;
	NSArray* _fileAttachmentViewModels;
	MNAttachmentViewModelWithStyle* _attachmentViewModelWithStyle_DO_NOT_USE;
	BOOL _isForwardable;
	BOOL _isFullBleed;
	FBMSticker* _sticker;
	long long _bubbleStyle;
	BOOL _bubbleCanBeGrouped;
	unsigned long long _messageTextFontStyle;
	unsigned long long _likeStickerSize;
	MNMessageProgressIndicatorConfiguration* _messageProgressIndicatorConfiguration;
	NSDictionary* _participantsNickname;
	MNThreadCustomizationPromptViewModel* _threadCustomizationPromptViewModel;
	MNThreadJourneySetupViewModel* _threadJourneySetupViewModel;
	NSString* _otherUserIdOnCanonicalThread;
	BOOL _isRenderAsStickerContent;
	UIColor* _themeColor;
	BOOL _hasFlowerBorder;
	BOOL _canShowCameraQuickReplyUpsell;
	FBMJoinableGroupInfo* _joinableGroupInfo;
	NSString* _montageReplyMessageId;
	BOOL _canShowMontageUpsell;
	BOOL _isPoke;
	BOOL _canShowContentCameraUpgradeUpsell;
	BOOL _canShowContentCameraUpgradeActionButton;
	BOOL _isLightweightAction;
	NSArray* _profileRanges;

}
+(id)messageCoreViewModelFromExistingMessageCoreViewModel:(id)arg1 ;
+(id)messageCoreViewModel;
-(id)withThemeColor:(id)arg1 ;
-(id)withMessageRowType:(unsigned long long)arg1 ;
-(id)withMessageContentType:(unsigned long long)arg1 ;
-(id)withSenderId:(id)arg1 ;
-(id)withIsFromMe:(BOOL)arg1 ;
-(id)withSendOrServerTimestamp:(unsigned long long)arg1 ;
-(id)withTimestampDate:(id)arg1 ;
-(id)withMessageBody:(id)arg1 ;
-(id)withIsMessageBodyFiltered:(BOOL)arg1 ;
-(id)withPhotoViewModels:(id)arg1 ;
-(id)withAudioAttachmentViewModel:(id)arg1 ;
-(id)withVideoAttachmentViewModel:(id)arg1 ;
-(id)withFileAttachmentViewModels:(id)arg1 ;
-(id)withAttachmentViewModelWithStyle_DO_NOT_USE:(id)arg1 ;
-(id)withIsForwardable:(BOOL)arg1 ;
-(id)withIsFullBleed:(BOOL)arg1 ;
-(id)withSticker:(id)arg1 ;
-(id)withBubbleStyle:(long long)arg1 ;
-(id)withBubbleCanBeGrouped:(BOOL)arg1 ;
-(id)withMessageTextFontStyle:(unsigned long long)arg1 ;
-(id)withLikeStickerSize:(unsigned long long)arg1 ;
-(id)withMessageProgressIndicatorConfiguration:(id)arg1 ;
-(id)withParticipantsNickname:(id)arg1 ;
-(id)withThreadCustomizationPromptViewModel:(id)arg1 ;
-(id)withThreadJourneySetupViewModel:(id)arg1 ;
-(id)withOtherUserIdOnCanonicalThread:(id)arg1 ;
-(id)withIsRenderAsStickerContent:(BOOL)arg1 ;
-(id)withHasFlowerBorder:(BOOL)arg1 ;
-(id)withCanShowCameraQuickReplyUpsell:(BOOL)arg1 ;
-(id)withJoinableGroupInfo:(id)arg1 ;
-(id)withMontageReplyMessageId:(id)arg1 ;
-(id)withCanShowMontageUpsell:(BOOL)arg1 ;
-(id)withIsPoke:(BOOL)arg1 ;
-(id)withCanShowContentCameraUpgradeUpsell:(BOOL)arg1 ;
-(id)withCanShowContentCameraUpgradeActionButton:(BOOL)arg1 ;
-(id)withIsLightweightAction:(BOOL)arg1 ;
-(id)withProfileRanges:(id)arg1 ;
-(id)build;
@end

