/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNVideoControllerDelegate <NSObject>
@required
-(void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2;
-(void)videoController:(id)arg1 disassociatePlayer:(id)arg2;
-(void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(BOOL)arg6;
-(void)videoController:(id)arg1 didChangeState:(long long)arg2;

@end

