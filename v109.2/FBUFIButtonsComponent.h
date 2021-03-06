/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKCompositeComponent.h>

@class FBMemFeedback, FBFeedbackReactionDataProvider, NSArray, FBFeedToolbox, FBUFITheme, FBUFIFeedbackReactionsInputInvocationListenerAnnouncer, FBSentryErrorHandlerComponent;

@interface FBUFIButtonsComponent : CKCompositeComponent {

	BOOL _reactionEnabledForFeedback;
	FBMemFeedback* _feedback;
	FBFeedbackReactionDataProvider* _reactionDataProvider;
	NSArray* _trackingCodes;
	FBFeedToolbox* _toolbox;
	FBUFITheme* _theme;
	FBUFIFeedbackReactionsInputInvocationListenerAnnouncer* _reactionsInvocationAnnouncer;
	FBSentryErrorHandlerComponent* _sentryErrorHandlerComponent;
	CKTypedComponentAction<> _didLikeAction;
	CKTypedComponentAction<> _reactionsInputPresentationAction;
	CKTypedComponentAction<> _reactionsInputDismissalAction;
	CKTypedComponentAction<> _didReactAction;
	CKTypedComponentAction<> _commentAction;
	CKTypedComponentAction<CKComponent *> _shareAction;

}

@property (nonatomic,readonly) FBMemFeedback * feedback;                                                                           //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) FBFeedbackReactionDataProvider * reactionDataProvider;                                              //@synthesize reactionDataProvider=_reactionDataProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                                                       //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> didLikeAction;                                                             //@synthesize didLikeAction=_didLikeAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionsInputPresentationAction;                                          //@synthesize reactionsInputPresentationAction=_reactionsInputPresentationAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionsInputDismissalAction;                                             //@synthesize reactionsInputDismissalAction=_reactionsInputDismissalAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> didReactAction;                                                            //@synthesize didReactAction=_didReactAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> commentAction;                                                             //@synthesize commentAction=_commentAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<CKComponent *> shareAction;                                                  //@synthesize shareAction=_shareAction - In the implementation block
@property (nonatomic,readonly) BOOL reactionEnabledForFeedback;                                                                    //@synthesize reactionEnabledForFeedback=_reactionEnabledForFeedback - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBUFITheme * theme;                                                                                 //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) FBUFIFeedbackReactionsInputInvocationListenerAnnouncer * reactionsInvocationAnnouncer;              //@synthesize reactionsInvocationAnnouncer=_reactionsInvocationAnnouncer - In the implementation block
@property (nonatomic,readonly) FBSentryErrorHandlerComponent * sentryErrorHandlerComponent;                                        //@synthesize sentryErrorHandlerComponent=_sentryErrorHandlerComponent - In the implementation block
+(id)newWithFeedback:(id)arg1 reactionDataProvider:(id)arg2 style:(const FBUFIButtonsStyle*)arg3 customButtonContext:(id)arg4 toolbox:(id)arg5 ;
+(void)setAdditionalLikeButtonAttributes:(unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg1 ;
+(id)initialState;
-(FBFeedToolbox *)toolbox;
-(FBFeedbackReactionDataProvider *)reactionDataProvider;
-(CKTypedComponentAction<>)didLikeAction;
-(CKTypedComponentAction<>)reactionsInputPresentationAction;
-(CKTypedComponentAction<>)reactionsInputDismissalAction;
-(CKTypedComponentAction<>)didReactAction;
-(CKTypedComponentAction<>)commentAction;
-(CKTypedComponentAction<CKComponent *>)shareAction;
-(BOOL)reactionEnabledForFeedback;
-(FBUFIFeedbackReactionsInputInvocationListenerAnnouncer *)reactionsInvocationAnnouncer;
-(FBSentryErrorHandlerComponent *)sentryErrorHandlerComponent;
-(NSArray *)trackingCodes;
-(FBMemFeedback *)feedback;
-(FBUFITheme *)theme;
@end

