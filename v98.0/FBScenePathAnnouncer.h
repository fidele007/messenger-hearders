/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

