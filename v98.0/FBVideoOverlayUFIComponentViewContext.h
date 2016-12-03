/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedToolbox, NSArray;

@interface FBVideoOverlayUFIComponentViewContext : NSObject {

	FBFeedToolbox* _toolbox;
	unsigned long long _ufiThemeType;
	NSArray* _trackingCodes;
	CKTypedComponentAction<> _commentAction;
	CKTypedComponentAction<> _shareAction;
	CKTypedComponentAction<> _countsAction;
	CKTypedComponentAction<> _reactionsInputPresentationAction;
	CKTypedComponentAction<> _reactionsInputDismissalAction;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) unsigned long long ufiThemeType;                                        //@synthesize ufiThemeType=_ufiThemeType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                           //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> commentAction;                                 //@synthesize commentAction=_commentAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> shareAction;                                   //@synthesize shareAction=_shareAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> countsAction;                                  //@synthesize countsAction=_countsAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionsInputPresentationAction;              //@synthesize reactionsInputPresentationAction=_reactionsInputPresentationAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionsInputDismissalAction;                 //@synthesize reactionsInputDismissalAction=_reactionsInputDismissalAction - In the implementation block
-(NSArray *)trackingCodes;
-(FBFeedToolbox *)toolbox;
-(unsigned long long)ufiThemeType;
-(CKTypedComponentAction<>)reactionsInputPresentationAction;
-(CKTypedComponentAction<>)reactionsInputDismissalAction;
-(CKTypedComponentAction<>)countsAction;
-(CKTypedComponentAction<>)commentAction;
-(id)initWithToolbox:(id)arg1 ufiThemeType:(unsigned long long)arg2 trackingCodes:(id)arg3 commentAction:(CKTypedComponentAction<>)arg4 shareAction:(CKTypedComponentAction<>)arg5 countsAction:(CKTypedComponentAction<>)arg6 reactionsInputPresentationAction:(CKTypedComponentAction<>)arg7 reactionsInputDismissalAction:(CKTypedComponentAction<>)arg8 ;
-(CKTypedComponentAction<>)shareAction;
@end
