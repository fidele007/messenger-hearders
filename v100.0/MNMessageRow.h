/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAppMessage, MNMessageCoreViewModel, FBStringWithRedactedDescription, NSString, FBMUser, NSSet, NSDictionary, MNAttributionViewModel, MNAttachmentViewModelWithStyle, MNGenericAdminMessageViewModel;

@interface MNMessageRow : FBValueObject <NSCopying> {

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
	BOOL _previousIsJourneyPrompt;
	BOOL _shouldShowSentTextForNonMessengerUser;
	BOOL _shouldDisplayFlowerBorder;
	BOOL _shouldShowCameraQuickReply;
	BOOL _shouldShowPokeAction;
	BOOL _isLastLightweightAction;
	MNAppMessage* _message;
	MNMessageCoreViewModel* _coreViewModel;
	FBStringWithRedactedDescription* _accessibilityLabel;
	NSString* _accessibilityHint;
	FBMUser* _sender;
	unsigned long long _previousType;
	unsigned long long _nextType;
	unsigned long long _profileImagePosition;
	unsigned long long _readReceiptState;
	NSSet* _readUserIds;
	NSDictionary* _viewModelsByElementKind;
	MNAttributionViewModel* _attributionViewModel;
	MNAttachmentViewModelWithStyle* _attachmentViewModelWithStyle;
	FBMUser* _nicknameChangeTarget;
	MNGenericAdminMessageViewModel* _genericAdminMessageViewModel;

}

@property (nonatomic,copy,readonly) MNAppMessage * message;                                                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) MNMessageCoreViewModel * coreViewModel;                                     //@synthesize coreViewModel=_coreViewModel - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * accessibilityLabel;                       //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityHint;                                               //@synthesize accessibilityHint=_accessibilityHint - In the implementation block
@property (nonatomic,copy,readonly) FBMUser * sender;                                                           //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) unsigned long long previousType;                                                 //@synthesize previousType=_previousType - In the implementation block
@property (nonatomic,readonly) unsigned long long nextType;                                                     //@synthesize nextType=_nextType - In the implementation block
@property (nonatomic,readonly) unsigned long long profileImagePosition;                                         //@synthesize profileImagePosition=_profileImagePosition - In the implementation block
@property (nonatomic,readonly) unsigned long long readReceiptState;                                             //@synthesize readReceiptState=_readReceiptState - In the implementation block
@property (nonatomic,readonly) BOOL displayAsSent;                                                              //@synthesize displayAsSent=_displayAsSent - In the implementation block
@property (nonatomic,readonly) BOOL isLastRow;                                                                  //@synthesize isLastRow=_isLastRow - In the implementation block
@property (nonatomic,readonly) BOOL isLastRowFromMe;                                                            //@synthesize isLastRowFromMe=_isLastRowFromMe - In the implementation block
@property (nonatomic,readonly) BOOL isLastRowFromOthers;                                                        //@synthesize isLastRowFromOthers=_isLastRowFromOthers - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowWideGutter;                                                       //@synthesize shouldShowWideGutter=_shouldShowWideGutter - In the implementation block
@property (nonatomic,readonly) BOOL previousIsSameMessageGroup;                                                 //@synthesize previousIsSameMessageGroup=_previousIsSameMessageGroup - In the implementation block
@property (nonatomic,readonly) BOOL nextIsSameMessageGroup;                                                     //@synthesize nextIsSameMessageGroup=_nextIsSameMessageGroup - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableHideMenuItem;                                                   //@synthesize shouldEnableHideMenuItem=_shouldEnableHideMenuItem - In the implementation block
@property (nonatomic,readonly) BOOL shouldExpandFailedTapArea;                                                  //@synthesize shouldExpandFailedTapArea=_shouldExpandFailedTapArea - In the implementation block
@property (nonatomic,readonly) BOOL showNonPushableBubble;                                                      //@synthesize showNonPushableBubble=_showNonPushableBubble - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayableEphemeralMessage;                                              //@synthesize isDisplayableEphemeralMessage=_isDisplayableEphemeralMessage - In the implementation block
@property (nonatomic,readonly) BOOL showTombstoneMask;                                                          //@synthesize showTombstoneMask=_showTombstoneMask - In the implementation block
@property (nonatomic,readonly) BOOL previousIsJourneyPrompt;                                                    //@synthesize previousIsJourneyPrompt=_previousIsJourneyPrompt - In the implementation block
@property (nonatomic,copy,readonly) NSSet * readUserIds;                                                        //@synthesize readUserIds=_readUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * viewModelsByElementKind;                                     //@synthesize viewModelsByElementKind=_viewModelsByElementKind - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSentTextForNonMessengerUser;                                      //@synthesize shouldShowSentTextForNonMessengerUser=_shouldShowSentTextForNonMessengerUser - In the implementation block
@property (nonatomic,copy,readonly) MNAttributionViewModel * attributionViewModel;                              //@synthesize attributionViewModel=_attributionViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNAttachmentViewModelWithStyle * attachmentViewModelWithStyle;              //@synthesize attachmentViewModelWithStyle=_attachmentViewModelWithStyle - In the implementation block
@property (nonatomic,copy,readonly) FBMUser * nicknameChangeTarget;                                             //@synthesize nicknameChangeTarget=_nicknameChangeTarget - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayFlowerBorder;                                                  //@synthesize shouldDisplayFlowerBorder=_shouldDisplayFlowerBorder - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCameraQuickReply;                                                 //@synthesize shouldShowCameraQuickReply=_shouldShowCameraQuickReply - In the implementation block
@property (nonatomic,copy,readonly) MNGenericAdminMessageViewModel * genericAdminMessageViewModel;              //@synthesize genericAdminMessageViewModel=_genericAdminMessageViewModel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPokeAction;                                                       //@synthesize shouldShowPokeAction=_shouldShowPokeAction - In the implementation block
@property (nonatomic,readonly) BOOL isLastLightweightAction;                                                    //@synthesize isLastLightweightAction=_isLastLightweightAction - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(BOOL)shouldShowCameraQuickReply;
-(MNAttachmentViewModelWithStyle *)attachmentViewModelWithStyle;
-(MNAttributionViewModel *)attributionViewModel;
-(MNMessageCoreViewModel *)coreViewModel;
-(BOOL)shouldEnableHideMenuItem;
-(MNGenericAdminMessageViewModel *)genericAdminMessageViewModel;
-(BOOL)previousIsSameMessageGroup;
-(BOOL)shouldDisplayFlowerBorder;
-(BOOL)showTombstoneMask;
-(BOOL)shouldExpandFailedTapArea;
-(BOOL)displayAsSent;
-(BOOL)shouldShowWideGutter;
-(id)initWithMessage:(id)arg1 coreViewModel:(id)arg2 accessibilityLabel:(id)arg3 accessibilityHint:(id)arg4 sender:(id)arg5 previousType:(unsigned long long)arg6 nextType:(unsigned long long)arg7 profileImagePosition:(unsigned long long)arg8 readReceiptState:(unsigned long long)arg9 displayAsSent:(BOOL)arg10 isLastRow:(BOOL)arg11 isLastRowFromMe:(BOOL)arg12 isLastRowFromOthers:(BOOL)arg13 shouldShowWideGutter:(BOOL)arg14 previousIsSameMessageGroup:(BOOL)arg15 nextIsSameMessageGroup:(BOOL)arg16 shouldEnableHideMenuItem:(BOOL)arg17 shouldExpandFailedTapArea:(BOOL)arg18 showNonPushableBubble:(BOOL)arg19 isDisplayableEphemeralMessage:(BOOL)arg20 showTombstoneMask:(BOOL)arg21 previousIsJourneyPrompt:(BOOL)arg22 readUserIds:(id)arg23 viewModelsByElementKind:(id)arg24 shouldShowSentTextForNonMessengerUser:(BOOL)arg25 attributionViewModel:(id)arg26 attachmentViewModelWithStyle:(id)arg27 nicknameChangeTarget:(id)arg28 shouldDisplayFlowerBorder:(BOOL)arg29 shouldShowCameraQuickReply:(BOOL)arg30 genericAdminMessageViewModel:(id)arg31 shouldShowPokeAction:(BOOL)arg32 isLastLightweightAction:(BOOL)arg33 ;
-(NSDictionary *)viewModelsByElementKind;
-(BOOL)shouldShowPokeAction;
-(unsigned long long)profileImagePosition;
-(BOOL)nextIsSameMessageGroup;
-(BOOL)isLastLightweightAction;
-(BOOL)isDisplayableEphemeralMessage;
-(id)mn_conciseDescription;
-(unsigned long long)previousType;
-(unsigned long long)nextType;
-(BOOL)isLastRow;
-(BOOL)previousIsJourneyPrompt;
-(FBMUser *)nicknameChangeTarget;
-(id)viewModelForElementKind:(id)arg1 ;
-(BOOL)isLastRowFromMe;
-(BOOL)isLastRowFromOthers;
-(BOOL)showNonPushableBubble;
-(BOOL)shouldShowSentTextForNonMessengerUser;
-(unsigned long long)readReceiptState;
-(NSSet *)readUserIds;
-(FBStringWithRedactedDescription *)accessibilityLabel;
-(MNAppMessage *)message;
-(FBMUser *)sender;
-(NSString *)accessibilityHint;
@end

