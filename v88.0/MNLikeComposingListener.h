/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLikeComposingListener <NSObject>
@required
-(void)didBeginComposingLikeStickerWithType:(unsigned long long)arg1 maxDuration:(double)arg2 emoji:(id)arg3;
-(void)didCancelComposingLikeStickerTimedOut:(BOOL)arg1;
-(void)didEndComposingLikeStickerWithType:(unsigned long long)arg1 emoji:(id)arg2 sender:(id)arg3;

@end

