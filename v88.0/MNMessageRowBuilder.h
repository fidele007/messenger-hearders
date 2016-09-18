/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNAppMessage, MNMessageCoreViewModel, FBStringWithRedactedDescription, NSString, FBMUser, NSSet, NSDictionary, MNAttributionViewModel, MNAttachmentViewModelWithStyle, MNGenericAdminMessageViewModel;

@interface MNMessageRowBuilder : NSObject {

	MNAppMessage* _message;
	MNMessageCoreViewModel* _coreViewModel;
	FBStringWithRedactedDescription* _accessibilityLabel;
	NSString* _accessibilityHint;
	FBMUser* _sender;
	unsigned long long _previousType;
	unsigned long long _nextType;
	unsigned long long _profileImagePosition;
	unsigned long long _readReceiptState;
	BOOL _displayAsSent;
	BOOL _isLastRow;
	BOOL _isLastRowFromMe;
	BOOL _isLastRowFromOthers;
	BOOL _shouldShowWideGutter;
	BOOL _previousIsSameMessageGroup;
	BOOL _nextIsSameMessageGroup;
	BOOL _shouldEnableHideMenuItem;
	BOOL _shouldExpandFailedTapArea;
	BOOL _showNonPushableBubble;
	BOOL _isDisplayableEphemeralMessage;
	BOOL _showTombstoneMask;
	BOOL _detailsExpandedByUser;
	BOOL _previousIsJourneyPrompt;
	NSSet* _readUserIds;
	NSDictionary* _viewModelsByElementKind;
	BOOL _shouldShowSentTextForNonMessengerUser;
	MNAttributionViewModel* _attributionViewModel;
	MNAttachmentViewModelWithStyle* _attachmentViewModelWithStyle;
	FBMUser* _nicknameChangeTarget;
	BOOL _shouldDisplayFlowerBorder;
	BOOL _shouldShowCameraQuickReply;
	MNGenericAdminMessageViewModel* _genericAdminMessageViewModel;

}
+(id)messageRow;
+(id)messageRowFromExistingMessageRow:(id)arg1 ;
-(id)withAccessibilityLabel:(id)arg1 ;
-(id)withMessage:(id)arg1 ;
-(id)withCoreViewModel:(id)arg1 ;
-(id)withAccessibilityHint:(id)arg1 ;
-(id)withSender:(id)arg1 ;
-(id)withPreviousType:(unsigned long long)arg1 ;
-(id)withNextType:(unsigned long long)arg1 ;
-(id)withProfileImagePosition:(unsigned long long)arg1 ;
-(id)withReadReceiptState:(unsigned long long)arg1 ;
-(id)withDisplayAsSent:(BOOL)arg1 ;
-(id)withIsLastRow:(BOOL)arg1 ;
-(id)withIsLastRowFromMe:(BOOL)arg1 ;
-(id)withIsLastRowFromOthers:(BOOL)arg1 ;
-(id)withShouldShowWideGutter:(BOOL)arg1 ;
-(id)withPreviousIsSameMessageGroup:(BOOL)arg1 ;
-(id)withNextIsSameMessageGroup:(BOOL)arg1 ;
-(id)withShouldEnableHideMenuItem:(BOOL)arg1 ;
-(id)withShouldExpandFailedTapArea:(BOOL)arg1 ;
-(id)withShowNonPushableBubble:(BOOL)arg1 ;
-(id)withIsDisplayableEphemeralMessage:(BOOL)arg1 ;
-(id)withShowTombstoneMask:(BOOL)arg1 ;
-(id)withDetailsExpandedByUser:(BOOL)arg1 ;
-(id)withPreviousIsJourneyPrompt:(BOOL)arg1 ;
-(id)withReadUserIds:(id)arg1 ;
-(id)withViewModelsByElementKind:(id)arg1 ;
-(id)withShouldShowSentTextForNonMessengerUser:(BOOL)arg1 ;
-(id)withAttributionViewModel:(id)arg1 ;
-(id)withAttachmentViewModelWithStyle:(id)arg1 ;
-(id)withNicknameChangeTarget:(id)arg1 ;
-(id)withShouldDisplayFlowerBorder:(BOOL)arg1 ;
-(id)withShouldShowCameraQuickReply:(BOOL)arg1 ;
-(id)withGenericAdminMessageViewModel:(id)arg1 ;
-(id)build;
@end

