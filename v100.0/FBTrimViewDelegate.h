/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTrimViewDelegate <NSObject>
@required
-(void)trimViewDidUpdateTrimHandlePosition:(id)arg1;
-(CGRect*)trimView:(id)arg1 contentRectInView:(id)arg2;
-(void)trimViewDidBeginInteraction:(id)arg1;
-(void)trimViewDidLongPress:(id)arg1 atPoint:(CGPoint)arg2;
-(void)trimViewDidEndInteraction:(id)arg1 atPoint:(CGPoint)arg2;
-(void)trimViewDidUpdateTrimRange:(id)arg1;

@end
