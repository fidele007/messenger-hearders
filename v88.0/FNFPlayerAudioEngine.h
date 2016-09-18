/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFPlayerAudioEngine <NSObject>
@required
-(void)setVolume:(float)arg1 rampTime:(float)arg2;
-(void)setAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(/*^block*/id)arg3 errorCallback:(/*^block*/id)arg4 sampleFrameSize:(unsigned)arg5;
-(void)playWithStartTime:(SCD_Struct_FB20)arg1;
-(void)stopLoadingData;
-(void)resumeEnqueuingData;
-(void)invalidate;
-(void)reset;
-(void)stop;
-(void)pause;
-(SCD_Struct_FB20*)getCurrentTime;
-(void)prepareToPlay;

@end

