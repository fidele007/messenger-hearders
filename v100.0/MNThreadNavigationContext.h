/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNLocalThreadQuery, MNMessageSendConversionContext, NSString, MNComposerExtensionTarget, MNTextAndAttachmentForwardContent, MNMessagesViewNavigationOriginType;

@interface MNThreadNavigationContext : FBValueObject <NSCopying> {

	BOOL _flowersBorderModeEnabled;
	BOOL _autoSendReplyContent;
	BOOL _scrollToFailure;
	BOOL _animated;
	MNLocalThreadQuery* _localThreadQuery;
	MNMessageSendConversionContext* _messageSendConversionContext;
	NSString* _initialComposerExtensionIdentifier;
	MNComposerExtensionTarget* _initialComposerExtensionTarget;
	MNTextAndAttachmentForwardContent* _replyContent;
	long long _pushDestination;
	NSString* _loggingSource;
	MNMessagesViewNavigationOriginType* _navigationOriginType;

}

@property (nonatomic,copy,readonly) MNLocalThreadQuery * localThreadQuery;                                      //@synthesize localThreadQuery=_localThreadQuery - In the implementation block
@property (nonatomic,copy,readonly) MNMessageSendConversionContext * messageSendConversionContext;              //@synthesize messageSendConversionContext=_messageSendConversionContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialComposerExtensionIdentifier;                              //@synthesize initialComposerExtensionIdentifier=_initialComposerExtensionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) MNComposerExtensionTarget * initialComposerExtensionTarget;                 //@synthesize initialComposerExtensionTarget=_initialComposerExtensionTarget - In the implementation block
@property (nonatomic,readonly) BOOL flowersBorderModeEnabled;                                                   //@synthesize flowersBorderModeEnabled=_flowersBorderModeEnabled - In the implementation block
@property (nonatomic,copy,readonly) MNTextAndAttachmentForwardContent * replyContent;                           //@synthesize replyContent=_replyContent - In the implementation block
@property (nonatomic,readonly) BOOL autoSendReplyContent;                                                       //@synthesize autoSendReplyContent=_autoSendReplyContent - In the implementation block
@property (nonatomic,readonly) long long pushDestination;                                                       //@synthesize pushDestination=_pushDestination - In the implementation block
@property (nonatomic,readonly) BOOL scrollToFailure;                                                            //@synthesize scrollToFailure=_scrollToFailure - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                                                   //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingSource;                                                   //@synthesize loggingSource=_loggingSource - In the implementation block
@property (nonatomic,copy,readonly) MNMessagesViewNavigationOriginType * navigationOriginType;                  //@synthesize navigationOriginType=_navigationOriginType - In the implementation block
-(id)initWithLocalThreadQuery:(id)arg1 messageSendConversionContext:(id)arg2 initialComposerExtensionIdentifier:(id)arg3 initialComposerExtensionTarget:(id)arg4 flowersBorderModeEnabled:(BOOL)arg5 replyContent:(id)arg6 autoSendReplyContent:(BOOL)arg7 pushDestination:(long long)arg8 scrollToFailure:(BOOL)arg9 animated:(BOOL)arg10 loggingSource:(id)arg11 navigationOriginType:(id)arg12 ;
-(MNLocalThreadQuery *)localThreadQuery;
-(BOOL)flowersBorderModeEnabled;
-(long long)pushDestination;
-(BOOL)scrollToFailure;
-(NSString *)loggingSource;
-(MNMessageSendConversionContext *)messageSendConversionContext;
-(MNComposerExtensionTarget *)initialComposerExtensionTarget;
-(MNTextAndAttachmentForwardContent *)replyContent;
-(MNMessagesViewNavigationOriginType *)navigationOriginType;
-(BOOL)autoSendReplyContent;
-(NSString *)initialComposerExtensionIdentifier;
-(BOOL)animated;
@end

