/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScenePathContextDelegate.h>

@class FBScenePathAnnouncerListenerAnnouncer, FBScenePath;

@interface FBScenePathAnnouncer : NSObject <FBScenePathContextDelegate> {

	FBScenePathAnnouncerListenerAnnouncer* _announcer;
	FBScenePath* _activePath;

}
-(void)scenePathContextForView:(id)arg1 didInvalidatePath:(id)arg2 ;
-(void)scenePathContextForView:(id)arg1 didUpdateActivePathTo:(id)arg2 ;
-(id)init;
-(id)description;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

