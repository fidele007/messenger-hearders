/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@interface FBCropRectangleView : UIView {

	int _style;
	BOOL _shouldDrawInnerGrid;
	double _boundsInsetFromCrop;

}

@property (assign,nonatomic) double boundsInsetFromCrop;              //@synthesize boundsInsetFromCrop=_boundsInsetFromCrop - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawInnerGrid;                //@synthesize shouldDrawInnerGrid=_shouldDrawInnerGrid - In the implementation block
-(void)setBoundsInsetFromCrop:(double)arg1 ;
-(void)setShouldDrawInnerGrid:(BOOL)arg1 ;
-(BOOL)shouldDrawInnerGrid;
-(double)boundsInsetFromCrop;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
@end

