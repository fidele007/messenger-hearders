/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedToolbox, NSArray, NSString;

@interface FBVideoOverlayUFIComponentViewContext : NSObject {

	BOOL _omitButtons;
	BOOL _supportSpatialReaction;
	FBFeedToolbox* _toolbox;
	unsigned long long _ufiThemeType;
	NSArray* _trackingCodes;
	NSString* _mediaId;
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
@property (nonatomic,readonly) BOOL omitButtons;                                                       //@synthesize omitButtons=_omitButtons - In the implementation block
@property (nonatomic,readonly) BOOL supportSpatialReaction;                                            //@synthesize supportSpatialReaction=_supportSpatialReaction - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaId;                                                //@synthesize mediaId=_mediaId - In the implementation block
-(FBFeedToolbox *)toolbox;
-(unsigned long long)ufiThemeType;
-(BOOL)omitButtons;
-(CKTypedComponentAction<>)reactionsInputPresentationAction;
-(CKTypedComponentAction<>)reactionsInputDismissalAction;
-(CKTypedComponentAction<>)shareAction;
-(CKTypedComponentAction<>)countsAction;
-(CKTypedComponentAction<>)commentAction;
-(BOOL)supportSpatialReaction;
-(id)initWithToolbox:(id)arg1 ufiThemeType:(unsigned long long)arg2 trackingCodes:(id)arg3 commentAction:(CKTypedComponentAction<>)arg4 shareAction:(CKTypedComponentAction<>)arg5 countsAction:(CKTypedComponentAction<>)arg6 reactionsInputPresentationAction:(CKTypedComponentAction<>)arg7 reactionsInputDismissalAction:(CKTypedComponentAction<>)arg8 omitButtons:(BOOL)arg9 supportSpatialReaction:(BOOL)arg10 mediaId:(id)arg11 ;
-(NSArray *)trackingCodes;
-(NSString *)mediaId;
@end

