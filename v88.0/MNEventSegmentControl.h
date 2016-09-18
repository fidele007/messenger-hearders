/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@protocol MNEventSegmentControlDelegate;
@class NSMutableDictionary, FBMemEvent, NSString, FBUserSession;

@interface MNEventSegmentControl : UIControl {

	NSMutableDictionary* _segments;
	FBMemEvent* _event;
	NSString* _viewerGuestStatus;
	FBUserSession* _session;
	id<MNEventSegmentControlDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEventSegmentControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setViewerGuestStatus:(id)arg1 ;
-(void)_setUpButtons;
-(void)_didSelectRsvpStatus:(id)arg1 ;
-(void)setDelegate:(id<MNEventSegmentControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNEventSegmentControlDelegate>)delegate;
-(void)setEvent:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

