/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMontageMessageController <NSObject>
@property (assign,nonatomic,__weak) id<MNMontageMessageControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL hasRequestedPlaying; 
@property (nonatomic,readonly) BOOL hasStartedPlaying; 
@property (nonatomic,readonly) unsigned long long requestedPlayingTime; 
@property (nonatomic,readonly) unsigned long long startedPlayingTime; 
@required
-(id)messageView;
-(BOOL)updatesProgressManually;
-(void)preloadContent;
-(BOOL)downloadContentAndPlay;
-(BOOL)hasRequestedPlaying;
-(BOOL)hasStartedPlaying;
-(unsigned long long)requestedPlayingTime;
-(unsigned long long)startedPlayingTime;
-(void)setDelegate:(id)arg1;
-(id<MNMontageMessageControllerDelegate>)delegate;
-(double)duration;
-(void)stop;
-(id)message;
-(void)resume;
-(void)pause;

@end
