/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNGroupsRoomMiniNUXContainerViewDelegate.h>

@protocol MNGroupsRoomMiniNUXViewControllerDelegate;
@class MNGroupsRoomMiniNUXContainerView, NSString;

@interface MNGroupsRoomMiniNUXViewController : UIViewController <MNGroupsRoomMiniNUXContainerViewDelegate> {

	MNGroupsRoomMiniNUXContainerView* _nuxViewContainer;
	id<MNGroupsRoomMiniNUXViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomMiniNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)miniNUXViewContainerDidTapOkay:(id)arg1 ;
-(void)setDelegate:(id<MNGroupsRoomMiniNUXViewControllerDelegate>)arg1 ;
-(id<MNGroupsRoomMiniNUXViewControllerDelegate>)delegate;
-(void)loadView;
@end

