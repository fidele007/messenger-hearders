/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@class FBUserSession, FBMemFeedback, NSMutableArray;

@interface FBUFIReactionsFacepileAndTextCountsComponentController : CKComponentController {

	FBUserSession* _session;
	FBMemFeedback* _feedback;
	BOOL _loading;
	NSMutableArray* _reactions;
	unsigned long long _selectedIndex;

}
-(id)initWithComponent:(id)arg1 ;
-(void)didUpdateComponent;
-(void)handleComponent:(id)arg1 pan:(id)arg2 ;
-(void)_updateFacepileIfNecessary;
-(void)willMount;
-(void)_toggleViewerReaction;
-(long long)_viewerReactionIndex;
-(void)_downloadCompletionBlockWithReactors:(id)arg1 ;
-(void)_loadData;
@end

