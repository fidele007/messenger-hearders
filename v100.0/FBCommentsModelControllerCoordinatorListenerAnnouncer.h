/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
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
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

