/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

