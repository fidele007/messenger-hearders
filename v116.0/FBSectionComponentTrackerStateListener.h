/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSectionComponentTrackerStateListener <NSObject>
@required
-(void)didApplyChangeset:(id)arg1 sectionComponentTracker:(id)arg2;
-(void)componentWillAppearUsingTracker:(id)arg1;
-(void)willGenerateChangesetFromPreviousComponent:(id)arg1;
-(void)didGenerateChangesetFromPreviousComponent:(id)arg1 sectionComponentTracker:(id)arg2;
-(void)willGenerateNewSectionComponentHierarchy:(id)arg1;
-(void)didGenerateSectionComponentHierarchy:(id)arg1 currentStates:(id)arg2 sectionComponentTracker:(id)arg3;
-(void)didUpdateStateWithOldValues:(id)arg1 allCurrentStates:(id)arg2 tracker:(id)arg3;

@end

