/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol FBMobileConfigQEUniverseViewControllerDelegate;
@interface FBMobileConfigQEUniverseViewController : UITableViewController {

	FBMobileConfigQEUniverseInfo* _universe;
	id<FBMobileConfigQEUniverseViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMobileConfigQEUniverseViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUniverse:(FBMobileConfigQEUniverseInfo*)arg1 ;
-(void)setDelegate:(id<FBMobileConfigQEUniverseViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBMobileConfigQEUniverseViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
@end

