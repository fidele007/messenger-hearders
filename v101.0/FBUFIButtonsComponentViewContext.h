/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedToolbox, NSArray;

@interface FBUFIButtonsComponentViewContext : NSObject {

	FBUFIButtonsComponentViewContextOptions _options;
	unsigned long long _theme;
	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	CKTypedComponentAction<> _likeAction;
	CKTypedComponentAction<> _commentAction;
	CKTypedComponentAction<> _shareAction;
	CKTypedComponentAction<> _fallbackAction;
	CKTypedComponentAction<> _reactionDockPresentedAction;
	CKTypedComponentAction<> _reactionDockDismissedAction;

}

@property (nonatomic,readonly) unsigned long long theme;                                          //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                           //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                      //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> likeAction;                               //@synthesize likeAction=_likeAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> commentAction;                            //@synthesize commentAction=_commentAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> shareAction;                              //@synthesize shareAction=_shareAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> fallbackAction;                           //@synthesize fallbackAction=_fallbackAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionDockPresentedAction;              //@synthesize reactionDockPresentedAction=_reactionDockPresentedAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionDockDismissedAction;              //@synthesize reactionDockDismissedAction=_reactionDockDismissedAction - In the implementation block
@property (nonatomic,readonly) FBUFIButtonsComponentViewContextOptions options;                   //@synthesize options=_options - In the implementation block
-(FBFeedToolbox *)toolbox;
-(NSArray *)trackingCodes;
-(CKTypedComponentAction<>)commentAction;
-(CKTypedComponentAction<>)likeAction;
-(id)initWithTheme:(unsigned long long)arg1 toolbox:(id)arg2 trackingCodes:(id)arg3 likeAction:(CKTypedComponentAction<>)arg4 commentAction:(CKTypedComponentAction<>)arg5 shareAction:(CKTypedComponentAction<>)arg6 fallbackAction:(CKTypedComponentAction<>)arg7 reactionDockPresentedAction:(CKTypedComponentAction<>)arg8 reactionDockDismissedAction:(CKTypedComponentAction<>)arg9 options:(FBUFIButtonsComponentViewContextOptions)arg10 ;
-(CKTypedComponentAction<>)fallbackAction;
-(CKTypedComponentAction<>)reactionDockPresentedAction;
-(CKTypedComponentAction<>)reactionDockDismissedAction;
-(FBUFIButtonsComponentViewContextOptions)options;
-(CKTypedComponentAction<>)shareAction;
-(unsigned long long)theme;
@end
