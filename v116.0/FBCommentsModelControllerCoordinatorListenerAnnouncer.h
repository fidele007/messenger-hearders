/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBAnnouncerBase.h>
#import <Messenger/FBCommentsModelControllerCoordinatorListener.h>

@class NSString;

@interface FBCommentsModelControllerCoordinatorListenerAnnouncer : FBAnnouncerBase <FBCommentsModelControllerCoordinatorListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modelControllerCoordinator:(id)arg1 didInsertHeadComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didInsertTailComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didUpdateComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didRemoveComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)modelControllerCoordinatorWillStartNeckLoading:(id)arg1 ;
-(void)modelControllerCoordinatorWillStartTailLoading:(id)arg1 ;
-(void)modelControllerCoordinatorWillStartHeadLoading:(id)arg1 ;
-(void)modelControllerCoordinatorDidFinishNeckLoading:(id)arg1 ;
-(void)modelControllerCoordinatorDidFinishTailLoading:(id)arg1 ;
-(void)modelControllerCoordinatorDidFinishHeadLoading:(id)arg1 ;
-(void)modelControllerCoordinator:(id)arg1 didEditComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didFailToEditComment:(id)arg2 error:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didPostComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didDeleteComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didFailToDeleteComment:(id)arg2 error:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didHideComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didFailToHideComment:(id)arg2 error:(id)arg3 ;
-(void)modelControllerCoordinator:(id)arg1 didUnhideComment:(id)arg2 ;
-(void)modelControllerCoordinator:(id)arg1 didFailToUnhideComment:(id)arg2 error:(id)arg3 ;
@end

