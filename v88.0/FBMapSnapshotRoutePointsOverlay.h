/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMapSnapshotOverlayProvider.h>

@class NSArray, UIColor, NSString;

@interface FBMapSnapshotRoutePointsOverlay : NSObject <FBMapSnapshotOverlayProvider> {

	NSArray* _points;
	double _lineWidth;
	UIColor* _lineColor;
	double _borderWidth;
	UIColor* _borderColor;

}

@property (assign,nonatomic) double lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                   //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                    //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                 //@synthesize borderColor=_borderColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)addOverlayForSnapshot:(id)arg1 toContext:(CGContextRef)arg2 ;
-(id)diskCacheKey;
-(id)initWithRoutePoints:(id)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
@end

