/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(BOOL)filmStripView:(id)arg1 shouldBeginScrubbingAtTime:(SCD_Struct_FB25)arg2;
-(void)filmStripView:(id)arg1 didBeginScrubbingAtTime:(SCD_Struct_FB25)arg2;
-(void)filmStripView:(id)arg1 didScrubAtTime:(SCD_Struct_FB25)arg2;
-(void)filmStripViewDidEndScrubbing:(id)arg1;

@end
