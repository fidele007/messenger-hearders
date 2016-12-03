/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RCTKeyCommands : NSObject
+(id)sharedInstance;
-(void)registerKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(BOOL)isKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(void)registerDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(BOOL)isDoublePressKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(long long)arg2 ;
@end
