/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFilmStripViewDelegate <NSObject>
@required
-(void)filmStripViewDidScroll:(id)arg1;
-(void)filmStripViewWillBeginDragging:(id)arg1;
-(void)filmStripViewDidEndDecelerating:(id)arg1;
-(void)filmStripViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)filmStripViewDidBeginZooming:(id)arg1;
-(void)filmStripViewDidEndZooming:(id)arg1;
-(BOOL)filmStripView:(id)arg1 shouldBeginScrubbingAtTime:(SCD_Struct_FB20)arg2;
-(void)filmStripView:(id)arg1 didBeginScrubbingAtTime:(SCD_Struct_FB20)arg2;
-(void)filmStripView:(id)arg1 didScrubAtTime:(SCD_Struct_FB20)arg2;
-(void)filmStripViewDidEndScrubbing:(id)arg1;

@end

