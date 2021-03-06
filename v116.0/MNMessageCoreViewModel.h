/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, FBStringWithRedactedDescription, NSArray, MNAudioAttachmentViewModel, MNVideoAttachmentViewModel, MNAttachmentViewModelWithStyle, MNAttachmentViewLayoutConfiguration, FBMSticker, MNMessageProgressIndicatorConfiguration, NSDictionary, MNThreadCustomizationPromptViewModel, MNThreadJourneySetupViewModel, UIColor, FBMJoinableGroupInfo;

@interface MNMessageCoreViewModel : FBValueObject <NSCopying> {

	BOOL _isFromMe;
	BOOL _isMessageBodyFiltered;
	BOOL _isForwardable;
	BOOL _bubbleCanBeGrouped;
	BOOL _isRenderAsStickerContent;
	BOOL _hasFlowerBorder;
	BOOL _canShowMontageUpsell;
	BOOL _isPoke;
	BOOL _isLightweightAction;
	BOOL _isEmojiOnly;
	unsigned long long _messageContentType;
	NSString* _senderId;
	unsigned long long _sendOrServerTimestamp;
	NSDate* _timestampDate;
	FBStringWithRedactedDescription* _messageBody;
	NSArray* _photoViewModels;
	MNAudioAttachmentViewModel* _audioAttachmentViewModel;
	MNVideoAttachmentViewModel* _videoAttachmentViewModel;
	NSArray* _fileAttachmentViewModels;
	MNAttachmentViewModelWithStyle* _attachmentViewModelWithStyle_DO_NOT_USE;
	MNAttachmentViewLayoutConfiguration* _layoutConfiguration;
	FBMSticker* _sticker;
	long long _bubbleStyle;
	unsigned long long _messageTextFontStyle;
	unsigned long long _likeStickerSize;
	MNMessageProgressIndicatorConfiguration* _messageProgressIndicatorConfiguration;
	NSDictionary* _participantsNickname;
	MNThreadCustomizationPromptViewModel* _threadCustomizationPromptViewModel;
	MNThreadJourneySetupViewModel* _threadJourneySetupViewModel;
	NSString* _otherUserIdOnCanonicalThread;
	UIColor* _themeColor;
	FBMJoinableGroupInfo* _joinableGroupInfo;
	NSString* _montageReplyMessageId;
	NSArray* _profileRanges;

}

@property (nonatomic,readonly) unsigned long long messageContentType;                                                             //@synthesize messageContentType=_messageContentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                                                          //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe;                                                                                     //@synthesize isFromMe=_isFromMe - In the implementation block
@property (nonatomic,readonly) unsigned long long sendOrServerTimestamp;                                                          //@synthesize sendOrServerTimestamp=_sendOrServerTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestampDate;                                                                       //@synthesize timestampDate=_timestampDate - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * messageBody;                                                //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,readonly) BOOL isMessageBodyFiltered;                                                                        //@synthesize isMessageBodyFiltered=_isMessageBodyFiltered - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photoViewModels;                                                                    //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (nonatomic,copy,readonly) MNAudioAttachmentViewModel * audioAttachmentViewModel;                                        //@synthesize audioAttachmentViewModel=_audioAttachmentViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNVideoAttachmentViewModel * videoAttachmentViewModel;                                        //@synthesize videoAttachmentViewModel=_videoAttachmentViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fileAttachmentViewModels;                                                           //@synthesize fileAttachmentViewModels=_fileAttachmentViewModels - In the implementation block
@property (nonatomic,copy,readonly) MNAttachmentViewModelWithStyle * attachmentViewModelWithStyle_DO_NOT_USE;                     //@synthesize attachmentViewModelWithStyle_DO_NOT_USE=_attachmentViewModelWithStyle_DO_NOT_USE - In the implementation block
@property (nonatomic,readonly) BOOL isForwardable;                                                                                //@synthesize isForwardable=_isForwardable - In the implementation block
@property (nonatomic,copy,readonly) MNAttachmentViewLayoutConfiguration * layoutConfiguration;                                    //@synthesize layoutConfiguration=_layoutConfiguration - In the implementation block
@property (nonatomic,copy,readonly) FBMSticker * sticker;                                                                         //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,readonly) long long bubbleStyle;                                                                             //@synthesize bubbleStyle=_bubbleStyle - In the implementation block
@property (nonatomic,readonly) BOOL bubbleCanBeGrouped;                                                                           //@synthesize bubbleCanBeGrouped=_bubbleCanBeGrouped - In the implementation block
@property (nonatomic,readonly) unsigned long long messageTextFontStyle;                                                           //@synthesize messageTextFontStyle=_messageTextFontStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long likeStickerSize;                                                                //@synthesize likeStickerSize=_likeStickerSize - In the implementation block
@property (nonatomic,copy,readonly) MNMessageProgressIndicatorConfiguration * messageProgressIndicatorConfiguration;              //@synthesize messageProgressIndicatorConfiguration=_messageProgressIndicatorConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * participantsNickname;                                                          //@synthesize participantsNickname=_participantsNickname - In the implementation block
@property (nonatomic,copy,readonly) MNThreadCustomizationPromptViewModel * threadCustomizationPromptViewModel;                    //@synthesize threadCustomizationPromptViewModel=_threadCustomizationPromptViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNThreadJourneySetupViewModel * threadJourneySetupViewModel;                                  //@synthesize threadJourneySetupViewModel=_threadJourneySetupViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherUserIdOnCanonicalThread;                                                      //@synthesize otherUserIdOnCanonicalThread=_otherUserIdOnCanonicalThread - In the implementation block
@property (nonatomic,readonly) BOOL isRenderAsStickerContent;                                                                     //@synthesize isRenderAsStickerContent=_isRenderAsStickerContent - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                                                                         //@synthesize themeColor=_themeColor - In the implementation block
@property (nonatomic,readonly) BOOL hasFlowerBorder;                                                                              //@synthesize hasFlowerBorder=_hasFlowerBorder - In the implementation block
@property (nonatomic,copy,readonly) FBMJoinableGroupInfo * joinableGroupInfo;                                                     //@synthesize joinableGroupInfo=_joinableGroupInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * montageReplyMessageId;                                                             //@synthesize montageReplyMessageId=_montageReplyMessageId - In the implementation block
@property (nonatomic,readonly) BOOL canShowMontageUpsell;                                                                         //@synthesize canShowMontageUpsell=_canShowMontageUpsell - In the implementation block
@property (nonatomic,readonly) BOOL isPoke;                                                                                       //@synthesize isPoke=_isPoke - In the implementation block
@property (nonatomic,readonly) BOOL isLightweightAction;                                                                          //@synthesize isLightweightAction=_isLightweightAction - In the implementation block
@property (nonatomic,copy,readonly) NSArray * profileRanges;                                                                      //@synthesize profileRanges=_profileRanges - In the implementation block
@property (nonatomic,readonly) BOOL isEmojiOnly;                                                                                  //@synthesize isEmojiOnly=_isEmojiOnly - In the implementation block
-(BOOL)isMessageBodyFiltered;
-(MNAudioAttachmentViewModel *)audioAttachmentViewModel;
-(MNMessageProgressIndicatorConfiguration *)messageProgressIndicatorConfiguration;
-(MNVideoAttachmentViewModel *)videoAttachmentViewModel;
-(id)textViewModel;
-(NSArray *)fileAttachmentViewModels;
-(unsigned long long)likeStickerSize;
-(long long)bubbleStyle;
-(BOOL)isRenderAsStickerContent;
-(BOOL)isLightweightAction;
-(MNAttachmentViewModelWithStyle *)attachmentViewModelWithStyle_DO_NOT_USE;
-(NSString *)montageReplyMessageId;
-(BOOL)canShowMontageUpsell;
-(unsigned long long)sendOrServerTimestamp;
-(MNAttachmentViewLayoutConfiguration *)layoutConfiguration;
-(unsigned long long)messageTextFontStyle;
-(MNThreadJourneySetupViewModel *)threadJourneySetupViewModel;
-(MNThreadCustomizationPromptViewModel *)threadCustomizationPromptViewModel;
-(NSString *)otherUserIdOnCanonicalThread;
-(id)initWithMessageContentType:(unsigned long long)arg1 senderId:(id)arg2 isFromMe:(BOOL)arg3 sendOrServerTimestamp:(unsigned long long)arg4 timestampDate:(id)arg5 messageBody:(id)arg6 isMessageBodyFiltered:(BOOL)arg7 photoViewModels:(id)arg8 audioAttachmentViewModel:(id)arg9 videoAttachmentViewModel:(id)arg10 fileAttachmentViewModels:(id)arg11 attachmentViewModelWithStyle_DO_NOT_USE:(id)arg12 isForwardable:(BOOL)arg13 layoutConfiguration:(id)arg14 sticker:(id)arg15 bubbleStyle:(long long)arg16 bubbleCanBeGrouped:(BOOL)arg17 messageTextFontStyle:(unsigned long long)arg18 likeStickerSize:(unsigned long long)arg19 messageProgressIndicatorConfiguration:(id)arg20 participantsNickname:(id)arg21 threadCustomizationPromptViewModel:(id)arg22 threadJourneySetupViewModel:(id)arg23 otherUserIdOnCanonicalThread:(id)arg24 isRenderAsStickerContent:(BOOL)arg25 themeColor:(id)arg26 hasFlowerBorder:(BOOL)arg27 joinableGroupInfo:(id)arg28 montageReplyMessageId:(id)arg29 canShowMontageUpsell:(BOOL)arg30 isPoke:(BOOL)arg31 isLightweightAction:(BOOL)arg32 profileRanges:(id)arg33 isEmojiOnly:(BOOL)arg34 ;
-(BOOL)bubbleCanBeGrouped;
-(BOOL)isPoke;
-(NSString *)senderId;
-(BOOL)isEmojiOnly;
-(NSArray *)photoViewModels;
-(unsigned long long)messageContentType;
-(BOOL)isForwardable;
-(BOOL)hasFlowerBorder;
-(NSArray *)profileRanges;
-(NSDictionary *)participantsNickname;
-(FBMJoinableGroupInfo *)joinableGroupInfo;
-(FBStringWithRedactedDescription *)messageBody;
-(BOOL)isFromMe;
-(NSDate *)timestampDate;
-(UIColor *)themeColor;
-(FBMSticker *)sticker;
@end

