/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadActionPanelActionHandling.h>

@protocol MNThreadClientSummaryUpdateCreating;
@class FBMThreadKey, FBUserSession, MNReportPageAction, MNNavigationCoordinator, MNBlockUserFullScreenViewController, NSString;

@interface MNThreadActionPanelReportPageActionHandler : NSObject <MNThreadActionPanelActionHandling> {

	FBMThreadKey* _threadKey;
	FBUserSession* _session;
	MNReportPageAction* _reportPageAction;
	MNNavigationCoordinator* _navigationCoordinator;
	MNBlockUserFullScreenViewController* _blockUserFullScreenViewController;
	id<MNThreadClientSummaryUpdateCreating> _summaryUpdateCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(id)initWithThreadKey:(id)arg1 session:(id)arg2 reportPageAction:(id)arg3 navigationCoordinator:(id)arg4 blockUserVC:(id)arg5 summaryUpdateCreator:(id)arg6 ;
@end
