/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, FBStringWithRedactedDescription, NSArray, MNAudioAttachmentViewModel, MNVideoAttachmentViewModel, MNAttachmentViewModelWithStyle, FBMSticker, MNMessageProgressIndicatorConfiguration, NSDictionary, MNThreadCustomizationPromptViewModel, MNThreadJourneySetupViewModel, UIColor, FBMJoinableGroupInfo;

@interface MNMessageCoreViewModel : FBValueObject <NSCopying> {

	BOOL _isFromMe;
	BOOL _isMessageBodyFiltered;
	BOOL _isForwardable;
	BOOL _isFullBleed;
	BOOL _bubbleCanBeGrouped;
	BOOL _isRenderAsStickerContent;
	BOOL _hasFlowerBorder;
	BOOL _showCameraQuickReply;
	BOOL _canShowMontageUpsell;
	unsigned long long _messageContentType;
	unsigned long long _messageRowType;
	NSString* _senderId;
	unsigned long long _sendOrServerTimestamp;
	NSDate* _timestampDate;
	FBStringWithRedactedDescription* _messageBody;
	NSArray* _photoViewModels;
	MNAudioAttachmentViewModel* _audioAttachmentViewModel;
	MNVideoAttachmentViewModel* _videoAttachmentViewModel;
	NSArray* _fileAttachmentViewModels;
	MNAttachmentViewModelWithStyle* _attachmentViewModelWithStyle_DO_NOT_USE;
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

}

@property (nonatomic,readonly) unsigned long long messageContentType;                                                             //@synthesize messageContentType=_messageContentType - In the implementation block
@property (nonatomic,readonly) unsigned long long messageRowType;                                                                 //@synthesize messageRowType=_messageRowType - In the implementation block
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
@property (nonatomic,readonly) BOOL isFullBleed;                                                                                  //@synthesize isFullBleed=_isFullBleed - In the implementation block
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
@property (nonatomic,readonly) BOOL showCameraQuickReply;                                                                         //@synthesize showCameraQuickReply=_showCameraQuickReply - In the implementation block
@property (nonatomic,copy,readonly) FBMJoinableGroupInfo * joinableGroupInfo;                                                     //@synthesize joinableGroupInfo=_joinableGroupInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * montageReplyMessageId;                                                             //@synthesize montageReplyMessageId=_montageReplyMessageId - In the implementation block
@property (nonatomic,readonly) BOOL canShowMontageUpsell;                                                                         //@synthesize canShowMontageUpsell=_canShowMontageUpsell - In the implementation block
-(NSString *)senderId;
-(FBMSticker *)sticker;
-(UIColor *)themeColor;
-(MNAudioAttachmentViewModel *)audioAttachmentViewModel;
-(BOOL)isMessageBodyFiltered;
-(unsigned long long)messageRowType;
-(unsigned long long)messageContentType;
-(MNMessageProgressIndicatorConfiguration *)messageProgressIndicatorConfiguration;
-(NSArray *)photoViewModels;
-(MNVideoAttachmentViewModel *)videoAttachmentViewModel;
-(id)textViewModel;
-(NSArray *)fileAttachmentViewModels;
-(unsigned long long)likeStickerSize;
-(long long)bubbleStyle;
-(BOOL)isRenderAsStickerContent;
-(NSDictionary *)participantsNickname;
-(MNAttachmentViewModelWithStyle *)attachmentViewModelWithStyle_DO_NOT_USE;
-(BOOL)showCameraQuickReply;
-(BOOL)canShowMontageUpsell;
-(NSString *)montageReplyMessageId;
-(BOOL)hasFlowerBorder;
-(NSDate *)timestampDate;
-(MNThreadJourneySetupViewModel *)threadJourneySetupViewModel;
-(MNThreadCustomizationPromptViewModel *)threadCustomizationPromptViewModel;
-(NSString *)otherUserIdOnCanonicalThread;
-(FBMJoinableGroupInfo *)joinableGroupInfo;
-(unsigned long long)messageTextFontStyle;
-(BOOL)isFullBleed;
-(id)initWithMessageContentType:(unsigned long long)arg1 messageRowType:(unsigned long long)arg2 senderId:(id)arg3 isFromMe:(BOOL)arg4 sendOrServerTimestamp:(unsigned long long)arg5 timestampDate:(id)arg6 messageBody:(id)arg7 isMessageBodyFiltered:(BOOL)arg8 photoViewModels:(id)arg9 audioAttachmentViewModel:(id)arg10 videoAttachmentViewModel:(id)arg11 fileAttachmentViewModels:(id)arg12 attachmentViewModelWithStyle_DO_NOT_USE:(id)arg13 isForwardable:(BOOL)arg14 isFullBleed:(BOOL)arg15 sticker:(id)arg16 bubbleStyle:(long long)arg17 bubbleCanBeGrouped:(BOOL)arg18 messageTextFontStyle:(unsigned long long)arg19 likeStickerSize:(unsigned long long)arg20 messageProgressIndicatorConfiguration:(id)arg21 participantsNickname:(id)arg22 threadCustomizationPromptViewModel:(id)arg23 threadJourneySetupViewModel:(id)arg24 otherUserIdOnCanonicalThread:(id)arg25 isRenderAsStickerContent:(BOOL)arg26 themeColor:(id)arg27 hasFlowerBorder:(BOOL)arg28 showCameraQuickReply:(BOOL)arg29 joinableGroupInfo:(id)arg30 montageReplyMessageId:(id)arg31 canShowMontageUpsell:(BOOL)arg32 ;
-(unsigned long long)sendOrServerTimestamp;
-(BOOL)isForwardable;
-(BOOL)bubbleCanBeGrouped;
-(FBStringWithRedactedDescription *)messageBody;
-(BOOL)isFromMe;
@end

