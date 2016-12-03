/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAudioRecorderDelegate <NSObject>
@required
-(BOOL)audioRecorderShouldRecordAsVoicemail:(id)arg1;
-(void)audioRecorder:(id)arg1 didRecordAudio:(id)arg2;
-(void)audioRecorder:(id)arg1 reachMaxDuration:(id)arg2;
-(void)audioRecorder:(id)arg1 updateVolume:(float)arg2;
-(void)audioRecorder:(id)arg1 updateTimestamp:(double)arg2;
-(void)audioRecorderStartFailed:(id)arg1;
-(void)audioRecorderDidStart:(id)arg1;
-(void)audioRecorderDidCancel:(id)arg1;
-(void)audioRecorderPermissionDenied:(id)arg1;

@end
