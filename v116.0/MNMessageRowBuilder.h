/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNAppMessage, MNMessageCoreViewModel, FBStringWithRedactedDescription, NSString, FBMUser, NSSet, NSDictionary, MNAttributionViewModel, MNAttachmentViewModelWithStyle, MNGenericAdminMessageViewModel, MNTypingAttribution;

@interface MNMessageRowBuilder : NSObject {

	MNAppMessage* _message;
	MNMessageCoreViewModel* _coreViewModel;
	FBStringWithRedactedDescription* _accessibilityLabel;
	NSString* _accessibilityHint;
	FBMUser* _sender;
	unsigned long long _rowType;
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
	BOOL _isDisplayableEphemeralMessage;
	BOOL _showTombstoneMask;
	BOOL _previousIsJourneyPrompt;
	NSSet* _readUserIds;
	NSDictionary* _viewModelsByElementKind;
	BOOL _shouldShowSentTextForNonMessengerUser;
	MNAttributionViewModel* _attributionViewModel;
	MNAttachmentViewModelWithStyle* _attachmentViewModelWithStyle;
	FBMUser* _nicknameChangeTarget;
	MNGenericAdminMessageViewModel* _genericAdminMessageViewModel;
	BOOL _shouldShowPokeAction;
	BOOL _isLastLightweightAction;
	MNTypingAttribution* _typingAttribution;

}
+(id)messageRowFromExistingMessageRow:(id)arg1 ;
+(id)messageRow;
-(id)withAccessibilityLabel:(id)arg1 ;
-(id)withMessage:(id)arg1 ;
-(id)withCoreViewModel:(id)arg1 ;
-(id)withAccessibilityHint:(id)arg1 ;
-(id)withSender:(id)arg1 ;
-(id)withRowType:(unsigned long long)arg1 ;
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
-(id)withIsDisplayableEphemeralMessage:(BOOL)arg1 ;
-(id)withShowTombstoneMask:(BOOL)arg1 ;
-(id)withPreviousIsJourneyPrompt:(BOOL)arg1 ;
-(id)withReadUserIds:(id)arg1 ;
-(id)withViewModelsByElementKind:(id)arg1 ;
-(id)withShouldShowSentTextForNonMessengerUser:(BOOL)arg1 ;
-(id)withAttributionViewModel:(id)arg1 ;
-(id)withAttachmentViewModelWithStyle:(id)arg1 ;
-(id)withNicknameChangeTarget:(id)arg1 ;
-(id)withGenericAdminMessageViewModel:(id)arg1 ;
-(id)withShouldShowPokeAction:(BOOL)arg1 ;
-(id)withIsLastLightweightAction:(BOOL)arg1 ;
-(id)withTypingAttribution:(id)arg1 ;
-(id)build;
@end

