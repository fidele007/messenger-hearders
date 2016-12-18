/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@protocol FBFeedbackTargetProtocol;
@class NSString, FBScenePath, FBDisplayableMediaTransitionManager, UIViewController, FBMemTextWithEntities;

@interface FBCommentBubbleIntentTarget : FBIntentTarget {

	BOOL _showComposerLikeButton;
	id<FBFeedbackTargetProtocol> _feedbackTarget;
	unsigned long long _layoutIdiom;
	NSString* _focusedCommentID;
	NSString* _focusedReplyID;
	FBScenePath* _scenePath;
	FBDisplayableMediaTransitionManager* _transitionManager;
	UIViewController* _parentViewController;
	double _fixedPopoverHeight;
	double _popoverTopInset;
	NSString* _composerActivationSource;
	FBMemTextWithEntities* _composerPrefillText;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) id<FBFeedbackTargetProtocol> feedbackTarget;                          //@synthesize feedbackTarget=_feedbackTarget - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                       //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedCommentID;                                     //@synthesize focusedCommentID=_focusedCommentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedReplyID;                                       //@synthesize focusedReplyID=_focusedReplyID - In the implementation block
@property (nonatomic,copy,readonly) FBScenePath * scenePath;                                         //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBDisplayableMediaTransitionManager * transitionManager;              //@synthesize transitionManager=_transitionManager - In the implementation block
@property (nonatomic,readonly) UIViewController * parentViewController;                              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) double fixedPopoverHeight;                                            //@synthesize fixedPopoverHeight=_fixedPopoverHeight - In the implementation block
@property (nonatomic,readonly) double popoverTopInset;                                               //@synthesize popoverTopInset=_popoverTopInset - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerActivationSource;                             //@synthesize composerActivationSource=_composerActivationSource - In the implementation block
@property (nonatomic,copy,readonly) FBMemTextWithEntities * composerPrefillText;                     //@synthesize composerPrefillText=_composerPrefillText - In the implementation block
@property (nonatomic,readonly) BOOL showComposerLikeButton;                                          //@synthesize showComposerLikeButton=_showComposerLikeButton - In the implementation block
@property (nonatomic,readonly) id callback;                                                          //@synthesize callback=_callback - In the implementation block
+(id)commentBubbleTargetWithFeedbackTarget:(id)arg1 layoutIdiom:(unsigned long long)arg2 focusedCommentID:(id)arg3 focusedReplyID:(id)arg4 scenePath:(id)arg5 transitionManager:(id)arg6 parentViewController:(id)arg7 fixedPopoverHeight:(double)arg8 popoverTopInset:(double)arg9 composerActivationSource:(id)arg10 composerPrefillText:(id)arg11 showComposerLikeButton:(BOOL)arg12 callback:(/*^block*/id)arg13 ;
-(FBScenePath *)scenePath;
-(unsigned long long)layoutIdiom;
-(NSString *)focusedCommentID;
-(NSString *)focusedReplyID;
-(id<FBFeedbackTargetProtocol>)feedbackTarget;
-(id)initWithFeedbackTarget:(id)arg1 layoutIdiom:(unsigned long long)arg2 focusedCommentID:(id)arg3 focusedReplyID:(id)arg4 scenePath:(id)arg5 transitionManager:(id)arg6 parentViewController:(id)arg7 fixedPopoverHeight:(double)arg8 popoverTopInset:(double)arg9 composerActivationSource:(id)arg10 composerPrefillText:(id)arg11 showComposerLikeButton:(BOOL)arg12 callback:(/*^block*/id)arg13 ;
-(FBDisplayableMediaTransitionManager *)transitionManager;
-(double)fixedPopoverHeight;
-(double)popoverTopInset;
-(NSString *)composerActivationSource;
-(FBMemTextWithEntities *)composerPrefillText;
-(BOOL)showComposerLikeButton;
-(UIViewController *)parentViewController;
-(id)callback;
@end

