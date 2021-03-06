/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/AVAudioPlayerDelegate.h>
#import <Messenger/FBSystemAudioSessionManagerListener.h>
#import <Messenger/FBAudioSessionManagerClient.h>

@protocol FBWebRTCCallAudioPlayerDelegate;
@class AVAudioPlayer, NSTimer, NSString;

@interface FBWebRTCCallAudioPlayer : NSObject <AVAudioPlayerDelegate, FBSystemAudioSessionManagerListener, FBAudioSessionManagerClient> {

	BOOL _speakerphoneForced;
	BOOL _isExternal;
	BOOL _isActive;
	BOOL _receiverDisabled;
	BOOL _playerLowPriority;
	unsigned long long _state;
	id<FBWebRTCCallAudioPlayerDelegate> _delegate;
	AVAudioPlayer* _audioPlayer;
	NSTimer* _playTimer;

}

@property (nonatomic,retain) AVAudioPlayer * audioPlayer;                                      //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) NSTimer * playTimer;                                              //@synthesize playTimer=_playTimer - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
-(void)open:(id)arg1 playerView:(id)arg2 ;
-(void)seekTo:(double)arg1 ;
-(void)_invalidatePlayTimer;
-(void)_startPlaying:(double)arg1 ;
-(BOOL)_existHighPriorityClient;
-(void)_updatePlayerTimestamp;
-(void)_reloadSessionClient:(BOOL)arg1 ;
-(BOOL)_isSpeakerphoneForced;
-(BOOL)_isCurrentlyExternal;
-(void)onApplicationWillResignActive:(id)arg1 ;
-(BOOL)_shouldOverrideSpeaker;
-(void)_performStartPlaying:(double)arg1 ;
-(void)setPlayTimer:(NSTimer *)arg1 ;
-(void)_interruptPlayer;
-(BOOL)_isCurrentlyReceiver;
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(void)highPriorityClientBecameActive;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(unsigned long long)inputOptions;
-(NSTimer *)playTimer;
-(void)setDelegate:(id<FBWebRTCCallAudioPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCCallAudioPlayerDelegate>)delegate;
-(unsigned long long)state;
-(double)duration;
-(void)stop;
-(void)resume;
-(void)close;
-(void)pause;
-(void)start:(double)arg1 ;
-(void)beginInterruption;
-(double)currentTime;
-(AVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)audioPlayerBeginInterruption:(id)arg1 ;
-(void)audioPlayerEndInterruption:(id)arg1 ;
-(void)_stopAudioPlayer;
-(void)toggleSpeaker;
-(unsigned long long)clientPriority;
@end

