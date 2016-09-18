/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNGroupsRoomNUXViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNGroupsRoomNUXViewControllerDelegate;
@class MNGroupsRoomNUXView, NSString;

@interface MNGroupsRoomNUXViewController : UIViewController <MNGroupsRoomNUXViewDelegate, FBClassProvidable> {

	MNGroupsRoomNUXView* _nuxView;
	id<MNGroupsRoomNUXViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_closeNUX;
-(void)roomNUXViewDidTapOkay:(id)arg1 ;
-(void)setDelegate:(id<MNGroupsRoomNUXViewControllerDelegate>)arg1 ;
-(id<MNGroupsRoomNUXViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_configureNavigationBar;
@end

