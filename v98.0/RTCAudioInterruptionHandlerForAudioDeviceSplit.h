/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface RTCAudioInterruptionHandlerForAudioDeviceSplit : NSObject {

	AudioDeviceIPhoneSplit* _owner;

}
-(void)registerHandlers;
-(void)unregisterHandlers;
-(void)audioSessionInterrupted:(id)arg1 ;
-(void)dealloc;
-(void)setOwner:(AudioDeviceIPhoneSplit*)arg1 ;
-(id)initWithOwner:(AudioDeviceIPhoneSplit*)arg1 ;
@end
