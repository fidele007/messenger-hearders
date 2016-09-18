/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadActionPanelActionHandling.h>

@protocol MNThreadActionPanelActionHandlingDelegate;
@class MNNavigationCoordinator, FBMThreadKey, MNBlockUserFullScreenViewController, NSString;

@interface MNThreadActionPanelBlockUserActionHandler : NSObject <MNThreadActionPanelActionHandling> {

	MNNavigationCoordinator* _navigationCoordinator;
	FBMThreadKey* _threadKey;
	MNBlockUserFullScreenViewController* _blockUserVC;
	NSString* _targetUserId;
	id<MNThreadActionPanelActionHandlingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(id)initWithThreadKey:(id)arg1 blockAction:(id)arg2 navigationCoordinator:(id)arg3 blockUserVC:(id)arg4 ;
@end

