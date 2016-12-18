/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNContactSyncLearnMoreViewDelegate.h>

@protocol MNContactSyncLearnMoreViewControllerDelegate;
@class MNContactSyncLearnMoreView, NSString;

@interface MNContactSyncLearnMoreViewController : UIViewController <MNContactSyncLearnMoreViewDelegate> {

	MNContactSyncLearnMoreView* _contactSyncLearnMoreView;
	id<MNContactSyncLearnMoreViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContactSyncLearnMoreViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactSyncLearnMoreViewDidPressTurnOn:(id)arg1 ;
-(void)contactSyncLearnMoreViewDidPressNotNow:(id)arg1 ;
-(void)contactSyncLearnMoreViewDidPressManageContacts:(id)arg1 ;
-(void)setDelegate:(id<MNContactSyncLearnMoreViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactSyncLearnMoreViewControllerDelegate>)delegate;
-(void)loadView;
@end

